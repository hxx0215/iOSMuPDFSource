/* This file contains wrapper functions for pdf_jsimp functions implemented
 * in C++, from which calls to fz_throw aren't safe. The C++ versions
 * return errors explicitly, and these wrappers then throw them. */

#include "mupdf/pdf.h"
#include "pdf-jsimp-cpp.h"
const char *pdf_new_jsimp_cpp(fz_context *ctx, void *jsctx, pdf_jsimp **imp)
{
    return NULL;
}
pdf_jsimp *pdf_new_jsimp(fz_context *ctx, void *jsctx)
{
	pdf_jsimp *jsi = NULL;
	const char *err = pdf_new_jsimp_cpp(ctx, jsctx, &jsi);
	if (err != NULL)
		fz_throw(ctx, FZ_ERROR_GENERIC, "%s", err);

	return jsi;
}
fz_context *pdf_jsimp_ctx_cpp(pdf_jsimp *imp)
{
    return NULL;
}
const char *pdf_drop_jsimp_cpp(pdf_jsimp *imp)
{
    return NULL;
}
void pdf_drop_jsimp(pdf_jsimp *imp)
{
	if (imp)
	{
		fz_context *ctx = pdf_jsimp_ctx_cpp(imp);
		const char *err = pdf_drop_jsimp_cpp(imp);
		if (err != NULL)
			fz_warn(ctx, "%s", err);
	}
}
const char *pdf_jsimp_new_type_cpp(pdf_jsimp *imp, pdf_jsimp_dtr *dtr, pdf_jsimp_type **type)
{
    return NULL;
}
pdf_jsimp_type *pdf_jsimp_new_type(pdf_jsimp *imp, pdf_jsimp_dtr *dtr, char *name)
{
	pdf_jsimp_type *type = NULL;
	const char *err = pdf_jsimp_new_type_cpp(imp, dtr, &type);
	if (err != NULL)
		fz_throw(pdf_jsimp_ctx_cpp(imp), FZ_ERROR_GENERIC, "%s", err);

	return type;
}
const char *pdf_jsimp_drop_type_cpp(pdf_jsimp *imp, pdf_jsimp_type *type)
{
    return NULL;
}
void pdf_jsimp_drop_type(pdf_jsimp *imp, pdf_jsimp_type *type)
{
	const char *err = pdf_jsimp_drop_type_cpp(imp, type);
	if (err != NULL)
		fz_warn(pdf_jsimp_ctx_cpp(imp), "%s", err);
}
const char *pdf_jsimp_addmethod_cpp(pdf_jsimp *imp, pdf_jsimp_type *type, char *name, pdf_jsimp_method *meth)
{
    return NULL;
}
void pdf_jsimp_addmethod(pdf_jsimp *imp, pdf_jsimp_type *type, char *name, pdf_jsimp_method *meth)
{
	const char *err = pdf_jsimp_addmethod_cpp(imp, type, name, meth);
	if (err != NULL)
		fz_throw(pdf_jsimp_ctx_cpp(imp), FZ_ERROR_GENERIC, "%s", err);
}
const char *pdf_jsimp_addproperty_cpp(pdf_jsimp *imp, pdf_jsimp_type *type, char *name, pdf_jsimp_getter *get, pdf_jsimp_setter *set)
{
    return NULL;
}
void pdf_jsimp_addproperty(pdf_jsimp *imp, pdf_jsimp_type *type, char *name, pdf_jsimp_getter *get, pdf_jsimp_setter *set)
{
	const char *err = pdf_jsimp_addproperty_cpp(imp, type, name, get, set);
	if (err != NULL)
		fz_throw(pdf_jsimp_ctx_cpp(imp), FZ_ERROR_GENERIC, "%s", err);
}
const char *pdf_jsimp_set_global_type_cpp(pdf_jsimp *imp, pdf_jsimp_type *type)
{
    return NULL;
}
void pdf_jsimp_set_global_type(pdf_jsimp *imp, pdf_jsimp_type *type)
{
	const char *err = pdf_jsimp_set_global_type_cpp(imp, type);
	if (err != NULL)
		fz_throw(pdf_jsimp_ctx_cpp(imp), FZ_ERROR_GENERIC, "%s", err);
}
const char *pdf_jsimp_new_obj_cpp(pdf_jsimp *imp, pdf_jsimp_type *type, void *natobj, pdf_jsimp_obj **obj)
{
    return NULL;
}
pdf_jsimp_obj *pdf_jsimp_new_obj(pdf_jsimp *imp, pdf_jsimp_type *type, void *natobj)
{
	pdf_jsimp_obj *obj = NULL;
	const char *err = pdf_jsimp_new_obj_cpp(imp, type, natobj, &obj);
	if (err != NULL)
		fz_throw(pdf_jsimp_ctx_cpp(imp), FZ_ERROR_GENERIC, "%s", err);

	return obj;
}
const char *pdf_jsimp_drop_obj_cpp(pdf_jsimp *imp, pdf_jsimp_obj *obj)
{
    return NULL;
}
void pdf_jsimp_drop_obj(pdf_jsimp *imp, pdf_jsimp_obj *obj)
{
	const char *err = pdf_jsimp_drop_obj_cpp(imp, obj);
	if (err != NULL)
		fz_warn(pdf_jsimp_ctx_cpp(imp), "%s", err);
}
const char *pdf_jsimp_to_type_cpp(pdf_jsimp *imp, pdf_jsimp_obj *obj, int *type){
    return NULL;
}
int pdf_jsimp_to_type(pdf_jsimp *imp, pdf_jsimp_obj *obj)
{
	int type = 0;
	const char *err = pdf_jsimp_to_type_cpp(imp, obj, &type);
	if (err != NULL)
		fz_throw(pdf_jsimp_ctx_cpp(imp), FZ_ERROR_GENERIC, "%s", err);

	return type;
}
const char *pdf_jsimp_from_string_cpp(pdf_jsimp *imp, char *str, pdf_jsimp_obj **obj)
{
    return NULL;
}
pdf_jsimp_obj *pdf_jsimp_from_string(pdf_jsimp *imp, char *str)
{
	pdf_jsimp_obj *obj = NULL;
	const char *err = pdf_jsimp_from_string_cpp(imp, str, &obj);
	if (err != NULL)
		fz_throw(pdf_jsimp_ctx_cpp(imp), FZ_ERROR_GENERIC, "%s", err);

	return obj;
}
const char *pdf_jsimp_to_string_cpp(pdf_jsimp *imp, pdf_jsimp_obj *obj, char **str)
{
    return NULL;
}
char *pdf_jsimp_to_string(pdf_jsimp *imp, pdf_jsimp_obj *obj)
{
	char *str = NULL;
	const char *err = pdf_jsimp_to_string_cpp(imp, obj, &str);
	if (err != NULL)
		fz_throw(pdf_jsimp_ctx_cpp(imp), FZ_ERROR_GENERIC, "%s", err);

	return str;
}
const char *pdf_jsimp_from_number_cpp(pdf_jsimp *imp, double num, pdf_jsimp_obj **obj)
{
    return NULL;
}
pdf_jsimp_obj *pdf_jsimp_from_number(pdf_jsimp *imp, double num)
{
	pdf_jsimp_obj *obj = NULL;
	const char *err = pdf_jsimp_from_number_cpp(imp, num, &obj);
	if (err != NULL)
		fz_throw(pdf_jsimp_ctx_cpp(imp), FZ_ERROR_GENERIC, "%s", err);

	return obj;
}
const char *pdf_jsimp_to_number_cpp(pdf_jsimp *imp, pdf_jsimp_obj *obj, double *num)
{
    return NULL;
}
double pdf_jsimp_to_number(pdf_jsimp *imp, pdf_jsimp_obj *obj)
{
	double num;
	const char *err = pdf_jsimp_to_number_cpp(imp, obj, &num);
	if (err != NULL)
		fz_throw(pdf_jsimp_ctx_cpp(imp), FZ_ERROR_GENERIC, "%s", err);

	return num;
}
const char *pdf_jsimp_array_len_cpp(pdf_jsimp *imp, pdf_jsimp_obj *obj, int *len)
{
    return NULL;
}
int pdf_jsimp_array_len(pdf_jsimp *imp, pdf_jsimp_obj *obj)
{
	int len = 0;
	const char *err = pdf_jsimp_array_len_cpp(imp, obj, &len);
	if (err != NULL)
		fz_throw(pdf_jsimp_ctx_cpp(imp), FZ_ERROR_GENERIC, "%s", err);

	return len;
}
const char *pdf_jsimp_array_item_cpp(pdf_jsimp *imp, pdf_jsimp_obj *obj, int i, pdf_jsimp_obj **item)
{
    return NULL;
}
pdf_jsimp_obj *pdf_jsimp_array_item(pdf_jsimp *imp, pdf_jsimp_obj *obj, int i)
{
	pdf_jsimp_obj *item = NULL;
	const char *err = pdf_jsimp_array_item_cpp(imp, obj, i, &item);
	if (err != NULL)
		fz_throw(pdf_jsimp_ctx_cpp(imp), FZ_ERROR_GENERIC, "%s", err);

	return item;
}
const char * pdf_jsimp_property_cpp(pdf_jsimp *imp, pdf_jsimp_obj *obj, char *prop,pdf_jsimp_obj **pobj){
    return NULL;
}
pdf_jsimp_obj *pdf_jsimp_property(pdf_jsimp *imp, pdf_jsimp_obj *obj, char *prop)
{
	pdf_jsimp_obj *pobj = NULL;
	const char *err = pdf_jsimp_property_cpp(imp, obj, prop, &pobj);
	if (err != NULL)
		fz_throw(pdf_jsimp_ctx_cpp(imp), FZ_ERROR_GENERIC, "%s", err);

	return pobj;
}
const char * pdf_jsimp_execute_cpp(pdf_jsimp *ip, char *code){
    return NULL;
}
void pdf_jsimp_execute(pdf_jsimp *imp, char *code)
{
	const char *err = pdf_jsimp_execute_cpp(imp, code);
	if (err != NULL)
		fz_throw(pdf_jsimp_ctx_cpp(imp), FZ_ERROR_GENERIC, "%s", err);
}

void pdf_jsimp_execute_count(pdf_jsimp *imp, char *code, int count)
{
	const char *err = pdf_jsimp_execute_count_cpp(imp, code, count);
	if (err != NULL)
		fz_throw(pdf_jsimp_ctx_cpp(imp), FZ_ERROR_GENERIC, "%s", err);
}
pdf_jsimp_obj *pdf_jsimp_call_method(pdf_jsimp *imp, pdf_jsimp_method *meth, void *jsctx, void *obj, int argc, pdf_jsimp_obj *args[])
{
	fz_context *ctx = pdf_jsimp_ctx_cpp(imp);
	pdf_jsimp_obj *res;

	fz_try(ctx)
	{
		res = meth(jsctx, obj, argc, args);
	}
	fz_catch(ctx)
	{
		res = NULL;
		fz_warn(ctx, "%s", fz_caught_message(ctx));
	}

	return res;
}

pdf_jsimp_obj *pdf_jsimp_call_getter(pdf_jsimp *imp, pdf_jsimp_getter *get, void *jsctx, void *obj)
{
	fz_context *ctx = pdf_jsimp_ctx_cpp(imp);
	pdf_jsimp_obj *res;

	fz_try(ctx)
	{
		res = get(jsctx, obj);
	}
	fz_catch(ctx)
	{
		res = NULL;
		fz_warn(ctx, "%s", fz_caught_message(ctx));
	}

	return res;
}

void pdf_jsimp_call_setter(pdf_jsimp *imp, pdf_jsimp_setter *set, void *jsctx, void *obj, pdf_jsimp_obj *val)
{
	fz_context *ctx = pdf_jsimp_ctx_cpp(imp);

	fz_try(ctx)
	{
		set(jsctx, obj, val);
	}
	fz_catch(ctx)
	{
		fz_warn(ctx, "%s", fz_caught_message(ctx));
	}
}

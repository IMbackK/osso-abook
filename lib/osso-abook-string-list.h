#ifndef _OSSO_ABOOK_STRING_LIST_H_INCLUDED__
#define _OSSO_ABOOK_STRING_LIST_H_INCLUDED__

G_BEGIN_DECLS

#define OSSO_ABOOK_TYPE_STRING_LIST \
                (osso_abook_string_list_get_type ())

typedef GList *OssoABookStringList;

GType osso_abook_string_list_get_type(void) G_GNUC_CONST;

void osso_abook_string_list_free(OssoABookStringList list);

G_END_DECLS

#endif /* _OSSO_ABOOK_STRING_LIST_H_INCLUDED__ */

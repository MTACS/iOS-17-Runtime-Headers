
@interface Contacts.CNContactsProviderHost : NSObject {
    void $__lazy_storage_$_contactStore;
}

- (void).cxx_destruct;
- (void)disableExtensionWith:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 18: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)enableExtensionWith:(void *)arg1 showPrompt:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 19: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)extensionCount;
- (id)extensionItems;
- (id)init;
- (id)isExtensionEnabledWith:(id)arg1;
- (id)providerContainerFor:(id)arg1;
- (void)synchronizeUsing:(void *)arg1 bundleIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 38: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, unsigned char, inout unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, const out void, int, double, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const unsigned short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, unsigned short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const int, in /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end

@interface AMSMediaACIService : NSObject {
    void bag;
    void clientIdentifier;
    void date;
    void keychainAccessGroup;
    void network;
    void refresh;
    void store;
}

- (void).cxx_destruct;
- (void)fetchMediaACIWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 24: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, unsigned short, /* Warning: Unrecognized filer type: 'M' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, double, int, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, unsigned char, unsigned int, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)init;
- (id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 bag:(id)arg3;

@end


@interface AskTo.ATDispatchCenter : NSObject {
    void dispatcher;
    void responseListeners;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)addResponseListener:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeResponseListener:(id)arg1;
- (void)send:(void *)arg1 to:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 31: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '_' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, unsigned char, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, out /* Warning: Unrecognized filer type: '1' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, unsigned long long, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end

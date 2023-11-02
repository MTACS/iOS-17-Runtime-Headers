
@interface AppPredictionInternal.ContextualEngineInternalServer : NSObject <ATXContextualEngineInternalInterface, NSXPCListenerDelegate> {
    void $__lazy_storage_$_xpcListener;
    void delegate;
    void suggestionStore;
}

- (void).cxx_destruct;
- (void)fetchAllSnapshotsWithCompletion:(void *)arg1; // needs 1 arg types, found 21: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, long double, int, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)fetchSnapshotOverrideWithCompletion:(void *)arg1; // needs 1 arg types, found 38: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'X' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'x' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, long, unsigned short, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in unsigned short, in /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*, out /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)overrideWithSnapshot:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 38: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'X' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'x' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, long, unsigned short, /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in unsigned short, in /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*, out /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)updateWithCompletion:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
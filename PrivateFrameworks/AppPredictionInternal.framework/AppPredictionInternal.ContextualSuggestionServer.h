
@interface AppPredictionInternal.ContextualSuggestionServer : NSObject <ATXContextualSuggestionServerInterface, NSXPCListenerDelegate> {
    void $__lazy_storage_$_xpcListener;
    void contextStore;
    void lock;
    void suggestionStore;
}

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)requestSnapshotsForEndpoints:(id)arg1 completion:(id /* block */)arg2;

@end

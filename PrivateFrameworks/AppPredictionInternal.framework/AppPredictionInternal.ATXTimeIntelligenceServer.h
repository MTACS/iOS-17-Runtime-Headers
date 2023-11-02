
@interface AppPredictionInternal.ATXTimeIntelligenceServer : NSObject <NSXPCListenerDelegate> {
    void $__lazy_storage_$_queue;
    void $__lazy_storage_$_xpcListener;
    void guardedData;
    void nudger;
    void store;
    void timeIntelligenceAPI;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

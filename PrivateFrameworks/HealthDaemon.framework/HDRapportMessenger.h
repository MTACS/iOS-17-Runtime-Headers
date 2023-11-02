
@interface HDRapportMessenger : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _observersBySchemaIdentifier;
    RPCompanionLinkClient * _rapportClient;
}

- (void).cxx_destruct;
- (void)_handleIncomingRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)addObserver:(id)arg1 forSchemaIdentifier:(long long)arg2;
- (id)initForCompanionDevice;
- (id)newRapportClient;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forSchemaIdentifier:(long long)arg2;
- (void)sendRequest:(id)arg1 data:(id)arg2 completion:(id /* block */)arg3;

@end

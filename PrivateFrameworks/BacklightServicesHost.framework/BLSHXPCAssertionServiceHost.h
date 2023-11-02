
@interface BLSHXPCAssertionServiceHost : NSObject <BLSXPCAssertionServiceHostInterface, BSInvalidatable> {
    NSMutableDictionary * _assertionProxies;
    <BLSAssertionService> * _localService;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSProcessHandle * _remoteProcessHandle;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)acquireAssertion:(id)arg1;
- (id)acquireAssertionForDescriptor:(id)arg1 error:(out id*)arg2;
- (oneway void)cancelAssertion:(id)arg1 withError:(id)arg2;
- (void)dealloc;
- (oneway void)destroyAssertion:(id)arg1;
- (id)initWithLocalService:(id)arg1 peer:(id)arg2;
- (void)invalidate;
- (oneway void)restartAssertionTimeoutTimer:(id)arg1;

@end

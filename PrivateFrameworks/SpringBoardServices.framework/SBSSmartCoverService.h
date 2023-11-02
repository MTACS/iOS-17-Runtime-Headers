
@interface SBSSmartCoverService : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSServiceConnection * _lock_connection;
    BSCompoundAssertion * _observerAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (oneway void)observeSmartCoverStateDidChange:(id)arg1;
- (id)registerSmartCoverStateObserver:(id)arg1;

@end

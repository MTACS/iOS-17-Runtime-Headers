
@interface SBSUniversalControlService : NSObject <SBSUniversalControlServerToClientInterface> {
    BSCompoundAssertion * _disableKeyboardFocusAssertion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    BSCompoundAssertion * _screenEdgeOwnershipAssertion;
    BSServiceConnection * _serverConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)new;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)acquireScreenEdgeOwnershipForPointerEvents:(unsigned long long)arg1 forReason:(id)arg2;
- (id)description;
- (id)disableKeyboardFocusOnCurrentDeviceForReason:(id)arg1;
- (id)init;

@end

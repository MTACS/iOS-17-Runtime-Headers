
@interface SBUniversalControlServer : NSObject <BSDescriptionStreamable, BSServiceConnectionListenerDelegate, SBSUniversalControlClientToServerInterface> {
    FBServiceClientAuthenticator * _clientAuthenticator;
    BSServiceConnectionListener * _connectionListener;
    NSMutableSet * _connections;
    unsigned long long  _externalProcessActiveOnScreenEdges;
    SBWorkspaceKeyboardFocusController * _keyboardFocusController;
    SBKeyboardSuppressionManager * _keyboardSuppressionManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _lock_externallyControlledScreenEdgeMask;
    NSMutableDictionary * _lock_keyboardDisabledReasonsByPID;
    <BSInvalidatable> * _lock_keyboardFocusAssertion;
    <BSInvalidatable> * _lock_keyboardSuppressionAssertion;
    NSMutableDictionary * _lock_screenEdgesOwnedByPID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long externalProcessActiveOnScreenEdges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_lock_reevaluateKeyboardFocusDisablement;
- (void)_lock_reevaluateScreenEdgeOwnership;
- (void)_queue_addConnection:(id)arg1;
- (void)_queue_removeConnection:(id)arg1;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (unsigned long long)externalProcessActiveOnScreenEdges;
- (id)initWithKeyboardFocusController:(id)arg1 keyboardSuppressionManager:(id)arg2;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)setExternalProcessActiveOnScreenEdges:(unsigned long long)arg1;
- (oneway void)setKeyboardFocusDisabled:(id)arg1 reason:(id)arg2;
- (oneway void)setScreenEdgesOwned:(id)arg1 reason:(id)arg2;

@end

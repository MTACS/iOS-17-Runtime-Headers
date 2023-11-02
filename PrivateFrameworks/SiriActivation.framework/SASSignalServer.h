
@interface SASSignalServer : NSObject {
    SASActivationInstrumentation * _activationInstrumentation;
    NSString * _assertionClientIdentifier;
    BSServiceConnection<BSServiceConnectionHost> * _connection;
    bool  _invalidated;
    NSMutableArray * _waitForConnectBlocks;
    <SASSignalServerDelegate> * _weak_delegate;
    BSServiceConnectionEndpointInjector * _workspaceServiceInjector;
}

@property (nonatomic) NSString *assertionClientIdentifier;
@property (nonatomic, retain) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (nonatomic) bool invalidated;
@property (nonatomic, retain) NSMutableArray *waitForConnectBlocks;
@property (nonatomic) <SASSignalServerDelegate> *weak_delegate;
@property (nonatomic, retain) BSServiceConnectionEndpointInjector *workspaceServiceInjector;

+ (void)_unregisterConnection:(id)arg1;
+ (id)interface;
+ (id)serverForConnection:(id)arg1;
+ (id)serviceQuality;

- (void).cxx_destruct;
- (void)_activationRequestFromDirectActionEventWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_registerSourceForIdentifier:(id)arg1;
- (void)_setConnection:(id)arg1;
- (void)_unregisterSourceForIdentifier:(id)arg1;
- (oneway void)activationRequestFromBluetoothKeyboardActivation:(id)arg1;
- (oneway void)activationRequestFromBreadcrumb;
- (oneway void)activationRequestFromButtonIdentifier:(id)arg1 context:(id)arg2;
- (oneway void)activationRequestFromContinuityWithContext:(id)arg1;
- (oneway void)activationRequestFromDirectActionEventWithContext:(id)arg1;
- (oneway void)activationRequestFromDirectActionEventWithContext:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)activationRequestFromRemotePresentationBringUpWithContext:(id)arg1;
- (oneway void)activationRequestFromSimpleActivation:(id)arg1;
- (oneway void)activationRequestFromSpotlightWithContext:(id)arg1;
- (oneway void)activationRequestFromTestingWithContext:(id)arg1;
- (id)assertionClientIdentifier;
- (oneway void)buttonDownFromButtonIdentifier:(id)arg1 timestamp:(id)arg2 context:(id)arg3;
- (oneway void)buttonLongPressFromButtonIdentifier:(id)arg1 context:(id)arg2;
- (oneway void)buttonTapFromButtonIdentifier:(id)arg1 timestamp:(id)arg2 context:(id)arg3;
- (oneway void)buttonUpFromButtonIdentifier:(id)arg1 deviceIdentifier:(id)arg2 timestamp:(id)arg3 context:(id)arg4;
- (oneway void)cancelPrewarmFromButtonIdentifier:(id)arg1;
- (id)connection;
- (oneway void)deactivationRequestFromButtonIdentifier:(id)arg1 context:(id)arg2 options:(id)arg3;
- (bool)invalidated;
- (oneway void)prewarmFromButtonIdentifier:(id)arg1;
- (oneway void)prewarmFromButtonIdentifier:(id)arg1 longPressInterval:(id)arg2;
- (oneway void)registerAssertionWithIdentifier:(id)arg1 reason:(id)arg2;
- (oneway void)registerButtonEventListenerWithIdentifier:(id)arg1;
- (oneway void)registerButtonIdentifier:(id)arg1 withUUID:(id)arg2;
- (oneway void)registerNonButtonSourceWithType:(id)arg1 withUUID:(id)arg2;
- (void)setAssertionClientIdentifier:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setWaitForConnectBlocks:(id)arg1;
- (void)setWeak_delegate:(id)arg1;
- (void)setWorkspaceServiceInjector:(id)arg1;
- (void)specifySenderForInstrumentation:(id)arg1;
- (oneway void)unregisterAssertionWithIdentifier:(id)arg1;
- (oneway void)unregisterButtonEventListenerWithIdentifier:(id)arg1;
- (oneway void)unregisterButtonIdentifier:(id)arg1 withUUID:(id)arg2;
- (oneway void)unregisterNonButtonSourceWithType:(id)arg1 withUUID:(id)arg2;
- (id)waitForConnectBlocks;
- (id)weak_delegate;
- (id)workspaceServiceInjector;

@end

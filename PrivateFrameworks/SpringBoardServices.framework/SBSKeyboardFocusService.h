
@interface SBSKeyboardFocusService : NSObject <SBSKeyboardFocusServiceServerToClientInterface> {
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    BSCompoundAssertion * _externalSceneIdentitiesAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)systemKeyCommandOverlayEnvironment;

- (void).cxx_destruct;
- (id)_connection;
- (id)applyAdditionalDeferringRules:(id)arg1 whenSceneHasKeyboardFocus:(id)arg2 processID:(int)arg3;
- (void)dealloc;
- (void)removeKeyboardFocusFromSceneIdentity:(id)arg1 processID:(int)arg2;
- (void)requestKeyboardFocusForSceneIdentity:(id)arg1 processID:(int)arg2 completion:(id /* block */)arg3;
- (id)setExternalSceneIdentities:(id)arg1 forReason:(id)arg2;

@end

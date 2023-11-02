
@interface _UISceneKeyboardProxyLayerForwardingPresentationViewService : NSObject <_UISceneKeyboardProxyLayerForwardingPresentationEnvironment> {
    NSHashTable * _observers;
    _UIRemoteViewController * _remoteViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSSceneIdentityToken *keyboardOwnerIdentityToken;
@property (readonly) Class superclass;

+ (bool)forwardsLayersToRootSystemShell;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)keyboardLayers;
- (id)keyboardOwnerIdentityToken;
- (void)removeObserver:(id)arg1;

@end

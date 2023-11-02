
@protocol _UISceneKeyboardProxyLayerForwardingPresentationEnvironment <NSObject>

@required

+ (bool)forwardsLayersToRootSystemShell;

- (void)addObserver:(id <_UISceneKeyboardProxyLayerForwardingPresentationEnvironmentObserver>)arg1;
- (NSSet *)keyboardLayers;
- (FBSSceneIdentityToken *)keyboardOwnerIdentityToken;
- (void)removeObserver:(id <_UISceneKeyboardProxyLayerForwardingPresentationEnvironmentObserver>)arg1;

@end

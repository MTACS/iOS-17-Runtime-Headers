
@protocol _UISceneKeyboardProxyLayerForwardingPresentationEnvironmentObserver <NSObject>

@optional

- (void)presentationEnvironment:(id <_UISceneKeyboardProxyLayerForwardingPresentationEnvironment>)arg1 didMoveToWindow:(UIWindow *)arg2;
- (void)presentationEnvironmentDidInvalidate:(id <_UISceneKeyboardProxyLayerForwardingPresentationEnvironment>)arg1;
- (void)presentationEnvironmentDidUpdateKeyboardLayers:(id <_UISceneKeyboardProxyLayerForwardingPresentationEnvironment>)arg1;

@end

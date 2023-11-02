
@interface _UISceneKeyboardProxyLayerForwardingHostingViewService : NSObject <_UISceneKeyboardProxyLayerForwardingHostingEnvironment> {
    _UIViewServiceViewControllerOperator * _viewControllerOperator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_keyboardOwnerIdentityTokensForLayers:(id)arg1;
- (void)addLayers:(id)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;
- (void)removeLayers:(id)arg1;

@end

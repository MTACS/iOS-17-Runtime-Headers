
@interface _UISceneKeyboardProxyLayerForwardingStateMachine : NSObject <_UISceneKeyboardProxyLayerForwardingPresentationEnvironmentObserver, _UIWindowLevelObserver> {
    <_UISceneKeyboardProxyLayerForwardingHostingEnvironment> * _hostingEnvironment;
    UIWindow * _hostingWindow;
    NSSet * _keyboardLayersAddedToHostingEnvironment;
    NSSet * _keyboardLayersTracked;
    <_UISceneKeyboardProxyLayerForwardingPresentationEnvironment> * _presentationEnvironment;
    unsigned long long  _state;
    id  _windowDidMoveToSceneNotificationToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addLayers:(id)arg1 toEnvironment:(id)arg2;
- (id)_newProxyLayers;
- (void)_noteHostedInWindow:(id)arg1;
- (void)_removeLayers:(id)arg1 fromEnvironment:(id)arg2;
- (void)_setState:(unsigned long long)arg1;
- (unsigned long long)_state;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)hostingEnvironmentForWindow:(id)arg1;
- (id)initWithPresentationEnvironment:(id)arg1;
- (void)noteKeyboardLayersBeingTracked:(id)arg1;
- (void)presentationEnvironment:(id)arg1 didMoveToWindow:(id)arg2;
- (void)presentationEnvironmentDidInvalidate:(id)arg1;
- (void)presentationEnvironmentDidUpdateKeyboardLayers:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)window:(id)arg1 changedFromLevel:(double)arg2 toLevel:(double)arg3;

@end

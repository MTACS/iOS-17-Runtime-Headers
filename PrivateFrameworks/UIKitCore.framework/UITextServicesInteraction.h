
@interface UITextServicesInteraction : UITextInteraction <_UITextServicesResponderProxyDelegate> {
    _UITextServiceSession * _definitionSession;
    _UITextServiceSession * _learnSession;
    _UITextServiceSession * _lookupSession;
    _UITextServicesResponderProxy * _responderProxy;
    _UITextServiceSession * _shareSession;
    _UITextServiceSession * _translateSession;
}

@property (nonatomic, readonly) UIResponder *responder;
@property (nonatomic, retain) _UITextServicesResponderProxy *responderProxy;

- (void).cxx_destruct;
- (void)_addShortcut:(id)arg1;
- (void)_beginSessionWithType:(long long)arg1 sender:(id)arg2;
- (void)_define:(id)arg1;
- (void)_removeShareController;
- (void)_removeShortcutController;
- (void)_share:(id)arg1;
- (void)_translate:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)finishSetup;
- (id)responder;
- (id)responderProxy;
- (void)setResponderProxy:(id)arg1;

@end

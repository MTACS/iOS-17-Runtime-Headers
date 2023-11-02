
@interface _UITextServicesResponderProxy : UIResponder {
    <_UITextServicesResponderProxyDelegate> * _delegate;
    UIResponder * _responder;
}

@property (nonatomic) <_UITextServicesResponderProxyDelegate> *delegate;
@property (nonatomic, readonly) UIResponder *responder;

+ (id)_proxyWithResponder:(id)arg1;

- (void).cxx_destruct;
- (void)_addShortcut:(id)arg1;
- (void)_define:(id)arg1;
- (void)_lookup:(id)arg1;
- (void)_share:(id)arg1;
- (void)_translate:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)delegate;
- (id)nextResponder;
- (id)responder;
- (void)setDelegate:(id)arg1;

@end

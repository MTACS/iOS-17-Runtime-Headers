
@interface _UITextLoupeResponderProxy : UIResponder {
    <_UITextLoupeResponderProxyDelegate> * _delegate;
    UIResponder * _responder;
}

@property (nonatomic) <_UITextLoupeResponderProxyDelegate> *delegate;
@property (nonatomic, readonly) UIResponder *responder;

+ (id)_proxyWithResponder:(id)arg1;

- (void).cxx_destruct;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)delegate;
- (id)nextResponder;
- (id)responder;
- (void)setDelegate:(id)arg1;

@end


@interface VSWebAuthenticationTemplateElement : IKViewElement {
    VSMessagePortFeature * _messagePort;
}

@property (nonatomic, readonly) VSMessagePortFeature *messagePort;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)messagePort;

@end

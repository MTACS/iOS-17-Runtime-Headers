
@interface IKTextFieldElement : IKTextElement {
    IKAppKeyboard * _keyboard;
}

@property (nonatomic, readonly) IKAppKeyboard *keyboard;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)keyboard;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (bool)tv_isSecure;
- (long long)tv_keyboardType;

@end

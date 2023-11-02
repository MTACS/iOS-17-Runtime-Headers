
@interface PCNativeStyle : NSObject <NSSecureCoding> {
    PCNativeColor * _backgroundColor;
    PCNativeBorderStyle * _borderStyle;
    PCNativeButtonStyle * _buttonStyle;
    PCNativeShadowStyle * _shadowStyle;
    PCNativeColor * _textColor;
}

@property (nonatomic, retain) PCNativeColor *backgroundColor;
@property (nonatomic, retain) PCNativeBorderStyle *borderStyle;
@property (nonatomic, retain) PCNativeButtonStyle *buttonStyle;
@property (nonatomic, retain) PCNativeShadowStyle *shadowStyle;
@property (nonatomic, retain) PCNativeColor *textColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)borderStyle;
- (id)buttonStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderStyle:(id)arg1;
- (void)setButtonStyle:(id)arg1;
- (void)setShadowStyle:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)shadowStyle;
- (id)textColor;

@end

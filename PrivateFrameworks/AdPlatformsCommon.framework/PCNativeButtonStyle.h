
@interface PCNativeButtonStyle : NSObject <NSSecureCoding> {
    PCNativeBorderStyle * _borderStyle;
    PCNativeColor * _color;
    double  _cornerRadius;
    PCNativeColor * _disabledColor;
    PCNativeColor * _highlightColor;
    PCNativeColor * _textColor;
}

@property (nonatomic, retain) PCNativeBorderStyle *borderStyle;
@property (nonatomic, retain) PCNativeColor *color;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) PCNativeColor *disabledColor;
@property (nonatomic, retain) PCNativeColor *highlightColor;
@property (nonatomic, retain) PCNativeColor *textColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)borderStyle;
- (id)color;
- (double)cornerRadius;
- (id)disabledColor;
- (void)encodeWithCoder:(id)arg1;
- (id)highlightColor;
- (id)initWithCoder:(id)arg1;
- (void)setBorderStyle:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDisabledColor:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)textColor;

@end

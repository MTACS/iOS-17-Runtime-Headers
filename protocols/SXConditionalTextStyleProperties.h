
@protocol SXConditionalTextStyleProperties <NSObject, SXTextStyleFontDescribing>

@required

- (UIColor *)backgroundColor;
- (long long)fontSize;
- (SXJSONArray *)listStyle;
- (SXTextDecoration *)strikethrough;
- (SXTextStroke *)stroke;
- (UIColor *)textColor;
- (SXTextShadow *)textShadow;
- (long long)textTransform;
- (double)tracking;
- (SXTextDecoration *)underline;
- (int)verticalAlignment;

@end

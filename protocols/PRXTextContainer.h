
@protocol PRXTextContainer <NSObject>

@required

- (NSAttributedString *)attributedText;
- (void)setAttributedText:(NSAttributedString *)arg1;
- (void)setText:(NSString *)arg1;
- (long long)style;
- (NSString *)text;

@end


@interface TVTextElement : TVViewElement

@property (nonatomic, readonly) NSAttributedString *attributedText;
@property (nonatomic, readonly) long long textStyle;

- (id)attributedStringWithFont:(id)arg1;
- (id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3;
- (id)attributedText;
- (long long)textStyle;

@end

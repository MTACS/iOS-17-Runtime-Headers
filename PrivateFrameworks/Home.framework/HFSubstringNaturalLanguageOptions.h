
@interface HFSubstringNaturalLanguageOptions : HFNaturalLanguageOptions {
    long long  _formattingContext;
    long long  _formattingStyle;
}

@property (nonatomic) long long formattingContext;
@property (nonatomic) long long formattingStyle;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)formattingContext;
- (long long)formattingStyle;
- (id)initWithFormattingContext:(long long)arg1 formattingStyle:(long long)arg2;
- (void)setFormattingContext:(long long)arg1;
- (void)setFormattingStyle:(long long)arg1;

@end

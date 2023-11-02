
@interface _NBNumberFormat : NSObject {
    NSString * _domesticCarrierCodeFormattingRule;
    NSString * _format;
    NSArray * _leadingDigitsPatterns;
    NSString * _nationalPrefixFormattingRule;
    bool  _nationalPrefixOptionalWhenFormatting;
    NSString * _pattern;
}

@property (nonatomic, retain) NSString *domesticCarrierCodeFormattingRule;
@property (nonatomic, retain) NSString *format;
@property (nonatomic, retain) NSArray *leadingDigitsPatterns;
@property (nonatomic, retain) NSString *nationalPrefixFormattingRule;
@property (nonatomic) bool nationalPrefixOptionalWhenFormatting;
@property (nonatomic, retain) NSString *pattern;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domesticCarrierCodeFormattingRule;
- (id)format;
- (id)initWithEntry:(id)arg1;
- (id)initWithPattern:(id)arg1 withFormat:(id)arg2 withLeadingDigitsPatterns:(id)arg3 withNationalPrefixFormattingRule:(id)arg4 whenFormatting:(bool)arg5 withDomesticCarrierCodeFormattingRule:(id)arg6;
- (id)leadingDigitsPatterns;
- (id)nationalPrefixFormattingRule;
- (bool)nationalPrefixOptionalWhenFormatting;
- (id)pattern;
- (void)setDomesticCarrierCodeFormattingRule:(id)arg1;
- (void)setFormat:(id)arg1;
- (void)setLeadingDigitsPatterns:(id)arg1;
- (void)setNationalPrefixFormattingRule:(id)arg1;
- (void)setNationalPrefixOptionalWhenFormatting:(bool)arg1;
- (void)setPattern:(id)arg1;

@end

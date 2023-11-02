
@interface OITSUDateParser : NSObject {
    NSMutableArray * _formatCategories;
    bool  _isJapaneseLocale;
    OITSULocale * _locale;
    struct __CFDateFormatter { } * _specialCaseFormatter;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)formatStringsDictionary;
- (id)initWithLocale:(id)arg1;
- (id)newDateFromString:(id)arg1 preferredFormatString:(id)arg2 successfulFormatString:(id*)arg3 tryAggressiveFormats:(bool)arg4;
- (id)newDateFromString:(id)arg1 successfulFormatString:(id*)arg2;
- (void)p_addFormat:(id)arg1 locale:(id)arg2 formatCategoryMap:(id)arg3;
- (id)p_initialPatternParsingFormat:(id)arg1 separator:(unsigned short*)arg2;
- (id)p_newDateFromStringTryingFormats:(id)arg1 locale:(id)arg2 formats:(id)arg3 outSuccessfulFormatString:(id*)arg4;
- (struct __CFDateFormatter { }*)specialCaseDateFormatterForLocale:(id)arg1;

@end

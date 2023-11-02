
@interface AMPICUNumberFormatter : NSObject {
    NSString * __currencyCodeBeingUsed;
    void ** __icuNumberFormatter;
    NSString * __localeIdentifierBeingUsed;
    unsigned long long  _extendedStyle;
    NSLocale * _locale;
}

@property (nonatomic, copy) NSString *_currencyCodeBeingUsed;
@property (nonatomic) void**_icuNumberFormatter;
@property (nonatomic, copy) NSString *_localeIdentifierBeingUsed;
@property (nonatomic) unsigned long long extendedStyle;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) bool usesGroupingSeparator;

- (void).cxx_destruct;
- (id)_currencyCodeBeingUsed;
- (void**)_icuNumberFormatter;
- (bool)_localeHasChanged;
- (id)_localeIdentifierBeingUsed;
- (void)dealloc;
- (unsigned long long)extendedStyle;
- (id)init;
- (id)initWithExtendedStyle:(unsigned long long)arg1 locale:(id)arg2;
- (id)locale;
- (void)setExtendedStyle:(unsigned long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setUsesGroupingSeparator:(bool)arg1;
- (void)set_currencyCodeBeingUsed:(id)arg1;
- (void)set_icuNumberFormatter:(void**)arg1;
- (void)set_localeIdentifierBeingUsed:(id)arg1;
- (id)stringFromNumber:(id)arg1;
- (bool)usesGroupingSeparator;

@end

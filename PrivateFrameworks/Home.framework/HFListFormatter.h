
@interface HFListFormatter : NSFormatter {
    struct UListFormatter { } * _formatter;
    unsigned long long  _listStyle;
    NSLocale * _locale;
}

@property (nonatomic) struct UListFormatter { }*formatter;
@property (nonatomic) unsigned long long listStyle;
@property (nonatomic, copy) NSLocale *locale;

- (void).cxx_destruct;
- (id)_formatAndListWithElements:(id)arg1;
- (id)_formatOrListWithElements:(id)arg1;
- (id)_formatSentenceListWithElements:(id)arg1;
- (void)_invaildateFormatter;
- (void)dealloc;
- (struct UListFormatter { }*)formatter;
- (unsigned long long)listStyle;
- (id)locale;
- (void)setFormatter:(struct UListFormatter { }*)arg1;
- (void)setListStyle:(unsigned long long)arg1;
- (void)setLocale:(id)arg1;
- (id)stringForObjectValue:(id)arg1;

@end

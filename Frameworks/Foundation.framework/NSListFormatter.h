
@interface NSListFormatter : NSFormatter {
    NSFormatter * _itemFormatter;
    struct __CFListFormatter { } * _listFormatter;
    NSLocale * _locale;
}

@property (copy) NSFormatter *itemFormatter;
@property (copy) NSLocale *locale;

+ (id)localizedStringByJoiningStrings:(id)arg1;

- (struct __CFListFormatter { }*)_listFormatter;
- (id)_stringFromStringArray:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)itemFormatter;
- (id)locale;
- (void)setItemFormatter:(id)arg1;
- (void)setLocale:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromItems:(id)arg1;

@end

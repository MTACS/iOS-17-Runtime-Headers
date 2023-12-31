
@interface CMNumberFormatter : NSObject {
    int  _format;
    int  _language;
    void ** _numberFormatter;
}

+ (id)formatterForNumberFormat:(int)arg1 language:(int)arg2;

- (void)dealloc;
- (id)initWithNumberFormat:(int)arg1 language:(int)arg2;
- (id)stringForNumber:(unsigned long long)arg1;

@end


@interface IPDateFormat : IPFormat {
    NSString * _option;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *option;
@property (nonatomic, readonly) NSString *title;

+ (id)availableDateFormats;
+ (id)currentDateFormat;
+ (id)dateFormatFromFormatter:(id)arg1 style:(unsigned long long)arg2;
+ (bool)dateFormatIsAllNumeric:(id)arg1;
+ (id)dateFormatterFromLanguage;
+ (id)dateFormatterFromLocale;
+ (double)sampleTime;
+ (void)setDateFormat:(id)arg1;

- (void).cxx_destruct;
- (id)initWithOption:(id)arg1 title:(id)arg2;
- (id)option;
- (id)title;

@end

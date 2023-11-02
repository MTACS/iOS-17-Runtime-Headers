
@interface OITSUDateFormatter_NSFormatter : NSFormatter {
    OITSULocale * _locale;
    NSString * _preferredFormat;
    bool  isDateOnly;
    bool  isTimeOnly;
}

@property (nonatomic) bool isDateOnly;
@property (nonatomic) bool isTimeOnly;
@property (nonatomic, retain) OITSULocale *locale;
@property (nonatomic, retain) NSString *preferredFormat;

- (void).cxx_destruct;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (bool)isDateOnly;
- (bool)isTimeOnly;
- (id)locale;
- (id)preferredFormat;
- (void)setIsDateOnly:(bool)arg1;
- (void)setIsTimeOnly:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setPreferredFormat:(id)arg1;
- (id)stringForObjectValue:(id)arg1;

@end

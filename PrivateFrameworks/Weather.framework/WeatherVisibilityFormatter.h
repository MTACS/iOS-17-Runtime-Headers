
@interface WeatherVisibilityFormatter : NSLengthFormatter {
    NSLocale * _locale;
}

@property (nonatomic, retain) NSLocale *locale;

+ (id)convenienceFormatter;

- (void).cxx_destruct;
- (id)init;
- (id)locale;
- (void)setLocale:(id)arg1;
- (id)stringFromDistance:(double)arg1 isDataMetric:(bool)arg2;
- (id)stringFromKilometers:(double)arg1;
- (id)stringFromMiles:(double)arg1;

@end

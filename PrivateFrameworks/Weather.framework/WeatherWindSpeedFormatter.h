
@interface WeatherWindSpeedFormatter : NSFormatter {
    NSDictionary * _directionSubstringAttributes;
    NSLocale * _locale;
}

@property (retain) NSDictionary *directionSubstringAttributes;
@property (retain) NSLocale *locale;

+ (id)convenienceFormatter;

- (void).cxx_destruct;
- (id)attributedFormattedStringForSpeed:(float)arg1 direction:(float)arg2;
- (id)directionSubstringAttributes;
- (id)fallbackStringForWindSpeed:(float)arg1;
- (id)fallbackUnitString;
- (id)formattedStringForSpeed:(float)arg1 direction:(float)arg2;
- (id)formattedStringForSpeed:(float)arg1 direction:(float)arg2 shortDescription:(bool)arg3;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (id)locale;
- (void)setDirectionSubstringAttributes:(id)arg1;
- (void)setLocale:(id)arg1;
- (double)speedByConvertingToUserUnit:(double)arg1;
- (id)speedStringByConvertingToUserUnits:(float)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForWindDirection:(float)arg1 shortDescription:(bool)arg2;
- (id)stringForWindSpeed:(float)arg1;
- (id)templateStringForSpeed:(float)arg1 direction:(float)arg2;
- (int)windSpeedUnit;

@end

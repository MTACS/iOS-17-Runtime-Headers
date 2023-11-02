
@interface NWMTemperatureFormatter : NSObject <NWMDataFormatter> {
    bool  _avoidDegreeSymbolOnly;
    bool  _celsiusPreferred;
    NSMeasurementFormatter * _degreeSymbolOnlyFormatter;
    NSString * _formattedStaleTemperatureWithDegreeSymbol;
    NSString * _formattedStaleTemperatureWithDegreeSymbolRoundedVariant;
    NSString * _formattedStaleTemperatureWithUnit;
    NSString * _formattedStaleTemperatureWithUnitRoundedVariant;
    NSString * _formattedStaleTemperatureWithoutUnit;
    NSString * _formattedStaleTemperatureWithoutUnitRoundedVariant;
    NSLocale * _locale;
    NSMeasurement * _noMeasurement;
    NSNumberFormatter * _noUnitFormatter;
    int  _temperatureUnit;
    NSMeasurementFormatter * _unitFormatter;
}

@property (getter=shouldAvoidDegreeSymbolOnly) bool avoidDegreeSymbolOnly;
@property (getter=isCelsiusPreferred) bool celsiusPreferred;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMeasurementFormatter *degreeSymbolOnlyFormatter;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *formattedStaleTemperatureWithDegreeSymbol;
@property (nonatomic, retain) NSString *formattedStaleTemperatureWithDegreeSymbolRoundedVariant;
@property (nonatomic, retain) NSString *formattedStaleTemperatureWithUnit;
@property (nonatomic, retain) NSString *formattedStaleTemperatureWithUnitRoundedVariant;
@property (nonatomic, retain) NSString *formattedStaleTemperatureWithoutUnit;
@property (nonatomic, retain) NSString *formattedStaleTemperatureWithoutUnitRoundedVariant;
@property (readonly) unsigned long long hash;
@property (retain) NSLocale *locale;
@property (nonatomic, retain) NSMeasurement *noMeasurement;
@property (nonatomic, retain) NSNumberFormatter *noUnitFormatter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int temperatureUnit;
@property (nonatomic, retain) NSMeasurementFormatter *unitFormatter;

+ (id)autoupdatingFormatter;
+ (id)autoupdatingSharedFormatter;

- (void).cxx_destruct;
- (id)_formattedStaleTemperatureWithDegreeSymbol:(unsigned long long)arg1;
- (id)_formattedStaleTemperatureWithUnit:(unsigned long long)arg1;
- (id)_formattedStaleTemperatureWithoutUnit:(unsigned long long)arg1;
- (void)_localeChanged:(id)arg1;
- (id)_measurementForTemperature:(id)arg1;
- (double)_value:(id)arg1;
- (void)dealloc;
- (id)degreeSymbolOnlyFormatter;
- (id)formattedStaleTemperatureWithDegreeSymbol;
- (id)formattedStaleTemperatureWithDegreeSymbolRoundedVariant;
- (id)formattedStaleTemperatureWithUnit;
- (id)formattedStaleTemperatureWithUnitRoundedVariant;
- (id)formattedStaleTemperatureWithoutUnit;
- (id)formattedStaleTemperatureWithoutUnitRoundedVariant;
- (id)formattedWithDegreeSymbol:(id)arg1 fallbackStyle:(unsigned long long)arg2;
- (id)formattedWithDegreeSymbol:(id)arg1 style:(unsigned long long)arg2 fallbackStyle:(unsigned long long)arg3;
- (id)formattedWithUnit:(id)arg1;
- (id)formattedWithUnit:(id)arg1 style:(unsigned long long)arg2;
- (id)formattedWithoutUnit:(id)arg1;
- (id)formattedWithoutUnit:(id)arg1 style:(unsigned long long)arg2;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)initWithLocale:(id)arg1 temperatureUnit:(int)arg2;
- (bool)isCelsiusPreferred;
- (id)locale;
- (id)noMeasurement;
- (id)noUnitFormatter;
- (void)reloadWithLocale:(id)arg1;
- (void)setAvoidDegreeSymbolOnly:(bool)arg1;
- (void)setCelsiusPreferred:(bool)arg1;
- (void)setDegreeSymbolOnlyFormatter:(id)arg1;
- (void)setFormattedStaleTemperatureWithDegreeSymbol:(id)arg1;
- (void)setFormattedStaleTemperatureWithDegreeSymbolRoundedVariant:(id)arg1;
- (void)setFormattedStaleTemperatureWithUnit:(id)arg1;
- (void)setFormattedStaleTemperatureWithUnitRoundedVariant:(id)arg1;
- (void)setFormattedStaleTemperatureWithoutUnit:(id)arg1;
- (void)setFormattedStaleTemperatureWithoutUnitRoundedVariant:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setNoMeasurement:(id)arg1;
- (void)setNoUnitFormatter:(id)arg1;
- (void)setUnitFormatter:(id)arg1;
- (bool)shouldAvoidDegreeSymbolOnly;
- (int)temperatureUnit;
- (id)unitFormatter;

@end

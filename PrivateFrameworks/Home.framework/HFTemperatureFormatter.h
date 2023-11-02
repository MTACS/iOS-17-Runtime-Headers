
@interface HFTemperatureFormatter : NSMeasurementFormatter <HFTemperatureUnitObserver, HFUnitFormatter> {
    NSString * _fallbackTemperatureString;
    bool  _inputIsCelsius;
    bool  _outputIsCelsius;
    NSNumber * _stepValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fallbackTemperatureString;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inputIsCelsius;
@property (nonatomic) bool outputIsCelsius;
@property (nonatomic, retain) NSNumber *stepValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *unitDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fallbackTemperatureString;
- (id)init;
- (bool)inputIsCelsius;
- (unsigned long long)maximumFractionDigits;
- (id)measurementForObjectValue:(id)arg1;
- (unsigned long long)minimumFractionDigits;
- (bool)outputIsCelsius;
- (void)setFallbackTemperatureString:(id)arg1;
- (void)setInputIsCelsius:(bool)arg1;
- (void)setMaximumFractionDigits:(unsigned long long)arg1;
- (void)setMinimumFractionDigits:(unsigned long long)arg1;
- (void)setOutputIsCelsius:(bool)arg1;
- (void)setStepValue:(id)arg1;
- (id)stepValue;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1 withUnit:(bool)arg2;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnit:(bool)arg2;
- (id)unitDescription;

@end

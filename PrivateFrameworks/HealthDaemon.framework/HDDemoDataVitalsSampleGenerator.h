
@interface HDDemoDataVitalsSampleGenerator : HDDemoDataBaseSampleGenerator {
    NSArray * _diurnalBPVariationTable;
    NSArray * _diurnalTempVariationTable;
    double  _lastPeripheralPerfusionIndexValue;
    double  _lastRespirationRateGenerationTime;
    double  _nextBloodPressureSampleTime;
    double  _nextBodyTempSampleTime;
    double  _nextHeartRateSampleTime;
    double  _nextOxygenSaturationSampleTime;
    double  _nextPeripheralPerfusionIndexSampleTime;
    double  _nextRespirationRateSampleTime;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_computeBodyTempInCelsiusForDemoPerson:(id)arg1 atTime:(double)arg2 addNoise:(bool)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)generateObjectsForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end

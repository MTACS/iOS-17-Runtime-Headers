
@interface SetCarPlayClimateIntent : INIntent

@property (nonatomic, retain) NSNumber *enableClimateControl;
@property (nonatomic) long long relativeTemperatureChange;
@property (nonatomic, copy) NSMeasurement *targetTemperature;

- (id)init;
- (id)initWithCoder:(id)arg1;

@end


@interface HAMenstrualAlgorithmsWristTemperature : NSObject <NSSecureCoding> {
    double  _temperatureCelsius;
    NSString * _watchIdentifier;
}

@property (nonatomic, readonly) double temperatureCelsius;
@property (nonatomic, readonly) NSString *watchIdentifier;

// Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemperature:(double)arg1 forWatchIdentifier:(id)arg2;
- (double)temperatureCelsius;
- (id)watchIdentifier;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (id)hkmc_wristTemperatureWithTemperature:(id)arg1;

@end

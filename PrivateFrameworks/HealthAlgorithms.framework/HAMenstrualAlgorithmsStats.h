
@interface HAMenstrualAlgorithmsStats : NSObject <NSSecureCoding> {
    NSNumber * _julianDayOfFirstCycleStart;
    NSNumber * _julianDayOfLastCycleStart;
    NSNumber * _lowerCycleLengthPercentile;
    NSNumber * _lowerMenstruationLengthPercentile;
    NSNumber * _medianCycleLength;
    NSNumber * _medianMenstruationLength;
    NSNumber * _numberOfCyclesFound;
    NSNumber * _upperCycleLengthPercentile;
    NSNumber * _upperMenstruationLengthPercentile;
}

@property (nonatomic, retain) NSNumber *julianDayOfFirstCycleStart;
@property (nonatomic, retain) NSNumber *julianDayOfLastCycleStart;
@property (nonatomic, retain) NSNumber *lowerCycleLengthPercentile;
@property (nonatomic, retain) NSNumber *lowerMenstruationLengthPercentile;
@property (nonatomic, retain) NSNumber *medianCycleLength;
@property (nonatomic, retain) NSNumber *medianMenstruationLength;
@property (nonatomic, retain) NSNumber *numberOfCyclesFound;
@property (nonatomic, retain) NSNumber *upperCycleLengthPercentile;
@property (nonatomic, retain) NSNumber *upperMenstruationLengthPercentile;

// Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)julianDayOfFirstCycleStart;
- (id)julianDayOfLastCycleStart;
- (id)lowerCycleLengthPercentile;
- (id)lowerMenstruationLengthPercentile;
- (id)medianCycleLength;
- (id)medianMenstruationLength;
- (id)numberOfCyclesFound;
- (void)setJulianDayOfFirstCycleStart:(id)arg1;
- (void)setJulianDayOfLastCycleStart:(id)arg1;
- (void)setLowerCycleLengthPercentile:(id)arg1;
- (void)setLowerMenstruationLengthPercentile:(id)arg1;
- (void)setMedianCycleLength:(id)arg1;
- (void)setMedianMenstruationLength:(id)arg1;
- (void)setNumberOfCyclesFound:(id)arg1;
- (void)setUpperCycleLengthPercentile:(id)arg1;
- (void)setUpperMenstruationLengthPercentile:(id)arg1;
- (id)upperCycleLengthPercentile;
- (id)upperMenstruationLengthPercentile;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

- (id)hkmc_description;
- (id)hkmc_statistics;

@end

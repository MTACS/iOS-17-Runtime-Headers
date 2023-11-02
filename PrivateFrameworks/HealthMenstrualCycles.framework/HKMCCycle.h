
@interface HKMCCycle : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding> {
    NSArray * _cycleFactors;
    long long  _dailyEligibleWristTemperatureCount;
    HKMCCycleSegment * _fertileWindowSegment;
    NSNumber * _lastDayIndex;
    HKMCCycleSegment * _menstruationSegment;
    long long  _ovulationConfirmationFailure;
    long long  _ovulationConfirmationType;
}

@property (nonatomic, readonly, copy) NSArray *cycleFactors;
@property (nonatomic, readonly) long long dailyEligibleWristTemperatureCount;
@property (nonatomic, readonly) HKMCCycleSegment *fertileWindowSegment;
@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic, readonly, copy) NSNumber *lastDayIndex;
@property (nonatomic, readonly) HKMCCycleSegment *menstruationSegment;
@property (nonatomic, readonly) long long ovulationConfirmationFailure;
@property (nonatomic, readonly) long long ovulationConfirmationType;

+ (id)_cycleWithMenstruationSegment:(id)arg1 fertileWindowSegment:(id)arg2 lastDayIndex:(id)arg3;
+ (id)_cycleWithMenstruationSegment:(id)arg1 fertileWindowSegment:(id)arg2 lastDayIndex:(id)arg3 ovulationConfirmationType:(long long)arg4 ovulationConfirmationFailure:(long long)arg5 dailyEligibleWristTemperatureCount:(long long)arg6 cycleFactors:(id)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMenstruationSegment:(id)arg1 fertileWindowSegment:(id)arg2 lastDayIndex:(id)arg3 ovulationConfirmationType:(long long)arg4 ovulationConfirmationFailure:(long long)arg5 dailyEligibleWristTemperatureCount:(long long)arg6 cycleFactors:(id)arg7;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cycleFactors;
- (long long)dailyEligibleWristTemperatureCount;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fertileWindowSegment;
- (unsigned long long)hash;
- (id)hk_redactedDescription;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastDayIndex;
- (id)menstruationSegment;
- (long long)ovulationConfirmationFailure;
- (long long)ovulationConfirmationType;

@end

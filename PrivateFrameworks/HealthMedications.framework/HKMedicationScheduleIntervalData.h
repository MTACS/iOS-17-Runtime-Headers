
@interface HKMedicationScheduleIntervalData : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _cycleIndex;
    NSNumber * _cycleIntervalDays;
    unsigned long long  _daysOfWeek;
    NSNumber * _dose;
    NSDateComponents * _startTimeComponent;
}

@property (nonatomic, readonly, copy) NSNumber *cycleIndex;
@property (nonatomic, readonly, copy) NSNumber *cycleIntervalDays;
@property (nonatomic, readonly) unsigned long long daysOfWeek;
@property (nonatomic, readonly, copy) NSNumber *dose;
@property (nonatomic, readonly, copy) NSDateComponents *startTimeComponent;

// Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cycleIndex;
- (id)cycleIntervalDays;
- (unsigned long long)daysOfWeek;
- (id)description;
- (id)dose;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartTimeComponent:(id)arg1 daysOfWeek:(unsigned long long)arg2 cycleIndex:(id)arg3 cycleIntervalDays:(id)arg4 dose:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)startTimeComponent;

// Image: /System/Library/PrivateFrameworks/HealthMedicationsDaemonPlugin.framework/HealthMedicationsDaemonPlugin

+ (id)hd_medicationScheduleIntervalDataFromCodable:(id)arg1;

- (id)hd_codableFromIntervalData;

@end

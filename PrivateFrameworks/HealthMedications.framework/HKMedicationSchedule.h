
@interface HKMedicationSchedule : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    struct { 
        long long minimum; 
        long long origin; 
    }  _compatibilityRange;
    NSTimeZone * _createdUTCOffset;
    double  _creationTimestamp;
    NSDateComponents * _cycleStartDate;
    bool  _deleted;
    NSDate * _endDateTime;
    long long  _frequencyType;
    NSString * _medicationIdentifier;
    NSUUID * _medicationUUID;
    NSString * _note;
    NSDate * _startDateTime;
    NSArray * _timeIntervals;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly) struct { long long x1; long long x2; } compatibilityRange;
@property (nonatomic, readonly, copy) NSTimeZone *createdUTCOffset;
@property (nonatomic, readonly) double creationTimestamp;
@property (nonatomic, readonly, copy) NSDateComponents *cycleStartDate;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (nonatomic, readonly, copy) NSDate *endDateTime;
@property (nonatomic, readonly) long long frequencyType;
@property (nonatomic, readonly, copy) NSString *medicationIdentifier;
@property (nonatomic, readonly, copy) NSUUID *medicationUUID;
@property (nonatomic, readonly, copy) NSString *note;
@property (nonatomic, readonly, copy) NSDate *startDateTime;
@property (nonatomic, readonly, copy) NSArray *timeIntervals;
@property (getter=isUnavailable, nonatomic, readonly) bool unavailable;

// Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_copyByReplacingCompatibilityVersionRange:(struct { long long x1; long long x2; })arg1;
- (void)_setMedicationUUID:(id)arg1;
- (struct { long long x1; long long x2; })compatibilityRange;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdUTCOffset;
- (double)creationTimestamp;
- (id)cycleStartDate;
- (id)deletedSchedule;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDateTime;
- (long long)frequencyType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 medicationIdentifier:(id)arg2 createdUTCOffset:(id)arg3 startDateTime:(id)arg4 endDateTime:(id)arg5 timeIntervals:(id)arg6 frequencyType:(long long)arg7 cycleStartDateComponent:(id)arg8 note:(id)arg9;
- (id)initWithUUID:(id)arg1 medicationUUID:(id)arg2 medicationIdentifier:(id)arg3 createdUTCOffset:(id)arg4 startDateTime:(id)arg5 endDateTime:(id)arg6 timeIntervals:(id)arg7 frequencyType:(long long)arg8 cycleStartDateComponent:(id)arg9 note:(id)arg10 creationTimestamp:(double)arg11 deleted:(bool)arg12 compatibilityVersionRange:(struct { long long x1; long long x2; })arg13;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (bool)isUnavailable;
- (id)medicationIdentifier;
- (id)medicationUUID;
- (id)note;
- (id)startDateTime;
- (id)timeIntervals;
- (id)unavailableSchedule;

// Image: /System/Library/PrivateFrameworks/HealthMedicationsDaemonPlugin.framework/HealthMedicationsDaemonPlugin

+ (id)hd_medicationScheduleFromCodable:(id)arg1;
+ (id)hd_medicationSchedulesFromCodables:(id)arg1 profile:(id)arg2 ignoreDuplicates:(bool)arg3;

- (id)hd_codableMedicationSchedule;

@end

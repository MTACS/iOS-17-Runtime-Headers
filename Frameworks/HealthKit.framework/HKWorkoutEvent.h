
@interface HKWorkoutEvent : NSObject <HDCoding, HKDataMetadataObject, HKPersistableWorkoutEvent, NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    NSDictionary * _metadata;
    long long  _type;
}

@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) double fi_distanceGoalCompletionTime;
@property (nonatomic, readonly) bool fi_isCustomSplitEvent;
@property (nonatomic, readonly) bool fi_isDistanceGoalCompleteEvent;
@property (nonatomic, readonly) bool fi_isSplitEvent;
@property (nonatomic, readonly) double fi_splitActiveDuration;
@property (nonatomic, readonly) HKQuantity *fi_splitDistance;
@property (nonatomic, readonly) double fi_splitPaceInMetersPerSecond;
@property (nonatomic, readonly) double fiui_distanceGoalCompletionTime;
@property (nonatomic, readonly) bool fiui_isCustomSplitEvent;
@property (nonatomic, readonly) bool fiui_isDistanceGoalCompleteEvent;
@property (nonatomic, readonly) bool fiui_isSplitEvent;
@property (nonatomic, readonly) double fiui_splitActiveDuration;
@property (nonatomic, readonly) HKQuantity *fiui_splitDistance;
@property (nonatomic, readonly) double fiui_splitPaceInMetersPerSecond;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSUUID *sessionUUID;
@property (readonly) Class superclass;
@property (readonly) long long type;
@property (nonatomic, readonly) long long workoutEventType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_newWorkoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;
+ (id)_unvalidatedWorkoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;
+ (id)_workoutEventWithInternalEvent:(id)arg1;
+ (id)_workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3;
+ (id)_workoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;
+ (bool)supportsSecureCoding;
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2;
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3;
+ (id)workoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;

- (void).cxx_destruct;
- (void)_assertPropertiesValid;
- (id)_init;
- (void)_setWorkoutEventMetadata:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkoutEventType:(long long)arg1 sessionUUID:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 error:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)sessionUUID;
- (long long)type;
- (long long)workoutEventType;

// Image: /System/Library/PrivateFrameworks/Fitness.framework/Fitness

- (double)fi_distanceGoalCompletionTime;
- (bool)fi_isCustomSplitEvent;
- (bool)fi_isDistanceGoalCompleteEvent;
- (bool)fi_isSplitEvent;
- (double)fi_splitActiveDuration;
- (id)fi_splitDistance;
- (double)fi_splitPaceInMetersPerSecond;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

- (double)fiui_distanceGoalCompletionTime;
- (bool)fiui_isCustomSplitEvent;
- (bool)fiui_isDistanceGoalCompleteEvent;
- (bool)fiui_isSplitEvent;
- (double)fiui_splitActiveDuration;
- (id)fiui_splitDistance;
- (double)fiui_splitPaceInMetersPerSecond;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void)addDetailValuesToSection:(id)arg1;
- (id)startDate;

@end

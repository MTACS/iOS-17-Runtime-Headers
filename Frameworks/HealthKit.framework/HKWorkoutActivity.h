
@interface HKWorkoutActivity : NSObject <HDCoding, HKDataMetadataObject, NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    double  _duration;
    NSDate * _endDate;
    NSDictionary * _metadata;
    NSDate * _startDate;
    bool  _startsPaused;
    NSMutableDictionary * _statisticsPerType;
    HKWorkoutConfiguration * _workoutConfiguration;
    NSArray * _workoutEvents;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSDictionary *allStatistics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double duration;
@property (readonly, copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (readonly, copy) NSDictionary *metadata;
@property (readonly, copy) NSDate *startDate;
@property (getter=_startsPaused, nonatomic, readonly) bool startsPaused;
@property (readonly) Class superclass;
@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration;
@property (readonly, copy) NSArray *workoutEvents;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_deepCopy;
- (void)_enumerateActiveTimePeriods:(id /* block */)arg1;
- (bool)_filterAndSetWorkoutEvents:(id)arg1;
- (id)_initWithUUID:(id)arg1 workoutConfiguration:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 workoutEvents:(id)arg5 startsPaused:(bool)arg6 duration:(double)arg7 metadata:(id)arg8 statisticsPerType:(id)arg9;
- (void)_setAllStatistics:(id)arg1;
- (void)_setDuration:(double)arg1;
- (void)_setEndDate:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)_setStatistics:(id)arg1 forType:(id)arg2;
- (void)_setUUID:(id)arg1;
- (bool)_startsPaused;
- (id)_statisticsPerType;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)allStatistics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkoutConfiguration:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)startDate;
- (id)statisticsForType:(id)arg1;
- (bool)unitTest_isEqualToActivity:(id)arg1 includingStatistics:(bool)arg2;
- (id)workoutConfiguration;
- (id)workoutEvents;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void)addDetailValuesToSection:(id)arg1;

@end

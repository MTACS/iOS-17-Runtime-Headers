
@interface CMPedometerData : NSObject <HDCoreMotionDatum, NSCopying, NSSecureCoding, SRSampling> {
    NSNumber * fActiveTime;
    NSNumber * fCurrentCadence;
    NSNumber * fCurrentPace;
    NSNumber * fDistance;
    NSNumber * fDistanceSource;
    NSNumber * fElevationAscended;
    NSNumber * fElevationDescended;
    NSDate * fEndDate;
    NSDate * fFirstStepTime;
    NSNumber * fFloorsAscended;
    NSNumber * fFloorsDescended;
    NSNumber * fIsOdometerDistance;
    NSNumber * fIsOdometerPace;
    NSNumber * fNumberOfPushes;
    NSNumber * fNumberOfSteps;
    NSNumber * fRecordId;
    NSUUID * fSourceId;
    NSDate * fStartDate;
    NSNumber * fWorkoutType;
}

@property (nonatomic, readonly) NSNumber *activeTime;
@property (nonatomic, readonly) NSNumber *averageActivePace;
@property (nonatomic, readonly) NSNumber *currentCadence;
@property (nonatomic, readonly) NSNumber *currentPace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *distance;
@property (nonatomic, readonly) NSNumber *distanceSource;
@property (nonatomic, readonly) NSNumber *elevationAscended;
@property (nonatomic, readonly) NSNumber *elevationDescended;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *firstStepTime;
@property (nonatomic, readonly) NSNumber *floorsAscended;
@property (nonatomic, readonly) NSNumber *floorsDescended;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *numberOfPushes;
@property (nonatomic, readonly) NSNumber *numberOfSteps;
@property (nonatomic, readonly) long long recordId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *workoutType;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

+ (id)maxPedometerEntries;
+ (bool)supportsSecureCoding;

- (id)activeTime;
- (id)averageActivePace;
- (id)binarySampleRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentCadence;
- (id)currentPace;
- (void)dealloc;
- (id)description;
- (id)distance;
- (id)distanceSource;
- (id)elevationAscended;
- (id)elevationDescended;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)firstStepTime;
- (id)floorsAscended;
- (id)floorsDescended;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2 steps:(int)arg3 distance:(double)arg4 floorsAscended:(id)arg5 floorsDescended:(id)arg6 recordID:(long long)arg7 currentPace:(id)arg8 currentCadence:(id)arg9 firstStepTime:(double)arg10 activeTime:(id)arg11 sourceId:(id)arg12 isOdometerDistance:(id)arg13 isOdometerPace:(id)arg14 pushes:(int)arg15 workoutType:(int)arg16 elevationAscended:(id)arg17 elevationDescended:(id)arg18 distanceSource:(int)arg19;
- (bool)isOdometerDistance;
- (bool)isOdometerPace;
- (id)numberOfPushes;
- (id)numberOfSteps;
- (long long)recordId;
- (id)sourceId;
- (id)startDate;
- (id)workoutType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (long long)hd_compare:(id)arg1;
- (id)hd_datestamp;
- (id)hd_epochDatestamp;
- (bool)hd_hasWorkout;
- (id)hd_sourceID;
- (id)hd_unitForType:(id)arg1;

@end

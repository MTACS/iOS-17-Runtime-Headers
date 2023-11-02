
@interface HKWorkoutRoute : HKSeriesSample <HDCoding> {
    HDCodableLocationSeries * __codableWorkoutRoute;
}

@property (setter=_setCodableWorkoutRoute:, nonatomic, retain) HDCodableLocationSeries *_codableWorkoutRoute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_workoutRouteWithDevice:(id)arg1 metadata:(id)arg2;

- (void).cxx_destruct;
- (id)_codableWorkoutRoute;
- (bool)_isSmoothed;
- (bool)_requiresPrivateEntitlementForQueries;
- (void)_setCodableWorkoutRoute:(id)arg1;
- (id)_validateSample;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)_valueDescription;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

@end

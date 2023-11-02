
@interface FIUIWorkoutActivityType : NSObject <NSSecureCoding> {
    FIWorkoutActivityType * _workoutActivityType;
}

@property (nonatomic, readonly) unsigned long long auxiliaryTypeIdentifier;
@property (nonatomic, readonly) unsigned long long effectiveTypeIdentifier;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) bool isCategorizedOtherWorkout;
@property (nonatomic, readonly) bool isIndoor;
@property (nonatomic, readonly) bool isPartOfMultiSport;
@property (nonatomic, readonly) bool isWaterLockActivity;
@property (nonatomic, readonly) HKQuantity *lapLength;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSUUID *openGoalUUID;
@property (nonatomic, readonly) long long swimmingLocationType;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) FIWorkoutActivityType *workoutActivityType;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2;
+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2 metadata:(id)arg3;
+ (id)activityTypeWithWorkout:(id)arg1;
+ (id)defaultActivityTypesWithIsWheelchairUser:(bool)arg1 isSwimmingSupported:(bool)arg2 activityMoveMode:(long long)arg3;
+ (id)deprecatedActivityTypes;
+ (id)gymKitCapableActivityTypes;
+ (unsigned long long)mapWheelchairUserActivityType:(unsigned long long)arg1 isWheelchairUser:(bool)arg2;
+ (id)nonOptimizedActivityTypes;
+ (id)optimizedActivityTypesWithIsWheelchairUser:(bool)arg1 isSwimmingSupported:(bool)arg2;
+ (id)otherWorkoutActivityTypes;
+ (id)possibleActivityTypesForIdentifier:(unsigned long long)arg1 locationType:(long long)arg2 swimmingLocationType:(long long)arg3 wheelchairUser:(bool)arg4;
+ (bool)shouldDisambiguateOnLocationType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)swimmingOptimizedActivityTypes;
+ (id)swimmingOtherActivityTypes;
+ (id)unsupportedActivityTypesWithIsWheelchairUser:(bool)arg1 isSwimmingSupported:(bool)arg2;
+ (id)wheelchairActivityTypes;

- (void).cxx_destruct;
- (id)activityTypeByAddingLapLength:(double)arg1;
- (id)activityTypePlistKey;
- (unsigned long long)auxiliaryTypeIdentifier;
- (id)description;
- (unsigned long long)effectiveTypeIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLocationTypePool;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2 isPartOfMultiSport:(bool)arg3 metadata:(id)arg4;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2 isPartOfMultiSport:(bool)arg3 metadata:(id)arg4 auxiliaryTypeIdentifier:(unsigned long long)arg5;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2 metadata:(id)arg3;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2 metadata:(id)arg3 auxiliaryTypeIdentifier:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkoutActivityType:(id)arg1;
- (bool)isCategorizedOtherWorkout;
- (bool)isEqual:(id)arg1;
- (bool)isIndoor;
- (bool)isPartOfMultiSport;
- (bool)isWaterLockActivity;
- (id)lapLength;
- (id)localizedName;
- (id)localizedNameComponents;
- (id)metadata;
- (id)openGoalUUID;
- (long long)swimmingLocationType;
- (id)uniqueIdentifier;
- (id)workoutActivityType;

// Image: /System/Library/PrivateFrameworks/WorkoutUI.framework/WorkoutUI

- (id)symbolName;

@end

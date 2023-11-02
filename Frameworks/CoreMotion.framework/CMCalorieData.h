
@interface CMCalorieData : NSObject <NSCopying, NSSecureCoding> {
    double  fBasalCalories;
    double  fBasalMets;
    double  fDuration;
    double  fMets;
    double  fTotalCalories;
    long long  fWorkoutType;
}

@property (nonatomic, readonly) NSNumber *basalCalories;
@property (nonatomic, readonly) NSNumber *basalMets;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSNumber *mets;
@property (nonatomic, readonly) NSNumber *totalCalories;
@property (nonatomic, readonly) long long workoutType;

+ (bool)supportsSecureCoding;

- (id)basalCalories;
- (id)basalMets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkoutType:(long long)arg1 duration:(double)arg2 mets:(double)arg3 basalMets:(double)arg4 totalCalories:(double)arg5 basalCalories:(double)arg6;
- (id)mets;
- (id)totalCalories;
- (long long)workoutType;

@end

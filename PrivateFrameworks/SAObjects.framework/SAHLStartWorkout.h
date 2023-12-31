
@interface SAHLStartWorkout : SADomainCommand

@property (nonatomic) bool isOpenGoal;
@property (nonatomic) bool skipActivitySetup;
@property (nonatomic, retain) SAHLWorkoutGoal *workoutGoal;
@property (nonatomic, retain) SAHLWorkoutType *workoutType;
@property (nonatomic, copy) NSString *workoutUserMode;

+ (id)startWorkout;
+ (id)startWorkoutWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)isOpenGoal;
- (bool)requiresResponse;
- (void)setIsOpenGoal:(bool)arg1;
- (void)setSkipActivitySetup:(bool)arg1;
- (void)setWorkoutGoal:(id)arg1;
- (void)setWorkoutType:(id)arg1;
- (void)setWorkoutUserMode:(id)arg1;
- (bool)skipActivitySetup;
- (id)workoutGoal;
- (id)workoutType;
- (id)workoutUserMode;

@end

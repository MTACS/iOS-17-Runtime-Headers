
@interface HKWorkoutBuilderStatistics : NSObject <NSSecureCoding> {
    NSMutableDictionary * _activitiesStatistics;
    NSMutableDictionary * _workoutStatistics;
}

@property (nonatomic, readonly, copy) NSDictionary *activitiesStatistics;
@property (nonatomic, readonly, copy) NSSet *allTypes;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly, copy) NSDictionary *workoutStatistics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activitiesStatistics;
- (void)addActivityStatistics:(id)arg1 forType:(id)arg2 activityUUID:(id)arg3;
- (void)addWorkoutStatistics:(id)arg1 forType:(id)arg2;
- (id)allTypes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (id)workoutStatistics;

@end

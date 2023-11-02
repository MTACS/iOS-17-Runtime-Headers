
@interface ASActivityDataNotificationGroup : NSObject {
    NSSet * _achievementNotifications;
    NSSet * _goalCompletionNotifications;
    NSSet * _workoutNotifications;
}

@property (nonatomic, retain) NSSet *achievementNotifications;
@property (nonatomic, readonly) NSSet *allNotifications;
@property (nonatomic, retain) NSSet *goalCompletionNotifications;
@property (nonatomic, retain) NSSet *workoutNotifications;

- (void).cxx_destruct;
- (id)achievementNotifications;
- (id)allNotifications;
- (id)goalCompletionNotifications;
- (unsigned long long)notificationCount;
- (void)setAchievementNotifications:(id)arg1;
- (void)setGoalCompletionNotifications:(id)arg1;
- (void)setWorkoutNotifications:(id)arg1;
- (id)workoutNotifications;

@end

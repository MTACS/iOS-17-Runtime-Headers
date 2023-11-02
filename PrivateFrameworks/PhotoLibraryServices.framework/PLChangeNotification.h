
@interface PLChangeNotification : NSNotification

@property (nonatomic, readonly) PLChangeNotificationCenter *changeNotificationCenter;

+ (id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

- (void)_calculateDiffs;
- (id)changeNotificationCenter;

@end

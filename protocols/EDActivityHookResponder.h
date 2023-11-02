
@protocol EDActivityHookResponder <NSObject>

@optional

- (void)activityWithID:(EMActivityObjectID *)arg1 finishedWithError:(NSError *)arg2;
- (void)activityWithID:(EMActivityObjectID *)arg1 setCompletedCount:(long long)arg2 totalCount:(long long)arg3;
- (void)activityWithID:(EMActivityObjectID *)arg1 setUserInfoObject:(id)arg2 forKey:(NSString *)arg3;
- (void)removedActivityWithID:(EMActivityObjectID *)arg1;
- (void)startedActivity:(EMActivity *)arg1;

@end

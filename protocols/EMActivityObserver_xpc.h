
@protocol EMActivityObserver_xpc <NSObject>

@required

- (void)activityWithID:(EMActivityObjectID *)arg1 finishedWithError:(NSError *)arg2;
- (void)activityWithID:(EMActivityObjectID *)arg1 setCompletedCount:(NSNumber *)arg2 totalCount:(NSNumber *)arg3;
- (void)activityWithID:(EMActivityObjectID *)arg1 setUserInfoObject:(id)arg2 forKey:(NSString *)arg3;
- (void)removedActivityWithID:(EMActivityObjectID *)arg1;
- (void)startedActivity:(EMActivity *)arg1;

@end

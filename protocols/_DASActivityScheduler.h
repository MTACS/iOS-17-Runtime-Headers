
@protocol _DASActivityScheduler <NSObject>

@required

- (void)activityCanceled:(_DASActivity *)arg1;
- (void)activityCompleted:(_DASActivity *)arg1;
- (void)handleEligibleActivities:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)submitActivities:(NSArray *)arg1;
- (void)submitActivity:(_DASActivity *)arg1;
- (void)updateActivity:(_DASActivity *)arg1 withParameters:(NSDictionary *)arg2;

@optional

- (void)activityStarted:(_DASActivity *)arg1;

@end

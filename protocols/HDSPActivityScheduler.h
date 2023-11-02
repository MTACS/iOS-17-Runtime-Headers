
@protocol HDSPActivityScheduler <NSObject>

@required

- (void)scheduleActivity:(void *)arg1 activityHandler:(void *)arg2; // needs 2 arg types, found 7: <HDSPActivity> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <HDSPActivity> *, void*
- (void)unscheduleActivities;

@end

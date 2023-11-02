
@protocol SVXTaskTrackingDelegate <NSObject>

@required

- (void)taskTracker:(id <SVXTaskTracking>)arg1 childWillBegin:(id <SVXTaskTracking>)arg2;
- (void)taskTrackerDidEnd:(id <SVXTaskTracking>)arg1;

@end

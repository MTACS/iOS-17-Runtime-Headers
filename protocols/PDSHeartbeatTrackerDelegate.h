
@protocol PDSHeartbeatTrackerDelegate <NSObject>

@required

- (void)heartbeatFiredForTracker:(PDSHeartbeatTracker *)arg1;
- (bool)shouldScheduleHeartbeatForTracker:(PDSHeartbeatTracker *)arg1;

@end

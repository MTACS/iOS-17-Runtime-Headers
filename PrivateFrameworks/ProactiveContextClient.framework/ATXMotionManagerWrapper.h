
@interface ATXMotionManagerWrapper : NSObject {
    _PASLock * _currentMotion;
    NSMutableDictionary * _delegatesMonitoringForMotionType;
    CMMotionActivity * _mostRecentActivity;
    CMMotionActivityManager * _motionActivityManager;
    NSOperationQueue * _motionActivityQueue;
}

+ (bool)hasMotionActivity;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_fetchMotionActivities;
- (id /* block */)_motionActivityHandler;
- (id)getCurrentActivity;
- (id)init;
- (void)startUpdatingMotionType:(long long)arg1 forDelegate:(id)arg2;
- (void)stopUpdatingMotionType:(long long)arg1 forDelegate:(id)arg2;
- (void)updateCurrentActivity:(id)arg1;

@end

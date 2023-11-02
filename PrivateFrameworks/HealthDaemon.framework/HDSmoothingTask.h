
@interface HDSmoothingTask : NSObject {
    id /* block */  _completionHandler;
    bool  _isTimedOut;
    NSArray * _routes;
    unsigned long long  _smoothingAttempts;
    double  _smoothingTaskTimeout;
    HDDaemonTransaction * _transaction;
    NSArray * _unsmoothedLocations;
    HKWorkout * _workout;
}

- (void).cxx_destruct;
- (id)description;
- (bool)isEqual:(id)arg1;

@end

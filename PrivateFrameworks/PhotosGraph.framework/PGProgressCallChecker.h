
@interface PGProgressCallChecker : NSObject {
    double  _lastProgress;
    NSObject<OS_os_log> * _loggingConnection;
    unsigned long long  _numberOfCallsToProgressSinceLastRecordedCall;
    bool  _reportMemoryUsage;
    NSString * _taskName;
    double  _timestampOfLastCallToProgress;
    double  _timestampOfLastRecordedCallToProgress;
    bool  _wasStopped;
}

@property (nonatomic) bool reportMemoryUsage;
@property (nonatomic, copy) NSString *taskName;

- (void).cxx_destruct;
- (void)checkCallsWithProgress:(double)arg1 stop:(bool)arg2;
- (id)initWithTaskName:(id)arg1;
- (id)initWithTaskName:(id)arg1 loggingConnection:(id)arg2;
- (id)memoryUsage;
- (bool)reportMemoryUsage;
- (void)setReportMemoryUsage:(bool)arg1;
- (void)setTaskName:(id)arg1;
- (id)taskName;

@end

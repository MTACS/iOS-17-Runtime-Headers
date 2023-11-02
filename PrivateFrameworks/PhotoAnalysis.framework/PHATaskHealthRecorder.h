
@interface PHATaskHealthRecorder : NSObject {
    CPAnalytics * _analytics;
    NSObject<OS_os_log> * _loggingConnection;
    NSString * _taskName;
}

@property (nonatomic, readonly) NSString *taskName;

- (void).cxx_destruct;
- (id)initWithTaskName:(id)arg1 loggingConnection:(id)arg2 analytics:(id)arg3;
- (void)recordTaskCompletionWithTaskCompletionState:(unsigned long long)arg1 taskDuration:(id)arg2 taskProgress:(id)arg3 taskError:(id)arg4 lastRunDate:(id)arg5;
- (id)taskName;

@end

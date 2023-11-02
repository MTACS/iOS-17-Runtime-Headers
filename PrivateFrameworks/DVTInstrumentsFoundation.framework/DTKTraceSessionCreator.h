
@interface DTKTraceSessionCreator : NSObject {
    struct ktrace_session { } * _ktraceSession;
    NSObject<OS_dispatch_semaphore> * _stoppingSemaphore;
}

+ (id)getDefaultedRemotePath:(int*)arg1;
+ (bool)shouldKeepFile;

- (void).cxx_destruct;
- (id)initWithFD:(int)arg1 bitmap:(const char *)arg2 useExisting:(bool)arg3 error:(id*)arg4;
- (void)stop;

@end

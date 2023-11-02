
@interface SBDaemonContext : NSObject {
    NSMutableDictionary * _daemonRequests;
    NSObject<OS_dispatch_source> * _dispatchSource;
    int  _pid;
}

- (void).cxx_destruct;
- (void)_handleCancelation;
- (id)_newDispatchSourceForPid:(int)arg1 queue:(id)arg2;
- (void)addRequest:(id)arg1 forKey:(id)arg2;
- (id)description;
- (id)initWithPid:(int)arg1 queue:(id)arg2;
- (int)pid;
- (void)removeRequestForKey:(id)arg1;

@end

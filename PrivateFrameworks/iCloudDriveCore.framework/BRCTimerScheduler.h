
@interface BRCTimerScheduler : NSObject <BRCLifeCycle> {
    NSString * _field;
    id /* block */  _handler;
    bool  _isCancelled;
    NSString * _name;
    BRCAccountSession * _session;
    NSString * _sqlTable;
    bool  _suspended;
    NSObject<OS_dispatch_source> * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)close;
- (id)initWithAccountSession:(id)arg1 timerName:(id)arg2 sqlTable:(id)arg3 field:(id)arg4 timerHandler:(id /* block */)arg5;
- (bool)isCancelled;
- (void)reschedule;
- (void)resume;

@end

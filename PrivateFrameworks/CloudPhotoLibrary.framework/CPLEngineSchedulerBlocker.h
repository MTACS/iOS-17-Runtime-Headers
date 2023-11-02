
@interface CPLEngineSchedulerBlocker : NSObject {
    bool  _blocking;
    NSString * _reason;
    CPLEngineScheduler * _scheduler;
}

@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) CPLEngineScheduler *scheduler;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReason:(id)arg1 scheduler:(id)arg2;
- (id)reason;
- (id)scheduler;
- (void)unblock;

@end

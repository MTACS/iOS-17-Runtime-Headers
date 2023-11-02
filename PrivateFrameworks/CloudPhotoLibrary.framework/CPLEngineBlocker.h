
@interface CPLEngineBlocker : NSObject {
    bool  _blocking;
    CPLEngineSchedulerBlocker * _schedulerBlocker;
    CPLEngineWriteTransactionBlocker * _writeTransactionBlocker;
}

@property (nonatomic, readonly) CPLEngineSchedulerBlocker *schedulerBlocker;
@property (nonatomic, readonly) CPLEngineWriteTransactionBlocker *writeTransactionBlocker;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWriteTransactionBlocker:(id)arg1 schedulerBlocker:(id)arg2;
- (id)schedulerBlocker;
- (void)unblock;
- (id)writeTransactionBlocker;

@end


@interface TRIUrgentRollbackScheduler : NSObject <TRIUrgentRollbackSchedulerProtocol> {
    <TRITaskQueuing> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <TRITaskQueuing> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithTaskQueue:(id)arg1;
- (id)queue;
- (void)scheduleUrgentRollbackForExperiment:(id)arg1;

@end

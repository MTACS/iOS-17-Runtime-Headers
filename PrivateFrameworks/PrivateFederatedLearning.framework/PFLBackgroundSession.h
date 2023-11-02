
@interface PFLBackgroundSession : NSObject <PFLForegroundSessionDelegate> {
    <PFLDataSource> * _dataSource;
    NSObject<OS_dispatch_queue> * _queue;
    NSCondition * _readyCondition;
    PFLForegroundSession * _session;
    BGTask * _task;
}

@property (nonatomic, retain) <PFLDataSource> *dataSource;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSCondition *readyCondition;
@property (nonatomic, retain) PFLForegroundSession *session;
@property (nonatomic, retain) BGTask *task;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)dataSource;
- (void)didCompleteAllTasks;
- (id)init;
- (id)queue;
- (id)readyCondition;
- (void)registerWithIdentifier:(id)arg1;
- (bool)resumeWithDataSource:(id)arg1;
- (id)session;
- (void)setDataSource:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTask:(id)arg1;
- (bool)submitTaskRequestWithIdentifier:(id)arg1 andError:(id*)arg2;
- (id)task;

@end

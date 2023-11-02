
@interface HMMTagManager : NSObject <HMMTagDispatching> {
    <HMMTagDispatching> * _currentDispatcher;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (retain) <HMMTagDispatching> *currentDispatcher;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)currentDispatcher;
- (id)init;
- (id)logEventSubmitter;
- (void)registerTagObserver:(id)arg1 forTags:(id)arg2;
- (void)resetTagDispatcher;
- (void)setCurrentDispatcher:(id)arg1;
- (void)setLogEventSubmitter:(id)arg1;
- (void)setTagDispatcher:(id)arg1;
- (void)submitTaggedEvent:(id)arg1 processorList:(id)arg2;
- (void)unregisterTagObserver:(id)arg1 forTags:(id)arg2;
- (id)workQueue;

@end


@interface NUJobQueue : NSObject {
    NUJobPriorityQueue * _initiatedQueue;
    NUJobPriorityQueue * _interactiveQueue;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _stage;
    long long  _updateGroupLevel;
}

@property (readonly) long long stage;

- (void).cxx_destruct;
- (void)_addJob:(id)arg1;
- (void)_addJobs:(id)arg1;
- (void)_decrementGroupLevel;
- (void)_finishedPriorityQueue:(id)arg1;
- (void)_incrementGroupLevel;
- (void)_removeJob:(id)arg1;
- (void)_startRunningIfNeeded;
- (void)addJob:(id)arg1;
- (void)addJobs:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)finishedPriorityQueue:(id)arg1;
- (id)init;
- (id)initWithStage:(long long)arg1 name:(id)arg2;
- (void)removeJob:(id)arg1;
- (long long)stage;

@end


@interface PXStoryErrorRepository : PXObservable <PXStoryErrorReporter, PXStoryQueueParticipant> {
    NSMutableArray * _errors;
    NSMutableDictionary * _errorsByComponent;
    NSObject<OS_dispatch_queue> * _storyQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) NSDictionary *errorsByComponent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *storyQueue;
@property (readonly) Class superclass;

+ (id)analyticsNameForComponent:(id)arg1;

- (void).cxx_destruct;
- (id)errors;
- (id)errorsByComponent;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)setError:(id)arg1 forComponent:(id)arg2;
- (id)storyQueue;

@end

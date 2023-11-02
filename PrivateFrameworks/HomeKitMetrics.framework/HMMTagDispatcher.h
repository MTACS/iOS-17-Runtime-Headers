
@interface HMMTagDispatcher : NSObject <HMMTagDispatching> {
    NSPointerArray * _allTagProcessors;
    long long  _nextStaleCheckTime;
    NSMutableDictionary * _tagObservers;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSPointerArray *allTagProcessors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long nextStaleCheckTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *tagObservers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)allTagProcessors;
- (id)initWithWorkQueue:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 startTime:(long long)arg2;
- (long long)nextStaleCheckTime;
- (void)registerTagObserver:(id)arg1 forTags:(id)arg2;
- (void)setAllTagProcessors:(id)arg1;
- (void)setNextStaleCheckTime:(long long)arg1;
- (void)setTagObservers:(id)arg1;
- (void)submitTaggedEvent:(id)arg1 processorList:(id)arg2;
- (id)tagObservers;
- (void)unregisterTagObserver:(id)arg1 forTags:(id)arg2;
- (id)workQueue;

@end

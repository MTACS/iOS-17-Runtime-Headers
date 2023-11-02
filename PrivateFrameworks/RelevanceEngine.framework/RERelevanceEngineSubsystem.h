
@interface RERelevanceEngineSubsystem : NSObject <REActivityTrackerDelegate, RERelevanceEngineSubsystemProperties> {
    REActivityTracker * _activityTracker;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RERelevanceEngine * _relevanceEngine;
    NSObject<OS_dispatch_queue> * _relevanceEngineQueue;
    bool  _running;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) RERelevanceEngine *relevanceEngine;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activityTracker:(id)arg1 didBeginActivity:(id)arg2;
- (void)activityTracker:(id)arg1 didEndActivity:(id)arg2;
- (void)beginActivity:(id)arg1 forObject:(id)arg2;
- (void)dealloc;
- (void)endActivity:(id)arg1 forObject:(id)arg2;
- (id)initWithRelevanceEngine:(id)arg1;
- (bool)isRunning;
- (id)name;
- (void)pause;
- (id)queue;
- (id)relevanceEngine;
- (void)resume;
- (void)setRunning:(bool)arg1;
- (void)trackObject:(id)arg1;
- (void)withdrawObject:(id)arg1;

@end

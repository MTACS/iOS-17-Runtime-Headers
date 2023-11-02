
@interface MTBaseProcessor : NSObject {
    MTDefaultsChangeNotifier * _defaultsNotifier;
    bool  _isStopping;
    NSObject * _isStoppingLock;
    MTBaseQueryObserver * _queryObserver;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) MTDefaultsChangeNotifier *defaultsNotifier;
@property (nonatomic) bool isStopping;
@property (nonatomic, retain) NSObject *isStoppingLock;
@property (nonatomic, retain) MTBaseQueryObserver *queryObserver;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)createQueryObserver;
- (id)defaultPropertiesThatAffectPredicate;
- (id)defaultsNotifier;
- (void)enqueueWorkBlock:(id /* block */)arg1;
- (id)entityName;
- (id)init;
- (bool)isRunning;
- (bool)isStopping;
- (id)isStoppingLock;
- (id)predicate;
- (id)queryObserver;
- (void)results:(id /* block */)arg1;
- (void)resultsChangedWithDeletedIds:(id)arg1 insertIds:(id)arg2 updatedIds:(id)arg3;
- (void)setDefaultsNotifier:(id)arg1;
- (void)setIsStopping:(bool)arg1;
- (void)setIsStoppingLock:(id)arg1;
- (void)setQueryObserver:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (bool)start;
- (void)stop;
- (id)timer;
- (void)updatePredicate;
- (double)updatePredicateDuration;
- (id)workQueue;

@end

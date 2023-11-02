
@interface SBWorkStore : NSObject {
    double  _defaultWorkExpirationPeriod;
    NSMutableArray * _keysWithWork;
    unsigned long long  _maxWorkPerKey;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSMutableArray * _observers;
    NSMutableDictionary * _workExpirationPeriods;
    NSMutableDictionary * _workItemsPerKey;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) double defaultWorkExpirationPeriod;
@property (nonatomic, readonly) NSArray *keysWithWork;
@property (nonatomic, readonly) unsigned long long maxWorkPerKey;
@property (nonatomic, readonly) NSMutableArray *observers;
@property (nonatomic, readonly) NSMutableDictionary *workItemsPerKey;

- (void).cxx_destruct;
- (void)_notifyObserversWorkDidChange;
- (void)_workQueue_expireWorkForKey:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addWorkItem:(id)arg1 forKey:(id)arg2;
- (id)debugDescription;
- (double)defaultWorkExpirationPeriod;
- (id)dequeueWorkForKey:(id)arg1;
- (id)description;
- (id)initWithMaximumNumberOfWorkItemsPerKey:(unsigned long long)arg1;
- (id)keysWithWork;
- (unsigned long long)maxWorkPerKey;
- (id)observers;
- (void)purgeWorkForKey:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setDefaultWorkExpirationPeriod:(double)arg1;
- (void)setWorkExpirationPeriod:(double)arg1 forKey:(id)arg2;
- (id)workItemsPerKey;

@end

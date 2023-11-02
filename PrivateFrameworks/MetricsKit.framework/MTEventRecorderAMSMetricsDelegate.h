
@interface MTEventRecorderAMSMetricsDelegate : NSObject <MTEventRecorderDelegate> {
    <AMSBagProtocol> * _amsBag;
    NSMutableDictionary * _amsMetricsByTopic;
    NSString * _containerId;
    long long  _flushMode;
    double  _flushTimeInterval;
    bool  _flushTimerEnabled;
    long long  _maximumBatchSize;
    AMSPromise * _metricsBagPromise;
    bool  _monitorsLifecycleEvents;
    long long  _numberOfPendingEvents;
    NSMutableDictionary * _periodicQueuesByTopic;
    bool  _personalizedWithItunesAccount;
    NSObject<OS_os_transaction> * _transaction;
    bool  _transactionEnabled;
}

@property (nonatomic, retain) <AMSBagProtocol> *amsBag;
@property (nonatomic, retain) NSMutableDictionary *amsMetricsByTopic;
@property (nonatomic, retain) NSString *containerId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long flushMode;
@property (nonatomic) double flushTimeInterval;
@property (getter=isFlushTimerEnabled, nonatomic) bool flushTimerEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maximumBatchSize;
@property (nonatomic, retain) AMSPromise *metricsBagPromise;
@property (nonatomic) bool monitorsLifecycleEvents;
@property (nonatomic) long long numberOfPendingEvents;
@property (nonatomic, retain) NSMutableDictionary *periodicQueuesByTopic;
@property (nonatomic) bool personalizedWithItunesAccount;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;
@property (getter=isTransactionEnabled, nonatomic) bool transactionEnabled;

+ (id)amsMetricsObjectCache;

- (void).cxx_destruct;
- (void)_beginTransaction;
- (void)_endTransaction;
- (void)_flushEvents:(id)arg1 topic:(id)arg2;
- (id)_recordEvent:(id)arg1 toTopic:(id)arg2;
- (id)_sortedEventsFromBatch:(id)arg1;
- (id)activeItunesAccount;
- (id)amsBag;
- (id)amsContainerIdForTopic:(id)arg1;
- (id)amsMetricsByTopic;
- (id)amsMetricsForTopic:(id)arg1;
- (id)containerId;
- (long long)flushMode;
- (double)flushTimeInterval;
- (id)flushUnreportedEvents;
- (id)initWithContainerId:(id)arg1 amsBag:(id)arg2;
- (id)initWithContainerId:(id)arg1 profileName:(id)arg2 profileVersion:(id)arg3;
- (bool)isFlushTimerEnabled;
- (bool)isTransactionEnabled;
- (id)lookupItunesAccount:(id)arg1;
- (long long)maximumBatchSize;
- (id)metricsBagPromise;
- (bool)monitorsLifecycleEvents;
- (long long)numberOfPendingEvents;
- (id)periodicQueueForTopic:(id)arg1;
- (id)periodicQueuesByTopic;
- (bool)personalizedWithItunesAccount;
- (id)recordEvent:(id)arg1 toTopic:(id)arg2;
- (id)sendMethod;
- (void)setAmsBag:(id)arg1;
- (void)setAmsMetricsByTopic:(id)arg1;
- (void)setContainerId:(id)arg1;
- (void)setFlushMode:(long long)arg1;
- (void)setFlushTimeInterval:(double)arg1;
- (void)setFlushTimerEnabled:(bool)arg1;
- (void)setMaximumBatchSize:(long long)arg1;
- (void)setMetricsBagPromise:(id)arg1;
- (void)setMonitorsLifecycleEvents:(bool)arg1;
- (void)setNumberOfPendingEvents:(long long)arg1;
- (void)setPeriodicQueuesByTopic:(id)arg1;
- (void)setPersonalizedWithItunesAccount:(bool)arg1;
- (void)setTransaction:(id)arg1;
- (void)setTransactionEnabled:(bool)arg1;
- (id)transaction;

@end

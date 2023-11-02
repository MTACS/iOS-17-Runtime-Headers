
@interface ACHEarnedInstanceAwardingSourceRecord : NSObject <ACHDataStorePropertyProviding> {
    ACHDataStore * _dataStore;
    ACHEarnedInstanceStore * _earnedInstanceStore;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSDateInterval * _lastCompletedEvaluationInterval;
    NSDateInterval * _lastScheduledEvaluationInterval;
    NSOperationQueue * _operationQueue;
    NSDate * _registrationDate;
    <ACHEarnedInstanceAwarding> * _source;
}

@property (nonatomic, retain) NSDictionary *dataStoreProperties;
@property (nonatomic, readonly) NSArray *dataStorePropertyKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDateInterval *lastCompletedEvaluationInterval;
@property (nonatomic, readonly) NSDateInterval *lastScheduledEvaluationInterval;
@property (nonatomic, readonly) NSDate *registrationDate;
@property (nonatomic, readonly) <ACHEarnedInstanceAwarding> *source;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)addEvaluationOperationWithDateInterval:(id)arg1 databaseContext:(id)arg2 evaluationBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)addEvaluationOperationWithDateInterval:(id)arg1 evaluationBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)cancelAllEvaluationOperations;
- (void)dataStoreDidClearAllProperties:(id)arg1 completion:(id /* block */)arg2;
- (id)dataStoreProperties;
- (id)dataStorePropertyKeys;
- (id)description;
- (id)initWithSource:(id)arg1 earnedInstanceStore:(id)arg2 dataStore:(id)arg3 registrationDate:(id)arg4;
- (id)lastCompletedEvaluationInterval;
- (id)lastScheduledEvaluationInterval;
- (id)registrationDate;
- (void)setDataStoreProperties:(id)arg1;
- (id)source;
- (id)uniqueName;

@end

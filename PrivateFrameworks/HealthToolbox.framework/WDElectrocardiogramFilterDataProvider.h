
@interface WDElectrocardiogramFilterDataProvider : NSObject <HKSampleTypeUpdateControllerObserver> {
    long long  _activeAlgorithmVersion;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSArray * _countQueries;
    NSMutableDictionary * _counts;
    <WDElectrocardiogramFilterDataProviderDelegate> * _delegate;
    NSArray * _filterTypes;
    WDProfile * _profile;
    NSObject<OS_dispatch_queue> * _resourceQueue;
}

@property (nonatomic) long long activeAlgorithmVersion;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) NSArray *countQueries;
@property (nonatomic, retain) NSMutableDictionary *counts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WDElectrocardiogramFilterDataProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long filterTypeCount;
@property (nonatomic, retain) NSArray *filterTypes;
@property (readonly) unsigned long long hash;
@property (nonatomic) WDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resourceQueue;
@property (readonly) Class superclass;

+ (id)_atrialFibrillationClassificationPredicateWithClassifications:(id)arg1;
+ (id)_atrialFibrillationClassificationPredicateWithValue:(unsigned long long)arg1;
+ (id)_atrialFibrillationClassificationPredicateWithValues:(id)arg1;
+ (id)cellTitleForType:(long long)arg1;
+ (id)viewControllerTitleForType:(long long)arg1;

- (void).cxx_destruct;
- (id)_atrialFibrillationClassificationsWithActiveAlgorithmVersion:(long long)arg1;
- (id)_countQueriesForFilterTypes:(id)arg1;
- (id)_countQueryForType:(long long)arg1;
- (id)_filterTypesForActiveAlgorithmVersion:(long long)arg1;
- (id)_highLowHeartRateClassificationsWithActiveAlgorithmVersion:(long long)arg1;
- (id)_inconclusiveClassificationsWithActiveAlgorithmVersion:(long long)arg1;
- (long long)_rQueue_countForType:(long long)arg1;
- (void)_rQueue_notifyDelegateDidUpdateCountForType:(long long)arg1;
- (void)_rQueue_setCount:(long long)arg1 forType:(long long)arg2;
- (void)_safelyStopQuery:(id)arg1;
- (void)_stopQueries;
- (long long)activeAlgorithmVersion;
- (id)clientQueue;
- (long long)countForType:(long long)arg1;
- (id)countQueries;
- (id)counts;
- (id)delegate;
- (id)displayStringCountForType:(long long)arg1;
- (id)electrocardiogramPredicateForType:(long long)arg1;
- (long long)filterTypeCount;
- (id)filterTypes;
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;
- (id)profile;
- (id)resourceQueue;
- (void)setActiveAlgorithmVersion:(long long)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setCountQueries:(id)arg1;
- (void)setCounts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilterTypes:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setResourceQueue:(id)arg1;
- (void)start;
- (void)stop;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 recoveringFromError:(bool)arg5;

@end

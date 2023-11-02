
@interface NTTodayContext : NSObject <FCNetworkReachabilityObserving, NTTodayContext> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    <FCContentContext> * _contentContext;
    <FCFeedPersonalizerFactoryType> * _feedPersonalizerFactory;
    FCAsyncSerialQueue * _fetchQueue;
    id /* block */  _newResultsHandler;
    <FCReadablePrivateDataStorage> * _readablePrivateDataStorage;
    NTSourceAvailabilityManager * _sourceAvailabilityManager;
    <NTTodayResultsSource> * _todayResultsSource;
    <FCWritablePrivateDataStorage> * _writablePrivateDataStorage;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) <FCContentContext> *contentContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <FCFeedPersonalizerFactoryType> *feedPersonalizerFactory;
@property (nonatomic, readonly) FCAsyncSerialQueue *fetchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ newResultsHandler;
@property (nonatomic, readonly) <FCReadablePrivateDataStorage> *readablePrivateDataStorage;
@property (nonatomic, readonly) NTSourceAvailabilityManager *sourceAvailabilityManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) <NTTodayResultsSource> *todayResultsSource;
@property (nonatomic, readonly) <FCWritablePrivateDataStorage> *writablePrivateDataStorage;

- (void).cxx_destruct;
- (void)_setupTodayResultsSource;
- (id)accessQueue;
- (id)contentContext;
- (id)feedPersonalizerFactory;
- (void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchModuleDescriptorsWithCompletion:(id /* block */)arg1;
- (id)fetchQueue;
- (id)init;
- (id)initWithContentContext:(id)arg1 feedPersonalizerFactory:(id)arg2 processVariant:(unsigned long long)arg3 accessQueue:(id)arg4 fetchQueue:(id)arg5;
- (id)initWithContentHostDirectory:(id)arg1 feedPersonalizerFactory:(id)arg2 processVariant:(unsigned long long)arg3 accessQueue:(id)arg4 fetchQueue:(id)arg5;
- (void)networkReachabilityDidChange:(id)arg1;
- (id /* block */)newResultsHandler;
- (id)placeholderResultsWithOperationInfo:(id)arg1;
- (id)readablePrivateDataStorage;
- (void)setNewResultsHandler:(id /* block */)arg1;
- (void)setTodayResultsSource:(id)arg1;
- (id)sourceAvailabilityManager;
- (id)todayResultsSource;
- (id)writablePrivateDataStorage;
- (void)writeUserDidReadHeadlineWithAnalyticsElement:(id)arg1 atDate:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)writeUserDidSeeHeadlinesWithAnalyticsElements:(id)arg1 atDate:(id)arg2 withCompletion:(id /* block */)arg3;

@end

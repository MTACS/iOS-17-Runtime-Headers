
@interface NTTodayResultsSource : NSObject <NTTodayResultsSource> {
    <FCContentContext> * _contentContext;
    <FCFeedPersonalizerFactoryType> * _feedPersonalizerFactory;
    <NTTodayResultsFetchDescriptor> * _fetchDescriptor;
    bool  _flushingHasBeenEnabled;
    NSObject * _latestResultRecordsHoldToken;
    <FCReadablePrivateDataStorage> * _privateDataStorage;
    FCAsyncSerialQueue * _serialQueue;
}

@property (nonatomic, readonly) <FCContentContext> *contentContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <FCFeedPersonalizerFactoryType> *feedPersonalizerFactory;
@property (nonatomic, readonly, copy) <NTTodayResultsFetchDescriptor> *fetchDescriptor;
@property (getter=hasFlushingBeenEnabled, nonatomic) bool flushingHasBeenEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject *latestResultRecordsHoldToken;
@property (nonatomic, readonly) <FCReadablePrivateDataStorage> *privateDataStorage;
@property (nonatomic, readonly) FCAsyncSerialQueue *serialQueue;
@property (readonly) Class superclass;

+ (id)placeholderResultsWithFetchDescriptor:(id)arg1 contentContext:(id)arg2 operationInfo:(id)arg3;

- (void).cxx_destruct;
- (void)_fetchLatestResultsWithOperationInfo:(id)arg1 prefetchedContent:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchTodayModuleDescriptorsWithContentRequests:(id)arg1 requireRefreshedAppConfig:(bool)arg2 qualityOfService:(long long)arg3 completion:(id /* block */)arg4;
- (id)contentContext;
- (id)feedPersonalizerFactory;
- (id)fetchDescriptor;
- (void)fetchLatestResultsWithOperationInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchModuleDescriptorsWithCompletion:(id /* block */)arg1;
- (bool)hasFlushingBeenEnabled;
- (id)init;
- (id)initWithFetchDescriptor:(id)arg1 feedPersonalizerFactory:(id)arg2 privateDataStorage:(id)arg3 contentContext:(id)arg4 fetchQueue:(id)arg5;
- (id)latestResultRecordsHoldToken;
- (id)placeholderResultsWithOperationInfo:(id)arg1;
- (id)privateDataStorage;
- (id)serialQueue;
- (void)setFlushingHasBeenEnabled:(bool)arg1;
- (void)setLatestResultRecordsHoldToken:(id)arg1;

@end

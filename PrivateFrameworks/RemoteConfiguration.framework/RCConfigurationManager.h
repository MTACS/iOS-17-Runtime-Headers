
@interface RCConfigurationManager : NSObject {
    NSMutableDictionary * _backgroundURLSessionHandlers;
    RCUnfairLock * _backgroundURLSessionHandlersLock;
    RCAsyncSerialQueue * _configRequestSerialQueue;
    NSMutableDictionary * _configResourceByRequestKey;
    RCConfigurationSettings * _configurationSettings;
    NSURL * _contentDirectoryURL;
    RCDeviceInfo * _deviceInfo;
    RCKeyValueStore * _localStore;
    id /* block */  _networkEventHandler;
    NSMutableArray * _runningOperations;
    RCUnfairLock * _runningOperationsLock;
}

@property (nonatomic, retain) NSMutableDictionary *backgroundURLSessionHandlers;
@property (nonatomic, retain) RCUnfairLock *backgroundURLSessionHandlersLock;
@property (nonatomic, retain) RCAsyncSerialQueue *configRequestSerialQueue;
@property (nonatomic, retain) NSMutableDictionary *configResourceByRequestKey;
@property (nonatomic, retain) RCConfigurationSettings *configurationSettings;
@property (nonatomic, retain) NSURL *contentDirectoryURL;
@property (nonatomic, retain) RCDeviceInfo *deviceInfo;
@property (nonatomic, retain) RCKeyValueStore *localStore;
@property (nonatomic, copy) id /* block */ networkEventHandler;
@property (nonatomic, retain) NSMutableArray *runningOperations;
@property (nonatomic, retain) RCUnfairLock *runningOperationsLock;

- (void).cxx_destruct;
- (bool)_areAllConfigurationResourcesAvailable:(id)arg1 requestKeys:(id)arg2;
- (bool)_areAllConfigurationResourcesInvalid:(id)arg1 allowedToReachEndpoint:(bool)arg2 configurationSettings:(id)arg3 requestKeys:(id)arg4;
- (id)_decodeConfigurationResource:(id)arg1;
- (id)_encodeConfigurationResource:(id)arg1;
- (id)_endpointURLForEnvironment:(unsigned long long)arg1 requestKey:(id)arg2;
- (void)_fetchConfigurationFromFallbackURLWithSettings:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchMultiConfigurationFromEndpointURL:(id)arg1 settings:(id)arg2 changeTagsByRequestKey:(id)arg3 completion:(id /* block */)arg4;
- (bool)_isAllowedToReachEndpointWithSettings:(id)arg1 configurationResource:(id)arg2 endpointURL:(id)arg3;
- (bool)_isValidConfigurationResource:(id)arg1 allowedToReachEndpoint:(bool)arg2 useBackgroundRefreshRate:(bool)arg3 userID:(id)arg4;
- (void)_loadConfigurationResourcesFromStore;
- (void)_processConfigurationCompletionWithResources:(id)arg1 configurationSettings:(id)arg2 processedConfigurationDataByRequestKey:(id*)arg3 processedTreatmentIDs:(id*)arg4 processedSegmentSetIDs:(id*)arg5 error:(id*)arg6;
- (void)_removeConfigurationResourceForRequestKey:(id)arg1;
- (void)_saveConfigurationResource:(id)arg1;
- (id)backgroundURLSessionHandlers;
- (id)backgroundURLSessionHandlersLock;
- (void)cancelAllTasksOnBackgroundSessionWithSettings:(id)arg1 completion:(id /* block */)arg2;
- (id)configRequestSerialQueue;
- (id)configResourceByRequestKey;
- (id)configurationSettings;
- (id)contentDirectoryURL;
- (id)deviceInfo;
- (void)fetchConfigurationWithSettings:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchMultiConfigurationWithSettings:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchSingleConfigurationWithSettings:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithContentDirectoryURL:(id)arg1;
- (id)localStore;
- (id /* block */)networkEventHandler;
- (void)reestablishBackgroundSessionWithSettings:(id)arg1 sessionCompletionHandler:(id /* block */)arg2;
- (id)runningOperations;
- (id)runningOperationsLock;
- (void)setBackgroundURLSessionHandlers:(id)arg1;
- (void)setBackgroundURLSessionHandlersLock:(id)arg1;
- (void)setConfigRequestSerialQueue:(id)arg1;
- (void)setConfigResourceByRequestKey:(id)arg1;
- (void)setConfigurationSettings:(id)arg1;
- (void)setContentDirectoryURL:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setLocalStore:(id)arg1;
- (void)setNetworkEventHandler:(id /* block */)arg1;
- (void)setRunningOperations:(id)arg1;
- (void)setRunningOperationsLock:(id)arg1;

@end

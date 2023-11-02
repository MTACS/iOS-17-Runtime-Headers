
@interface UAFAssetUtilities : NSObject {
    UAFAssetStatus * _assetStatus;
    bool  _assistantEnabled;
    NSObject<OS_dispatch_group> * _assistantGroup;
    NSObject<OS_dispatch_queue> * _assistantQueue;
    NSDictionary * _assistantUODStatus;
    <UAFAssetUtilitiesDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _observerEnabled;
    unsigned long long  _retryCount;
    NSString * _siriLanguage;
    NSObject<OS_dispatch_queue> * _statusQueue;
    bool  _understandingOnDeviceAssetsAvailable;
    NSObject<OS_dispatch_queue> * _utilityQueue;
}

@property (nonatomic, retain) UAFAssetStatus *assetStatus;
@property (nonatomic) bool assistantEnabled;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *assistantGroup;
@property (nonatomic, retain) NSDictionary *assistantUODStatus;
@property (nonatomic) <UAFAssetUtilitiesDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, retain) NSString *siriLanguage;
@property (nonatomic) bool understandingOnDeviceAssetsAvailable;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *utilityQueue;

- (void).cxx_destruct;
- (void)_assistantLanguageUpdate;
- (void)_assistantPreferencesAndLanguageUpdate;
- (unsigned long long)_checkFreeSpaceNeededForDownloadForLanguage:(id)arg1;
- (id)_createConnection;
- (void)_downloadSiriAssetsOverCellular:(bool)arg1;
- (void)_emitDownloadTriggerEventWithLanguage:(id)arg1 hasExistingAssets:(bool)arg2;
- (void)_handleNetworkPathUpdate;
- (bool)_hasInexpensiveNetwork;
- (bool)_networkIsSatisfied;
- (id)_refreshUAFAssetStatusSync;
- (void)_stopObservers;
- (void)_triggerDelegateAssetStatusUpdated;
- (void)_updateDelegateForUODAvailable:(bool)arg1 uodStatus:(id)arg2;
- (id)assetStatus;
- (bool)assetsAreAvailableForLanguageSync:(id)arg1;
- (bool)assistantEnabled;
- (id)assistantGroup;
- (id)assistantUODStatus;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)downloadSiriAssets;
- (void)downloadSiriAssetsIfNeeded;
- (void)downloadSiriAssetsOverCellular;
- (id)getAssistantLanguageIfAvailableSync;
- (id)getDownloadSizeInBytesForLanguage:(id)arg1;
- (bool)hasSufficientDiskSpaceForDownload;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)refreshUAFAssetStatusAsync;
- (void)refreshUnderstandingOnDeviceAssetsAvailableAsync;
- (void)setAssetStatus:(id)arg1;
- (void)setAssistantEnabled:(bool)arg1;
- (void)setAssistantGroup:(id)arg1;
- (void)setAssistantUODStatus:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setSiriLanguage:(id)arg1;
- (void)setUnderstandingOnDeviceAssetsAvailable:(bool)arg1;
- (void)setUtilityQueue:(id)arg1;
- (id)siriLanguage;
- (void)startObservers;
- (bool)understandingOnDeviceAssetsAvailable;
- (id)utilityQueue;

@end


@interface MSDTestPreferences : NSObject

+ (id)sharedInstance;

- (id)LSMeasurementsFilePath;
- (double)appUsagePollingInterval;
- (double)caLogsUploadInterval;
- (double)cachingHubRetryInterval;
- (long long)concurrentDownloadOperation;
- (long long)concurrentDownloadRequest;
- (long long)concurrentSession;
- (id)contentSyncTimeoutInterval;
- (id)demoUnitServerURL;
- (long long)deviceActivationFlag;
- (bool)disableParallelProcessing;
- (bool)disassociateWiFiBeforeCheckIn;
- (bool)enablePeerDemoService;
- (bool)fakeActivationDemoBit;
- (long long)findMyHubRetryDelay;
- (id)getValueFromTestPreferencesForKey:(id)arg1;
- (id)mockAccountSettingsFile;
- (bool)mockForBetterTogetherDemo;
- (id)mockOSUpdateRequestFile;
- (bool)pauseContentUpdateOnError;
- (id)pressDemoTestTarget;
- (id)pressDemoXCTestProductsPath;
- (unsigned int)rebootDelayForStaging;
- (id)screenSaverIdleDelay;
- (bool)skipMarkAsNotDemo;
- (bool)skipVerifyHashBeforeStaging;
- (long long)storePickerUIMode;
- (unsigned int)systemAppPollingInterval;
- (unsigned int)systemAppTimeoutInterval;
- (unsigned int)timeShowingFatalError;

@end

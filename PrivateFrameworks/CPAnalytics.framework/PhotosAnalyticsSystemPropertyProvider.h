
@interface PhotosAnalyticsSystemPropertyProvider : NSObject <CPAnalyticsDynamicPropertyProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_deviceFreeSpaceDescription;
- (id)deviceModel;
- (id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3;
- (id)lowPowerModeEnabled;
- (id)osVersion;
- (id)percentageOfFreeSpaceOnDevice;
- (id)process;
- (void)registerSystemProperties:(id)arg1;

@end

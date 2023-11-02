
@interface HMDHomeRemoteEventAccessController : NSObject <HMDRemoteEventAccessControlProvider> {
    <HMDHomeRemoteEventAccessControllerDataSource> * _dataSource;
    HMDAccessorySettingsEventHelper * _settingsHelper;
}

@property (nonatomic, readonly) <HMDHomeRemoteEventAccessControllerDataSource> *dataSource;
@property (nonatomic, readonly) HMDAccessorySettingsEventHelper *settingsHelper;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;
- (bool)isAppleMediaAccessoryUUID:(id)arg1 error:(id*)arg2;
- (bool)isMediaSystemUUID:(id)arg1 error:(id*)arg2;
- (bool)isSiriEndpointAccessoryUUID:(id)arg1 error:(id*)arg2;
- (bool)remoteEventAllowForMediaSystemSettingEventTopic:(id)arg1 deviceType:(unsigned long long)arg2 userType:(unsigned long long)arg3;
- (bool)remoteEventAllowedForAccessoryEventTopic:(id)arg1 parsedEventTopic:(id)arg2 deviceType:(unsigned long long)arg3 userType:(unsigned long long)arg4;
- (bool)remoteEventAllowedForAccessoryInfoWithTopicSuffix:(id)arg1 deviceType:(unsigned long long)arg2 userType:(unsigned long long)arg3;
- (bool)remoteEventAllowedForHomeEventTopic:(id)arg1 parsedEventTopic:(id)arg2 deviceType:(unsigned long long)arg3 userType:(unsigned long long)arg4;
- (bool)remoteEventAllowedForTopic:(id)arg1 deviceType:(unsigned long long)arg2 userType:(unsigned long long)arg3;
- (id)settingsHelper;

@end

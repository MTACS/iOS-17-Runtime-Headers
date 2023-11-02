
@interface _DKCloudUtilities : NSObject {
    _DKThrottledActivity * _activityThrottler;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    bool  _isSingleDevice;
    bool  _supportsDeviceToDeviceEncryption;
}

@property (nonatomic, readonly) bool isCloudSyncAvailable;
@property (nonatomic, readonly) bool isSingleDevice;
@property (nonatomic, readonly) bool isSiriCloudSyncEnabled;
@property (nonatomic, readonly) bool supportsDeviceToDeviceEncryption;

+ (id)containerIdentifier;
+ (bool)isCloudKitEnabled;
+ (bool)isSyncAvailableAndEnabled;
+ (bool)isSyncAvailableAndEnabledWithVerboseLogging:(bool)arg1;
+ (bool)isUnitTesting;
+ (void)setCloudKitEnabled:(bool)arg1;
+ (void)setUnitTesting:(bool)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_accountDidChange:(id)arg1;
- (void)dealloc;
- (void)deleteRemoteStateWithReply:(id /* block */)arg1;
- (id)init;
- (bool)isCloudSyncAvailable;
- (bool)isSingleDevice;
- (bool)isSiriCloudSyncEnabled;
- (void)setCloudSyncAvailable:(bool)arg1;
- (bool)supportsDeviceToDeviceEncryption;

@end

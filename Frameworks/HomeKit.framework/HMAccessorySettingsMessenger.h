
@interface HMAccessorySettingsMessenger : NSObject <HMFLogging, HMFObject> {
    HMFMessageDispatcher * _messageDispatcher;
    NSUUID * _messageTargetUUID;
    HMAccessorySettingsMetricsDispatcher * _metricsDispatcher;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (readonly) HMAccessorySettingsMetricsDispatcher *metricsDispatcher;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)legacyMessageTargetUUIDWithHomeUUID:(id)arg1;
+ (id)logCategory;
+ (id)messageTargetUUIDWithHomeUUID:(id)arg1;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)description;
- (id)initWithMessageDispatcher:(id)arg1 messageTargetUUID:(id)arg2 metricsDispatcher:(id)arg3;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageTargetUUID;
- (id)metricsDispatcher;
- (id)privateDescription;
- (void)sendFetchAccessorySettingsRequestWithAccessoryUUID:(id)arg1 keyPaths:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendUpdateAccessorySettingRequestWithAccessoryUUID:(id)arg1 keyPath:(id)arg2 settingValue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)shortDescription;
- (void)submitMetricEventWithMessage:(id)arg1 error:(id)arg2;

@end

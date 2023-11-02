
@interface FCNotificationsEndpointConnection : NSObject <FCCoreConfigurationObserving> {
    NSURL * _baseURL;
    <FCBundleSubscriptionManagerType> * _bundleSubscriptionManager;
    <FCCoreConfigurationManager> * _configurationManager;
    NSString * _deviceOSVersion;
    NSString * _deviceType;
    FCEndpointConnection * _endpointConnection;
    FCFileCoordinatedNotificationDropbox * _fileCoordinatedNotificationDropbox;
    FCAsyncSerialQueue * _serialQueue;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) <FCBundleSubscriptionManagerType> *bundleSubscriptionManager;
@property (nonatomic, retain) <FCCoreConfigurationManager> *configurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceOSVersion;
@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic, retain) FCEndpointConnection *endpointConnection;
@property (nonatomic, retain) FCFileCoordinatedNotificationDropbox *fileCoordinatedNotificationDropbox;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCAsyncSerialQueue *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_deviceInfoWithDeviceToken:(id)arg1 deviceDigestMode:(int)arg2;
- (id)_marketingSubscriptionRequestWithType:(int)arg1 action:(int)arg2 dsid:(id)arg3;
- (id)_notificationDataInDropbox;
- (id)_notificationEntitiesWithChannelIDs:(id)arg1 isPaid:(bool)arg2 paidBundleSubscriptionStatus:(unsigned long long)arg3 editorialChannelID:(id)arg4;
- (id)_notificationEntityForTopicRequestFromChannelID:(id)arg1;
- (id)_notificationEntityWithChannelIDs:(id)arg1 isPaid:(bool)arg2 paidBundleSubscriptionStatus:(unsigned long long)arg3 notificationType:(int)arg4;
- (int)_pbNotificationEntityPaidBundleSubscriptionStatusFromSubscriptionState:(unsigned long long)arg1;
- (id)_pushNotifySubscriptionRequestWithChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 deviceDigestMode:(int)arg6;
- (id)_pushNotifySubscriptionRequestWithTopicIDs:(id)arg1 fromChannelID:(id)arg2 withTopicGroupingID:(id)arg3 userID:(id)arg4 deviceToken:(id)arg5 storefrontID:(id)arg6 deviceDigestMode:(int)arg7;
- (void)_sendNotificationsSubscriptionRequest:(id)arg1 pathComponent:(id)arg2 callbackQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)_updateNotificationDropboxDataWithBaseURL:(id)arg1 notificationUserID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 deviceDigestMode:(int)arg5;
- (id)baseURL;
- (id)bundleSubscriptionManager;
- (id)configurationManager;
- (void)configurationManager:(id)arg1 configurationDidChange:(id)arg2;
- (id)deviceOSVersion;
- (id)deviceType;
- (id)endpointConnection;
- (id)fileCoordinatedNotificationDropbox;
- (id)initWithBaseURLString:(id)arg1;
- (id)initWithConfigurationManager:(id)arg1 bundleSubscriptionManager:(id)arg2;
- (id)initWithEndpointConnection:(id)arg1 configurationManager:(id)arg2 bundleSubscriptionManager:(id)arg3;
- (void)modifyMarketingSubscriptionWithType:(int)arg1 action:(int)arg2 dsid:(id)arg3 callbackQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 deviceDigestMode:(int)arg6 callbackQueue:(id)arg7 completion:(id /* block */)arg8;
- (void)refreshNotificationsForTopicIDs:(id)arg1 withTopicGroupingID:(id)arg2 fromChannelID:(id)arg3 userID:(id)arg4 deviceToken:(id)arg5 storefrontID:(id)arg6 deviceDigestMode:(int)arg7 callbackQueue:(id)arg8 completion:(id /* block */)arg9;
- (void)registerDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 deviceDigestMode:(int)arg4 callbackQueue:(id)arg5 completion:(id /* block */)arg6;
- (id)serialQueue;
- (void)setBaseURL:(id)arg1;
- (void)setBundleSubscriptionManager:(id)arg1;
- (void)setConfigurationManager:(id)arg1;
- (void)setDeviceOSVersion:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setEndpointConnection:(id)arg1;
- (void)setFileCoordinatedNotificationDropbox:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)subscribeNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 deviceDigestMode:(int)arg6 callbackQueue:(id)arg7 completion:(id /* block */)arg8;
- (void)subscribeNotificationsForTopicIDs:(id)arg1 withTopicGroupingID:(id)arg2 fromChannelID:(id)arg3 userID:(id)arg4 deviceToken:(id)arg5 storefrontID:(id)arg6 deviceDigestMode:(int)arg7 callbackQueue:(id)arg8 completion:(id /* block */)arg9;
- (void)unregisterDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 deviceDigestMode:(int)arg4 callbackQueue:(id)arg5 completion:(id /* block */)arg6;
- (void)unsubscribeNotificationsForChannelIDs:(id)arg1 userID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 deviceDigestMode:(int)arg5 callbackQueue:(id)arg6 completion:(id /* block */)arg7;
- (void)unsubscribeNotificationsForTopicIDs:(id)arg1 withTopicGroupingID:(id)arg2 fromChannelID:(id)arg3 userID:(id)arg4 deviceToken:(id)arg5 storefrontID:(id)arg6 deviceDigestMode:(int)arg7 callbackQueue:(id)arg8 completion:(id /* block */)arg9;
- (void)updateBaseURL:(id)arg1;

@end

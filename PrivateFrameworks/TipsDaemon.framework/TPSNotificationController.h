
@interface TPSNotificationController : NSObject {
    NSMutableDictionary * _assetURLSessionMap;
    <TPSNotificationControllerDelegate> * _delegate;
    NSBundle * _frameworkBundle;
    TPSLocalNotificationController * _localNotificationController;
    TPSNotificationCache * _notificationCache;
    long long  _notificationCount;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (nonatomic, retain) NSMutableDictionary *assetURLSessionMap;
@property (nonatomic) <TPSNotificationControllerDelegate> *delegate;
@property (nonatomic, retain) NSBundle *frameworkBundle;
@property (nonatomic, retain) TPSLocalNotificationController *localNotificationController;
@property (nonatomic, retain) TPSNotificationCache *notificationCache;
@property (nonatomic) long long notificationCount;
@property (getter=isNotificationSettingValid, nonatomic, readonly) bool notificationSettingValid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;

+ (bool)alwaysDisplayCollectionIcon;
+ (id)cacheDirectoryCreateIfEmpty:(bool)arg1;
+ (id)displayDarwinNotificationKey;
+ (bool)isValidNotificationInterval;
+ (long long)remainingCountOfNotificationsUntilOptOut;
+ (void)removeAssetCacheDirectory;
+ (void)removeNotificationCache;
+ (bool)respectsOptout;
+ (double)standardNotificationInterval;
+ (bool)supportsExtension;
+ (bool)supportsNotification;
+ (bool)supportsRemoteIcon;
+ (bool)supportsWelcomeNotification;

- (void).cxx_destruct;
- (id)assetURLSessionMap;
- (id)assetsConfigurationForDocument:(id)arg1;
- (id)cacheAssetFileURLForDocument:(id)arg1;
- (id)cacheFilePathForFile:(id)arg1;
- (bool)canUpdateHintEligibilityForIdentifier:(id)arg1;
- (void)clearNotificationCache;
- (void)clearNotificationCount;
- (bool)collectionEligibleForNotification:(id)arg1;
- (id)copyFileURL:(id)arg1 cachePath:(id)arg2;
- (id)delegate;
- (id)documentToNotifyForCollection:(id)arg1 collectionDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3 overridedOptOutContentOnly:(bool)arg4;
- (id)documentToNotifyForTipsInCollection:(id)arg1 tipMap:(id)arg2 tipDeliveryInfoMap:(id)arg3 deliveryInfoMap:(id)arg4 overridedOptOutContentOnly:(bool)arg5;
- (void)fetchNotificationAssetIfNeededCompletionHandler:(id /* block */)arg1;
- (id)frameworkBundle;
- (void)increaseUserNotificationCount;
- (id)init;
- (bool)isDocumentHintDisplayedOnOtherDevices:(id)arg1;
- (bool)isNotificationDeliveryInfoValid:(id)arg1 identifier:(id)arg2 overridedOptOutContentOnly:(bool)arg3 ignoreSuppressContent:(bool)arg4;
- (bool)isNotificationSettingValid;
- (id)localNotificationController;
- (id)notificationCache;
- (long long)notificationCount;
- (id)notificationDeliveryInfoForIdentifier:(id)arg1 documentDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3;
- (bool)preconditionValidForIdentifier:(id)arg1 documentDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3 overridedOptOutContentOnly:(bool)arg4 ignoreSuppressContent:(bool)arg5;
- (void)removeAllNotifications;
- (void)removeNotificationWithIdentifier:(id)arg1;
- (void)setAssetURLSessionMap:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrameworkBundle:(id)arg1;
- (void)setLocalNotificationController:(id)arg1;
- (void)setNotificationCache:(id)arg1;
- (void)setNotificationCount:(long long)arg1;
- (void)setSyncQueue:(id)arg1;
- (bool)shouldDisplayCollectionIcon;
- (void)showNotificationWithCompletionHandler:(id /* block */)arg1;
- (id)syncQueue;
- (id)tipDocumentToNotifyWithIdentifier:(id)arg1 tipMap:(id)arg2 tipDeliveryInfoMap:(id)arg3 deliveryInfoMap:(id)arg4 overridedOptOutContentOnly:(bool)arg5;
- (void)updateArchiveCache;
- (void)updateDocumentToNotifyWithPreferredIdentifiers:(id)arg1 collectionOrder:(id)arg2 collectionMap:(id)arg3 collectionDeliveryInfoMap:(id)arg4 tipMap:(id)arg5 tipsDeliveryInfoMap:(id)arg6 deliveryInfoMap:(id)arg7 documentDictionaryMap:(id)arg8 metadataDictionary:(id)arg9 completionHandler:(id /* block */)arg10;
- (bool)updateHintEligibleForTip:(id)arg1 isValid:(bool)arg2;
- (void)updateLastNotificationDate;
- (id)updateNotificationCacheWithCollectionIdentifier:(id)arg1 document:(id)arg2 type:(unsigned long long)arg3 extensionPayload:(id)arg4;
- (void)updateNotificationCount;

@end

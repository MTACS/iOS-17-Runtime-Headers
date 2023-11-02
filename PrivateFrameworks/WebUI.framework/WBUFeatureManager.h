
@interface WBUFeatureManager : NSObject <ACMonitoredAccountStoreDelegateProtocol> {
    ACAccount * _account;
    ACMonitoredAccountStore * _accountStore;
    bool  _autoFillAvailable;
    bool  _bookmarksAvailable;
    NSNumber * _cachedLocallyRestricted;
    NSNumber * _cachedShouldRequestMoreTime;
    bool  _cloudSyncAvailable;
    bool  _inMemoryBookmarkChangeTrackingAvailable;
    NSObject<OS_dispatch_queue> * _internalQueue;
    OTClique * _keychainClique;
    double  _lastRestrictedSettingRequestedTime;
    STManagementState * _managementState;
    bool  _offlineReadingListAvailable;
    NSString * _primaryAccountAltDSID;
    bool  _readingListAvailable;
}

@property (getter=isAirDropPasswordsAvailable, nonatomic, readonly) bool airDropPasswordsAvailable;
@property (getter=isAutoFillAvailable, nonatomic, readonly) bool autoFillAvailable;
@property (getter=isBookmarksAvailable, nonatomic, readonly) bool bookmarksAvailable;
@property (getter=isCloudHistorySyncAvailable, nonatomic, readonly) bool cloudHistorySyncAvailable;
@property (getter=isCloudKitBookmarksAvailable, nonatomic, readonly) bool cloudKitBookmarksAvailable;
@property (getter=isCloudSyncAvailable, nonatomic, readonly) bool cloudSyncAvailable;
@property (getter=isCloudTabsAvailable, nonatomic, readonly) bool cloudTabsAvailable;
@property (getter=isCreditCardStorageAvailable, nonatomic, readonly) bool creditCardStorageAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInMemoryBookmarkChangeTrackingAvailable, nonatomic, readonly) bool inMemoryBookmarkChangeTrackingAvailable;
@property (getter=isKeychainSyncEnabled, nonatomic, readonly) bool keychainSyncEnabled;
@property (getter=isOfflineReadingListAvailable, nonatomic, readonly) bool offlineReadingListAvailable;
@property (getter=isPrivateBrowsingAvailable, nonatomic, readonly) bool privateBrowsingAvailable;
@property (getter=isReadingListAvailable, nonatomic, readonly) bool readingListAvailable;
@property (readonly) Class superclass;
@property (getter=isUserRemotelyManagedAndLocallyRestricted, nonatomic, readonly) bool userRemotelyManagedAndLocallyRestricted;

+ (bool)_hasManagedAutoFillDomains;
+ (long long)accessLevel;
+ (bool)shouldAllowAddingNewPasswords;
+ (bool)shouldOfferVirtualCards;
+ (id)webui_sharedFeatureManager;

- (void).cxx_destruct;
- (bool)_isCloudTabsAvailableUsingManagedAppleID:(bool)arg1;
- (bool)_isUsingManagedAppleID;
- (bool)_locallyRestricted;
- (void)_setAccount:(id)arg1;
- (void)_setAccountOnInternalQueue:(id)arg1;
- (void)_updateFeatureAvailabilityByAccessLevel;
- (void)_updateKeychainSyncingStatus;
- (void)accountWasAdded:(id)arg1;
- (void)accountWasModified:(id)arg1;
- (void)accountWasRemoved:(id)arg1;
- (void)dealloc;
- (void)determineIfPrivateBrowsingIsAvailableWithCompletionHandler:(id /* block */)arg1;
- (void)determineIfUserIsRestrictedByScreenTimeWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (bool)isAirDropPasswordsAvailable;
- (bool)isAutoFillAvailable;
- (bool)isBookmarksAvailable;
- (bool)isCloudHistorySyncAvailable;
- (bool)isCloudKitBookmarksAvailable;
- (bool)isCloudSyncAvailable;
- (bool)isCloudTabsAvailable;
- (bool)isCreditCardStorageAvailable;
- (bool)isInMemoryBookmarkChangeTrackingAvailable;
- (bool)isKeychainSyncEnabled;
- (bool)isOfflineReadingListAvailable;
- (bool)isPrivateBrowsingAvailable;
- (bool)isReadingListAvailable;
- (bool)isUserRemotelyManagedAndLocallyRestricted;

@end

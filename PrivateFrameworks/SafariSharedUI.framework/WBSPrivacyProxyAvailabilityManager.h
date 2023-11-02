
@interface WBSPrivacyProxyAvailabilityManager : NSObject {
    bool  _initialized;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isPrivacyProxyActiveOnDefaultNetwork;
    bool  _isPrivacyProxyOnInICloudSettings;
    bool  _isPrivacyProxyPaidTierUnavailableInUserCountry;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    unsigned long long  _privacyProxyAccountType;
    int  _privacyProxyConfigurationChangeNotificationToken;
    unsigned long long  _privacyProxyServiceStatus;
    int  _privacyProxyServiceStatusChangeNotificationToken;
    unsigned long long  _privacyProxyTrafficBitfield;
}

@property bool initialized;
@property (nonatomic, readonly) bool isPrivacyProxyActive;
@property (nonatomic, readonly) bool isPrivacyProxyFreeTierAvailable;
@property (nonatomic, readonly) bool isPrivacyProxyOnForEitherTier;
@property (nonatomic, readonly) bool isPrivacyProxyOnInICloudSettings;
@property (nonatomic, readonly) bool isPrivacyProxyPaidTierUnavailableInUserCountry;
@property (nonatomic, readonly) bool isPrivacyProxyRestrictedToTrackersByUser;
@property (nonatomic, readonly) bool isPrivacyProxyRoutingUnencryptedTrafficInEnhancedPrivacyMode;
@property (nonatomic, readonly) bool isPrivacyProxySetToTrackersAndWebsites;
@property (nonatomic, readonly) bool isUserAccountInSubscriberTierForPrivacyProxy;
@property (nonatomic, readonly) bool shouldFetchPasswordManagerIconsUsingPrivacyProxy;
@property (nonatomic, readonly) bool shouldPromptUsersToTurnOnPrivateRelayForSafari;
@property (nonatomic, readonly) unsigned long long state;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (void)openPrivateRelayICloudSettings;

- (void).cxx_destruct;
- (bool)_isPrivacyProxyActiveForInterface:(id)arg1 networkStatuses:(id)arg2;
- (void)_registerForDefaultNetworkInterfaceChangeNotifications;
- (void)_registerForPrivacyProxyChangeNotifications;
- (void)_updatePrivacyProxyStateWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (bool)initialized;
- (bool)isPrivacyProxyActive;
- (bool)isPrivacyProxyFreeTierAvailable;
- (bool)isPrivacyProxyOnForEitherTier;
- (bool)isPrivacyProxyOnInICloudSettings;
- (bool)isPrivacyProxyPaidTierUnavailableInUserCountry;
- (bool)isPrivacyProxyRestrictedToTrackersByUser;
- (bool)isPrivacyProxyRoutingUnencryptedTrafficInEnhancedPrivacyMode;
- (bool)isPrivacyProxySetToTrackersAndWebsites;
- (bool)isUserAccountInSubscriberTierForPrivacyProxy;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setInitialized:(bool)arg1;
- (void)setPrivacyProxyEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setPrivacyProxyState:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)shouldFetchPasswordManagerIconsUsingPrivacyProxy;
- (bool)shouldPromptUsersToTurnOnPrivateRelayForSafari;
- (unsigned long long)state;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (id)sharedManager;

@end

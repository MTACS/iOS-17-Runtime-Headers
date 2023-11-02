
@interface HMDSiriMultiUserNewLanguageNotificationManagerContext : HMFObject <HMFLogging> {
    bool  _cachedHasCurrentUserSeenNotification;
    <HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate> * _delegate;
    HMDUser * _user;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (getter=isRMVEnabledForCurrentUser, readonly) bool RMVEnabledForCurrentUser;
@property bool cachedHasCurrentUserSeenNotification;
@property (readonly) NSString *currentDeviceSiriLanguage;
@property (readonly, copy) NSString *debugDescription;
@property <HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasCurrentUserSeenNotification;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *mediaAccessories;
@property (readonly) Class superclass;
@property (readonly) HMDUser *user;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)userReadableLanguageFromCode:(id)arg1;

- (void).cxx_destruct;
- (bool)cachedHasCurrentUserSeenNotification;
- (void)configure;
- (id)currentDeviceSiriLanguage;
- (id)delegate;
- (void)handleMediaAccessorySoftwareVersionUpdated:(id)arg1;
- (bool)hasCurrentUserSeenNotification;
- (id)initWithUser:(id)arg1 workQueue:(id)arg2;
- (bool)isRMVEnabledForCurrentUser;
- (id)mediaAccessories;
- (void)setCachedHasCurrentUserSeenNotification:(bool)arg1;
- (void)setCurrentUserHasSeenNotification;
- (void)setDelegate:(id)arg1;
- (void)showNotificationForNewlySupportedLanguage:(id)arg1;
- (id)siriLanguageForMediaAccessory:(id)arg1;
- (id)siriLanguagesRequiringNotificationForVersion:(id)arg1;
- (void)submitLogEventForShownNotificationWithLanguage:(id)arg1;
- (id)user;
- (id)workQueue;

@end

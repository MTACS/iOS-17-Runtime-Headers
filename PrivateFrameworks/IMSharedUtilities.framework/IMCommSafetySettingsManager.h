
@interface IMCommSafetySettingsManager : NSObject <IMUnlockMonitorListener> {
    bool  _checkSensitivePhotos;
    bool  _checkSensitivePhotosAnalyticsEnabled;
    bool  _childIsYoungAgeGroup;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    long long  _enablementGroup;
    id  _enablementSubscription;
    bool  _hasConnected;
    int  _notificationToken;
    NSMutableArray * _parents;
    long long  _protectedChildAge;
    bool  _shouldNotifyParentAboutSensitivePhotos;
}

@property (nonatomic) bool checkSensitivePhotos;
@property (nonatomic) bool checkSensitivePhotosAnalyticsEnabled;
@property (nonatomic, readonly) bool checksForSensitivityOnNicknameReceive;
@property (nonatomic, readonly) bool checksForSensitivityOnReceive;
@property (nonatomic, readonly) bool checksForSensitivityOnSend;
@property (nonatomic) bool childIsYoungAgeGroup;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long enablementGroup;
@property (nonatomic, retain) id enablementSubscription;
@property (getter=isFeatureEnabled, nonatomic, readonly) bool featureEnabled;
@property (nonatomic) bool hasConnected;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *parents;
@property (nonatomic) long long protectedChildAge;
@property (nonatomic) bool shouldNotifyParentAboutSensitivePhotos;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_configureUserSafetySettingsListener;
- (void)_connectToFamilyCircle:(id /* block */)arg1;
- (long long)_fetchEnablementGroup;
- (bool)_hasOverriddenEnablementGroup;
- (long long)_overriddenEnablementGroup;
- (bool)_shouldUseScreenTimeAndFamilyCircle;
- (void)_updateSettings;
- (bool)checkSensitivePhotos;
- (bool)checkSensitivePhotosAnalyticsEnabled;
- (bool)checksForSensitivityOnNicknameReceive;
- (bool)checksForSensitivityOnReceive;
- (bool)checksForSensitivityOnSend;
- (bool)childIsYoungAgeGroup;
- (id)connectionQueue;
- (void)dealloc;
- (long long)enablementGroup;
- (id)enablementSubscription;
- (bool)hasConnected;
- (id)init;
- (bool)isFeatureEnabled;
- (id)parents;
- (long long)protectedChildAge;
- (void)setCheckSensitivePhotos:(bool)arg1;
- (void)setCheckSensitivePhotosAnalyticsEnabled:(bool)arg1;
- (void)setChildIsYoungAgeGroup:(bool)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setEnablementGroup:(long long)arg1;
- (void)setEnablementSubscription:(id)arg1;
- (void)setHasConnected:(bool)arg1;
- (void)setParents:(id)arg1;
- (void)setProtectedChildAge:(long long)arg1;
- (void)setShouldNotifyParentAboutSensitivePhotos:(bool)arg1;
- (bool)shouldNotifyParentAboutSensitivePhotos;
- (void)systemDidLeaveFirstDataProtectionLock;

@end

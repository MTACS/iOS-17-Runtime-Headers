
@interface FCNotificationController : NSObject <FCUserInfoObserving> {
    bool  _appleNewsNotificationsAllowed;
    FCCommandQueue * _commandQueue;
    <FCCoreConfigurationManager> * _configurationManager;
    int  _deviceDigestMode;
    NSString * _deviceToken;
    NSString * _notificationsUserID;
    bool  _publisherNotificationsAllowed;
    bool  _shouldUseNewsUINotificationHandling;
    FCUserInfo * _userInfo;
}

@property (nonatomic) bool appleNewsNotificationsAllowed;
@property (nonatomic, retain) FCCommandQueue *commandQueue;
@property (nonatomic, retain) <FCCoreConfigurationManager> *configurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceDigestMode;
@property (nonatomic, copy) NSString *deviceToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *notificationsUserID;
@property (nonatomic) bool publisherNotificationsAllowed;
@property (nonatomic) bool shouldUseNewsUINotificationHandling;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCUserInfo *userInfo;

- (void).cxx_destruct;
- (void)_registerDeviceToken:(id)arg1 deviceDigestMode:(int)arg2;
- (id)appendBreakingNewsIfNeededToChannelIDs:(id)arg1;
- (bool)appleNewsNotificationsAllowed;
- (id)commandQueue;
- (id)configurationManager;
- (void)dealloc;
- (int)deviceDigestMode;
- (void)deviceDigestModeDidUpdateToDigestMode:(int)arg1;
- (id)deviceToken;
- (id)init;
- (id)initWithUserInfo:(id)arg1 commandQueue:(id)arg2 configurationManager:(id)arg3 publisherNotificationsAllowed:(bool)arg4 appleNewsNotificationsAllowed:(bool)arg5;
- (id)notificationsUserID;
- (bool)publisherNotificationsAllowed;
- (bool)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2;
- (bool)refreshNotificationsForTopicIDs:(id)arg1 withTopicGroupingID:(id)arg2 fromChannelID:(id)arg3;
- (void)refreshNotificationsFromAppleNews;
- (void)registerDeviceToken:(id)arg1 deviceDigestMode:(int)arg2;
- (bool)registerNotificationsForChannelID:(id)arg1 isPaid:(bool)arg2;
- (bool)registerNotificationsForTopicIDs:(id)arg1 withTopicGroupingID:(id)arg2 fromChannelID:(id)arg3;
- (void)setAppleNewsNotificationsAllowed:(bool)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setConfigurationManager:(id)arg1;
- (void)setDeviceDigestMode:(int)arg1;
- (void)setDeviceToken:(id)arg1;
- (void)setEndOfAudioTrackNotificationsEnabled:(bool)arg1;
- (bool)setMarketingNotificationsEnabled:(bool)arg1 error:(id*)arg2;
- (void)setNewIssueNotificationsEnabled:(bool)arg1;
- (void)setNotificationsUserID:(id)arg1;
- (void)setPublisherNotificationsAllowed:(bool)arg1;
- (bool)setPuzzleNotificationsEnabled:(bool)arg1 userTriggered:(bool)arg2 error:(id*)arg3;
- (void)setShouldUseNewsUINotificationHandling:(bool)arg1;
- (void)setSportsTopicNotificationsEnabled:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldUseNewsUINotificationHandling;
- (bool)unregisterNotificationsForChannelID:(id)arg1;
- (bool)unregisterNotificationsForTopicIDs:(id)arg1 withTopicGroupingID:(id)arg2 fromChannelID:(id)arg3;
- (id)userInfo;
- (void)userInfoDidChangeNotificationsUserID:(id)arg1;

@end

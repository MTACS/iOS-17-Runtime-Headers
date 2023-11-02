
@interface ANUserNotificationController : NSObject {
    <ANUserNotificationControllerDelegate> * _delegate;
    UNUserNotificationCenter * _notificationCenter;
    bool  _suspendNotificationExpiration;
}

@property (nonatomic) <ANUserNotificationControllerDelegate> *delegate;
@property (nonatomic, readonly) UNUserNotificationCenter *notificationCenter;
@property (nonatomic) bool suspendNotificationExpiration;

+ (void)_bestDeviceToAlert:(id /* block */)arg1;
+ (id)_createNotificationContent:(id)arg1 homeName:(id)arg2 withSilence:(bool)arg3 userInfo:(id)arg4 actionUrl:(id)arg5 expirationDate:(id)arg6 andThreadIdentifier:(id)arg7;
+ (id)sharedController;

- (void).cxx_destruct;
- (bool)_canUpdateUserNotificationForHome:(id)arg1;
- (id)_contentBodyForAnnouncements:(id)arg1 inHome:(id)arg2;
- (void)_contentForAnnouncement:(id)arg1 groupAnnouncements:(id)arg2 inHome:(id)arg3 threadID:(id)arg4 replacement:(bool)arg5 completion:(id /* block */)arg6;
- (id)_contentForSendFailureForAnnouncement:(id)arg1 homeName:(id)arg2;
- (void)_postNotificationWithContent:(id)arg1 requestID:(id)arg2;
- (void)_replaceContentForRequestWithRequestID:(id)arg1 replacementContent:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_replaceContentForRequestsWithThreadID:(id)arg1 replacementContent:(id)arg2;
- (void)_setContentExpirationDate:(id)arg1 forNotificationsWithThreadIDs:(id)arg2;
- (id)_userInfoForAnnouncement:(id)arg1 groupAnnouncements:(id)arg2;
- (id)_userInfoForFailedDeliveryForAnnouncement:(id)arg1;
- (bool)canPostUserNotificationForAnnouncement:(id)arg1 home:(id)arg2;
- (void)cleanForExit;
- (id)delegate;
- (bool)hasDeliveredNotificationsWithGroupID:(id)arg1;
- (id)init;
- (id)notificationCenter;
- (void)pauseExpirationForNotificationsWithGroupIDs:(id)arg1;
- (void)postNotificationForAnnouncement:(id)arg1 groupAnnouncements:(id)arg2 home:(id)arg3 groupID:(id)arg4;
- (void)postSendFailureNotificationForAnnouncement:(id)arg1;
- (void)removeNotificationWithGroupID:(id)arg1;
- (void)resumeExpirationForNotificationsWithGroupIDs:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSuspendNotificationExpiration:(bool)arg1;
- (bool)suspendNotificationExpiration;
- (void)updateNotificationForAnnouncements:(id)arg1 home:(id)arg2 groupID:(id)arg3;

@end

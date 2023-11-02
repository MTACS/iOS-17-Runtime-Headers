
@interface IMDNotificationResponseUtilities : NSObject <UNUserNotificationCenterDelegate> {
    IMDAskToBuyResponseHandler * _askToBuyResponseHandler;
    IMDFamilyInviteReponseHandler * _familyInviteResponseHandler;
    UNUserNotificationCenter * _notificationCenter;
    IMDSafetyMonitorResponseHandler * _safetyMonitorResponseHandler;
    IMDScreenTimeAskReponseHandler * _screenTimeAskReponseHandler;
}

@property (nonatomic, retain) IMDAskToBuyResponseHandler *askToBuyResponseHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) IMDFamilyInviteReponseHandler *familyInviteResponseHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UNUserNotificationCenter *notificationCenter;
@property (nonatomic, retain) IMDSafetyMonitorResponseHandler *safetyMonitorResponseHandler;
@property (nonatomic, retain) IMDScreenTimeAskReponseHandler *screenTimeAskReponseHandler;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_markMessageAsRead:(id)arg1 inChat:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_setupNotificationCenter;
- (id)askToBuyResponseHandler;
- (id)familyInviteResponseHandler;
- (id)init;
- (id)notificationCenter;
- (id)safetyMonitorResponseHandler;
- (id)screenTimeAskReponseHandler;
- (void)setAskToBuyResponseHandler:(id)arg1;
- (void)setFamilyInviteResponseHandler:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setSafetyMonitorResponseHandler:(id)arg1;
- (void)setScreenTimeAskReponseHandler:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end

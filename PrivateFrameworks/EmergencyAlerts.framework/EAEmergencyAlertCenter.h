
@interface EAEmergencyAlertCenter : NSObject {
    UNUserNotificationCenter * _userNotificationCenter;
}

- (void).cxx_destruct;
- (void)addNotificationRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (unsigned long long)currentAudioAndVideoCallCount;
- (id)getUpdatedNotificationForAppleSafetyAlert:(id)arg1 withMessageDictionary:(id)arg2;
- (void)handleAppleSafetyAlertMessage:(id)arg1;
- (id)handleCellBroadcastMessage:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)handleRawCellBroadcastMessage:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithUserNotificationCenter:(id)arg1;
- (void)replaceContentForRequestWithRequestID:(id)arg1 replacementContent:(id)arg2 completionHandler:(id /* block */)arg3;

@end

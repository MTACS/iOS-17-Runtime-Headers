
@interface CKSceneController : NSObject <UNUserNotificationCenterDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_suppressionContextsForChatIdentifier:(id)arg1 personCentricID:(id)arg2;
- (id)alertSuppressionContextsFromForegroundActiveScenes;
- (id)messagesSceneDelegate;
- (bool)shouldSuppressNotificationForMessageWithRelevantContext:(id)arg1 withAlertSupressionContextForScenes:(id)arg2;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end

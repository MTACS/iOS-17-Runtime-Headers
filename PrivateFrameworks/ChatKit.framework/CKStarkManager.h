
@interface CKStarkManager : NSObject <CPInterfaceControllerDelegate, CPTemplateApplicationSceneDelegate, UISceneDelegate> {
    CKStarkConversationController * _conversationController;
}

@property (nonatomic, retain) CKStarkConversationController *conversationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_activateSiriWithContext:(id)arg1;
+ (id)_directActionSource;
+ (void)activateForConversation:(id)arg1;
+ (void)activateForRecipient:(id)arg1;
+ (bool)isCarPlayConnected;

- (void).cxx_destruct;
- (id)conversationController;
- (void)openSMSURL:(id)arg1;
- (void)openURL:(id)arg1 sourceApplication:(id)arg2;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)setConversationController:(id)arg1;
- (void)templateApplicationScene:(id)arg1 didConnectInterfaceController:(id)arg2;
- (void)templateApplicationScene:(id)arg1 didDisconnectInterfaceController:(id)arg2;

@end

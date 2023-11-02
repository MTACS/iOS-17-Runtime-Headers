
@interface CKUserActivityHandler : NSObject

+ (bool)_messageUnknownFilteringEnabled;
+ (void)_sendCollaborationInitationForURL:(id)arg1 originatingProcess:(id)arg2 chat:(id)arg3 conversation:(id)arg4 recipientIDs:(id)arg5 navigationProvider:(id)arg6 animate:(bool)arg7;
+ (void)_setMessageFilterModeBy:(id)arg1 navigationProvider:(id)arg2;
+ (void)_showPeerPaymentUIForPerson:(id)arg1 amount:(id)arg2 navigationProvider:(id)arg3 chatController:(id)arg4;
+ (void)chatScene:(id)arg1 openURLContexts:(id)arg2;
+ (void)chatScene:(id)arg1 willConnectToSession:(id)arg2 userActivities:(id)arg3 urlContexts:(id)arg4 windowSceneDelegate:(id)arg5;
+ (void)compositionFromDictionary:(id)arg1 completion:(id /* block */)arg2;
+ (id)conversationfromLaunchEventContext:(id)arg1;
+ (id)createPluginPayloadForCloudKit:(id)arg1;
+ (id)createPluginPayloadForCloudKitPlusCollaborationMetadata:(id)arg1 shareOptions:(id)arg2;
+ (id)createPluginPayloadForCloudKitWithLaunchContext:(id)arg1;
+ (id)createPluginPayloadForFileProvider:(id)arg1 sendCopyFileURLs:(id)arg2;
+ (id)createPluginPayloadForPendingCollaboration:(id)arg1;
+ (void)fileProviderCompositionFromPluginPayload:(id)arg1 url:(id)arg2 shareOptions:(id)arg3 previousComposition:(id)arg4 completion:(id /* block */)arg5;
+ (id)finalCompositionFromExistingComposition:(id)arg1 pluginPayloadComposition:(id)arg2 shareOptions:(id)arg3;
+ (bool)hasBusinessRecipientWithRecipientIDs:(id)arg1;
+ (bool)isPreferencesURL:(id)arg1;
+ (void)loadCompositionWithAttachments:(id)arg1 launchEventContext:(id)arg2 animate:(bool)arg3 navigationProvider:(id)arg4 chatController:(id)arg5;
+ (void)loadConversationWithMessageGUID:(id)arg1 withInlineReplyOverlay:(bool)arg2 navigationProvider:(id)arg3;
+ (void)loadNonGelatoCompositionForConversation:(id)arg1 launchEventContext:(id)arg2 animate:(bool)arg3 navigationProvider:(id)arg4 chatController:(id)arg5;
+ (void)messagesScene:(id)arg1 continueUserActivity:(id)arg2 withNavigationProvider:(id)arg3 chatController:(id)arg4 completion:(id /* block */)arg5;
+ (void)messagesScene:(id)arg1 willConnectToSession:(id)arg2 userActivities:(id)arg3 stateRestorationActivity:(id)arg4 windowSceneDelegate:(id)arg5;
+ (void)openItemProviders:(id)arg1 navigationProvider:(id)arg2 chatController:(id)arg3;
+ (void)openSMSURL:(id)arg1 animate:(bool)arg2 navigationProvider:(id)arg3 chatController:(id)arg4 originatingProcess:(id)arg5;
+ (void)openSURFURL:(id)arg1 navigationProvider:(id)arg2;
+ (void)openURL:(id)arg1 animate:(bool)arg2 sourceApplication:(id)arg3 originatingProcess:(id)arg4 navigationProvider:(id)arg5 chatController:(id)arg6 completion:(id /* block */)arg7;
+ (void)processAppleEventDictionary:(id)arg1 animate:(bool)arg2 navigationProvider:(id)arg3 chatController:(id)arg4;
+ (void)processLaunchEventContext:(id)arg1 animate:(bool)arg2 navigationProvider:(id)arg3 chatController:(id)arg4;
+ (bool)restoreState:(id)arg1 navigationProvider:(id)arg2;
+ (bool)restoreStateFromUserActivity:(id)arg1 withNavigationProvider:(id)arg2;
+ (void)sendBackgroundCollaborationForUserActivity:(id)arg1 withNavigationProvider:(id)arg2 chatController:(id)arg3 completion:(id /* block */)arg4;
+ (void)setChatControllerCompositionForConversation:(id)arg1 navigationProvider:(id)arg2 composition:(id)arg3;
+ (void)setupCollaborationCompositionWithLaunchEventContext:(id)arg1 animate:(bool)arg2 navigationProvider:(id)arg3 chatController:(id)arg4 conversation:(id)arg5 replaceComposition:(bool)arg6;
+ (void)setupFinalCompositionWithExistingComposition:(id)arg1 withPluginPayloadComposition:(id)arg2 shareOptions:(id)arg3 conversation:(id)arg4 animated:(bool)arg5 navigationProvider:(id)arg6;
+ (void)showConversation:(id)arg1 animated:(bool)arg2 navigationProvider:(id)arg3;
+ (void)updateChatController:(id)arg1 composition:(id)arg2;
+ (id)validIntentDictionaryWithURLParameters:(id)arg1;

@end

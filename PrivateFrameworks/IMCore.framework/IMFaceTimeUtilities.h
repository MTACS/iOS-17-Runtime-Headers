
@interface IMFaceTimeUtilities : NSObject

+ (bool)activeTUConversationHasActivitySession:(id)arg1;
+ (id)activityMetadataForTUConversation:(id)arg1;
+ (id)activitySessionForTUConversation:(id)arg1;
+ (bool)conversationIsAVLessSharePlay:(id)arg1;
+ (bool)conversationIsVideoCall:(id)arg1;
+ (id)currentCallForTUConversation:(id)arg1;
+ (void)initiateTUConversationForParticipants:(id)arg1 senderAddress:(id)arg2 videoEnabled:(bool)arg3 groupID:(id)arg4 displayName:(id)arg5;
+ (void)initiateTUDialRequestForSingleParticipant:(id)arg1 videoEnabled:(bool)arg2;
+ (bool)isScreenShareActivityForTUConversation:(id)arg1;
+ (void)joinExistingConversationForTUCoversation:(id)arg1 videoEnabled:(bool)arg2 wantsStagingArea:(bool)arg3;
+ (void)leaveTUCall:(id)arg1;
+ (void)leaveTUConversation;
+ (bool)platformSupportsStagingArea;
+ (id)remoteParticipantHandleSharingScreenForTUConversation:(id)arg1;

@end


@interface CTMessageCenter : NSObject

+ (id)sharedMessageCenter;

- (void)acknowledgeIncomingMessageWithId:(unsigned int)arg1;
- (void)acknowledgeOutgoingMessageWithId:(unsigned int)arg1;
- (void)addMessageOfType:(int)arg1 toArray:(id)arg2 withIdsFromArray:(id)arg3;
- (id)allIncomingMessages;
- (void)dealloc;
- (id)decodeMessage:(id)arg1;
- (void)emergencySessionIntentEnd:(id)arg1;
- (void)emergencySessionIntentStart:(id)arg1;
- (id)encodeMessage:(id)arg1;
- (bool)getCharacterCount:(long long*)arg1 andMessageSplitThreshold:(long long*)arg2 forSmsText:(id)arg3;
- (bool)getCharacterCountForSub:(id)arg1 count:(long long*)arg2 andMessageSplitThreshold:(long long*)arg3 forSmsText:(id)arg4;
- (int)incomingMessageCount;
- (id)incomingMessageWithId:(unsigned int)arg1;
- (id)init;
- (struct { int x1; int x2; })isDeliveryReportsEnabled:(bool*)arg1;
- (bool)isMmsConfigured;
- (bool)isMmsConfiguredForSub:(id)arg1;
- (bool)isMmsEnabled;
- (bool)isMmsEnabledForSub:(id)arg1;
- (struct { int x1; int x2; })isMmsEnabledForSub:(id)arg1 enabled:(bool*)arg2;
- (struct { int x1; int x2; })send:(id)arg1;
- (struct { int x1; int x2; })send:(id)arg1 withMoreToFollow:(bool)arg2;
- (bool)sendBinarySMS:(id)arg1 trackingID:(unsigned int*)arg2;
- (struct { int x1; int x2; })sendMMS:(id)arg1;
- (struct { int x1; int x2; })sendMMSFromData:(id)arg1 messageId:(unsigned int)arg2 subSlot:(long long)arg3;
- (void)sendMessageAsSmsToShortCodeRecipients:(id)arg1 andReplaceData:(id*)arg2;
- (struct { int x1; int x2; })sendSMS:(id)arg1 withMoreToFollow:(bool)arg2 trackingID:(unsigned int*)arg3;
- (bool)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3;
- (bool)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 trackingID:(unsigned int*)arg4;
- (bool)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withID:(unsigned int)arg4;
- (bool)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withMoreToFollow:(bool)arg4 withID:(unsigned int)arg5;
- (bool)sendSMSWithText:(id)arg1 text:(id)arg2 serviceCenter:(id)arg3 toAddress:(id)arg4;
- (bool)sendSMSWithText:(id)arg1 text:(id)arg2 serviceCenter:(id)arg3 toAddress:(id)arg4 trackingID:(unsigned int*)arg5;
- (bool)sendSMSWithText:(id)arg1 text:(id)arg2 serviceCenter:(id)arg3 toAddress:(id)arg4 withID:(unsigned int)arg5;
- (bool)sendSMSWithText:(id)arg1 text:(id)arg2 serviceCenter:(id)arg3 toAddress:(id)arg4 withMoreToFollow:(bool)arg5 withID:(unsigned int)arg6;
- (void)setDeliveryReportsEnabled:(bool)arg1;
- (bool)simulateDeferredMessage;
- (bool)simulateSmsReceived:(id)arg1;

@end

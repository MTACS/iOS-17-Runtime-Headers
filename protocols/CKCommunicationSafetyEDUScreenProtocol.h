
@protocol CKCommunicationSafetyEDUScreenProtocol

@required

- (void)acceptPressedForSecondReceivingCommSafetyEDUScreen:(CKCommunicationSafetyEDUScreen *)arg1 withItemIndexPath:(NSIndexPath *)arg2;
- (void)acceptPressedForSecondSendingCommSafetyEDUScreen:(CKCommunicationSafetyEDUScreen *)arg1 withComposition:(CKComposition *)arg2;
- (void)declinePressedForCommSafetyEduScreen:(CKCommunicationSafetyEDUScreen *)arg1 isSending:(bool)arg2 withComposition:(CKComposition *)arg3 withSensitiveMediaObjects:(NSSet *)arg4 withIdentifiersOfShelvedImages:(NSArray *)arg5;
- (void)messagePressedForCommSafetyEduScreen:(CKCommunicationSafetyEDUScreen *)arg1 isSending:(bool)arg2 withComposition:(CKComposition *)arg3 withSensitiveMediaObjects:(id)arg4 withIdentifiersOfShelvedImages:(NSArray *)arg5;

@end

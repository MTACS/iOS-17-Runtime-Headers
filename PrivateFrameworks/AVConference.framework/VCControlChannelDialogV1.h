
@interface VCControlChannelDialogV1 : VCControlChannelDialog {
    NSArray * _optionalTopics;
}

+ (bool)encryptMessage:(id)arg1 buffer:(char *)arg2 size:(unsigned int)arg3 sequenceNumber:(unsigned short)arg4 transactionDelegate:(id)arg5;
+ (id)newEncryptedMessageFromMessage:(id)arg1 sequenceNumber:(unsigned short)arg2 transactionDelegate:(id)arg3;
+ (bool)processMessageFromParticipant:(id)arg1 transactionID:(id)arg2 messageType:(unsigned int)arg3 sessionID:(unsigned int)arg4 transactionDelegate:(id)arg5;
+ (void)sendConfirmationToParticipantID:(id)arg1 transactionID:(id)arg2 sessionID:(unsigned int)arg3 transactionDelegate:(id)arg4;

- (void)dealloc;
- (bool)decryptMessageWithMKI:(void*)arg1 message:(id)arg2 buffer:(char *)arg3 size:(unsigned int)arg4 sequenceNumber:(unsigned short)arg5;
- (void)getTopic:(id*)arg1 message:(id*)arg2 fromPayload:(id)arg3;
- (id)initWithSessionID:(unsigned int)arg1 participantID:(id)arg2 participantUUID:(id)arg3 optionalTopics:(id)arg4 participantConfig:(struct { int x1; struct tagVCSecurityKeyHolder {} *x2; struct tagVCSecurityKeyHolder {} *x3; struct __CFData {} *x4; struct __CFData {} *x5; bool x6; }*)arg5 transactionDelegate:(id)arg6;
- (id)newDataFromMessage:(id)arg1 topic:(id)arg2 transactionID:(unsigned long long)arg3 isReliable:(bool)arg4 transactionDelegate:(id)arg5;
- (id)processEncryptedPayload:(id)arg1 isData:(bool)arg2 topic:(id*)arg3 sequenceNumber:(id)arg4 MKIData:(id)arg5 participantID:(id)arg6;
- (id)processMessageData:(id)arg1 participantID:(id)arg2 topic:(id*)arg3 transactionID:(id*)arg4 messageStatus:(unsigned int*)arg5 isInternalMessage:(bool*)arg6;
- (bool)processMessageFromParticipant:(id)arg1 transactionID:(id)arg2 messageType:(unsigned int)arg3 transactionDelegate:(id)arg4;

@end

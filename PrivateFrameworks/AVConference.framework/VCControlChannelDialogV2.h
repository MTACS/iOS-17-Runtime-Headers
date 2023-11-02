
@interface VCControlChannelDialogV2 : VCControlChannelDialog {
    struct tagVCCryptor { } * _downlinkCryptor;
    struct tagVCCryptor { } * _uplinkCryptor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _uplinkCryptorLock;
}

- (id)allocEncryptedPayloadFromPayloadData:(id)arg1;
- (id)copyDecryptedDataFromEncryptedPayload:(id)arg1;
- (void)dealloc;
- (id)initWithSessionID:(unsigned int)arg1 participantID:(id)arg2 participantUUID:(id)arg3 participantConfig:(struct { int x1; struct tagVCSecurityKeyHolder {} *x2; struct tagVCSecurityKeyHolder {} *x3; struct __CFData {} *x4; struct __CFData {} *x5; bool x6; }*)arg4 transactionDelegate:(id)arg5;
- (id)newDataFromMessage:(id)arg1 topic:(id)arg2 transactionID:(unsigned long long)arg3 isReliable:(bool)arg4 transactionDelegate:(id)arg5;
- (id)processMessageData:(id)arg1 participantID:(id)arg2 topic:(id*)arg3 transactionID:(id*)arg4 messageStatus:(unsigned int*)arg5 isInternalMessage:(bool*)arg6;
- (void)sendConfirmationToParticipantID:(id)arg1 transactionID:(id)arg2 sessionID:(unsigned int)arg3 transactionDelegate:(id)arg4;

@end

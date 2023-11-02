
@interface VCControlChannelMultiWay : VCControlChannel <VCControlChannelTransactionDelegate> {
    NSMutableDictionary * _activeParticipants;
    NSMutableDictionary * _cryptors;
    void * _currentReceiveMKI;
    void * _currentSendMKI;
    NSMutableDictionary * _dialogs;
    bool  _didSubmitCCReliableDataNotReceivedSymptom;
    bool  _isEncryptionEnabled;
    bool  _isRunning;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * _pidReceiveProc;
    NSObject<OS_dispatch_queue> * _sequentialKeyMaterialQueue;
    long long  _transactionID;
    unsigned int  _transportSessionID;
    int  _vfdCancel;
    int  _vfdMessage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *dialogs;
@property (readonly) unsigned long long hash;
@property (readonly) bool isEncryptionEnabled;
@property (readonly) bool isRunning;
@property (nonatomic, readonly) unsigned long long nextTransactionID;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int transportSessionID;
@property (nonatomic) int vfdCancel;
@property (nonatomic) int vfdMessage;

+ (id)allocPayoadDataFromVTPPacket:(struct VCBlockBuffer_t { struct OpaqueCMBlockBuffer {} *x1; unsigned long long x2; char *x3; }*)arg1 vpktFlags:(struct tagVPKTFLAG { int x1; unsigned int x2; unsigned int x3; bool x4; bool x5; bool x6; bool x7; int x8; int x9; struct tagVCSourceDestinationInfo { int x_10_1_1; union { struct { struct tagIPPORT { int x_1_4_1; BOOL x_1_4_2[16]; union { unsigned int x_3_5_1; unsigned char x_3_5_2[16]; } x_1_4_3; unsigned short x_1_4_4; } x_1_3_1; struct tagIPPORT { int x_2_4_1; BOOL x_2_4_2[16]; union { unsigned int x_3_5_1; unsigned char x_3_5_2[16]; } x_2_4_3; unsigned short x_2_4_4; } x_1_3_2; struct { bool x_3_4_1; unsigned short x_3_4_2; } x_1_3_3; } x_2_2_1; struct { int x_2_3_1; int x_2_3_2; struct tagIPPORT { int x_3_4_1; BOOL x_3_4_2[16]; union { unsigned int x_3_5_1; unsigned char x_3_5_2[16]; } x_3_4_3; unsigned short x_3_4_4; } x_2_3_3; int x_2_3_4; } x_2_2_2; struct { unsigned int x_3_3_1; struct { BOOL x_2_4_1; unsigned short x_2_4_2; unsigned char x_2_4_3; unsigned short x_2_4_4; unsigned char x_2_4_5; } x_3_3_2; bool x_3_3_3; } x_2_2_3; struct { id x_4_3_1; } x_2_2_4; } x_10_1_2; unsigned int x_10_1_3; struct tagVCSourceDestinationInfo {} *x_10_1_4; void *x_10_1_5; } x10; }*)arg2 channelDataFormat:(struct tagVCIDSChannelDataFormat {}**)arg3;

- (bool)addActiveParticipant:(unsigned long long)arg1 participantUUID:(id)arg2 withConfiguration:(struct { int x1; struct tagVCSecurityKeyHolder {} *x2; struct tagVCSecurityKeyHolder {} *x3; struct __CFData {} *x4; struct __CFData {} *x5; bool x6; }*)arg3;
- (void)addNewKeyMaterial:(id)arg1;
- (void)addToReceivedStats:(int)arg1;
- (void)addToSentStats:(int)arg1;
- (id)copyDialogForParticipantID:(id)arg1;
- (void)dealloc;
- (bool)decryptWithMKI:(void*)arg1 data:(char *)arg2 size:(int)arg3 sequenceNumber:(unsigned short)arg4;
- (void)deregisterPeriodicTask;
- (id)dialogs;
- (bool)encryptData:(char *)arg1 size:(int)arg2 sequenceNumber:(unsigned short)arg3;
- (void)finalizeEncryption;
- (void)flushActiveMessages;
- (void)flushRealTimeReportingStats;
- (void)flushReportingStats;
- (int)getKeyDerivationCryptoSet:(struct { BOOL x1[65]; int x2; BOOL x3[65]; int x4; void *x5; }*)arg1 withKeyMaterial:(id)arg2 derivedSSRC:(unsigned int*)arg3;
- (id)initWithTransportSessionID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting { }*)arg2;
- (id)initWithTransportSessionID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting { }*)arg2 mode:(int)arg3;
- (void)initializeEncryption;
- (void)initializeSRTPInfo:(struct tagSRTPINFO { int x1; int x2; struct _opaque_pthread_mutex_t { long long x_3_1_1; BOOL x_3_1_2[56]; } x3; struct _opaque_pthread_cond_t { long long x_4_1_1; BOOL x_4_1_2[40]; } x4; unsigned int x5; unsigned int x6; unsigned short x7; unsigned short x8; unsigned int x9; unsigned int x10; unsigned long long x11; int x12; int x13; unsigned char x14[32]; unsigned char x15[14]; unsigned char x16[32]; unsigned char x17[14]; unsigned char x18[20]; struct _opaque_pthread_mutex_t { long long x_19_1_1; BOOL x_19_1_2[56]; } x19; void *x20; void *x21; unsigned int x22; unsigned int x23; struct os_unfair_lock_s { unsigned int x_24_1_1; } x24; struct tagSRTPCryptContext { struct _CCCryptor {} *x_25_1_1; } x25; struct tagSRTPTransformPolicy { int x_26_1_1; int x_26_1_2; int x_26_1_3; int x_26_1_4; int x_26_1_5; int x_26_1_6; int x_26_1_7; int x_26_1_8; } x26; unsigned int x27; bool x28; }*)arg1;
- (bool)isEncryptionEnabled;
- (bool)isParticipantActive:(unsigned long long)arg1;
- (bool)isRunning;
- (id)lastUsedMKIBytes;
- (void)messageReceived:(id)arg1 participantInfo:(struct tagVCIDSChannelDataFormat { unsigned short x1[12]; unsigned char x2; bool x3; unsigned short x4; unsigned char x5; bool x6; bool x7; unsigned long long x8; bool x9; bool x10; bool x11; unsigned short x12; struct { unsigned short x_13_1_1; unsigned short x_13_1_2; unsigned short x_13_1_3; unsigned short x_13_1_4; unsigned short x_13_1_5; } x13; bool x14; bool x15; bool x16; unsigned long long x17; bool x18; unsigned short x19; bool x20; bool x21; bool x22; bool x23; }*)arg2;
- (unsigned long long)nextTransactionID;
- (void)periodicTask:(void*)arg1;
- (void)processParticipantRemoval:(id)arg1;
- (int)protocolVersionforParticipantID:(id)arg1;
- (void)registerPeriodicTask;
- (id)remoteParticipantIDFromChannelDataFormat:(struct tagVCIDSChannelDataFormat { unsigned short x1[12]; unsigned char x2; bool x3; unsigned short x4; unsigned char x5; bool x6; bool x7; unsigned long long x8; bool x9; bool x10; bool x11; unsigned short x12; struct { unsigned short x_13_1_1; unsigned short x_13_1_2; unsigned short x_13_1_3; unsigned short x_13_1_4; unsigned short x_13_1_5; } x13; bool x14; bool x15; bool x16; unsigned long long x17; bool x18; unsigned short x19; bool x20; bool x21; bool x22; bool x23; }*)arg1;
- (void)removeActiveParticipant:(unsigned long long)arg1;
- (void)removeAllActiveParticipants;
- (void)reportSignificantHandshakeDelaySymptomForParticipantID:(id)arg1;
- (void)scheduleAfter:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)sendReliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;
- (bool)sendReliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3 timeout:(unsigned int)arg4 completion:(id /* block */)arg5;
- (bool)sendReliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3 timeout:(unsigned int)arg4 withOptions:(id)arg5 completion:(id /* block */)arg6;
- (bool)sendReliableMessageAndWait:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;
- (bool)sendReliableMessageAndWait:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3 timeout:(id)arg4 withOptions:(id)arg5;
- (void)sendUnreliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;
- (void)setCurrentSendMKIWithKeyMaterial:(id)arg1;
- (void)setEncryptionWithEncryptionMaterial:(struct { struct tagSRTPExchangeInfo { BOOL x_1_1_1[65]; BOOL x_1_1_2[29]; void *x_1_1_3; } x1; unsigned int x2; struct tagSRTPExchangeInfo { BOOL x_3_1_1[65]; BOOL x_3_1_2[29]; void *x_3_1_3; } x3; unsigned int x4; int x5; int x6; }*)arg1;
- (void)setTransportSessionID:(unsigned int)arg1;
- (void)setVfdCancel:(int)arg1;
- (void)setVfdMessage:(int)arg1;
- (void)start;
- (void)stop;
- (unsigned int)transportSessionID;
- (int)updateEncryption:(struct { BOOL x1[65]; int x2; BOOL x3[65]; int x4; void *x5; }*)arg1 derivedSSRC:(unsigned int)arg2;
- (void)updateEncryptionWithEncryptionMaterial:(struct { struct tagSRTPExchangeInfo { BOOL x_1_1_1[65]; BOOL x_1_1_2[29]; void *x_1_1_3; } x1; unsigned int x2; struct tagSRTPExchangeInfo { BOOL x_3_1_1[65]; BOOL x_3_1_2[29]; void *x_3_1_3; } x3; unsigned int x4; int x5; int x6; }*)arg1;
- (void)updateEncryptionWithKeyMaterial:(id)arg1;
- (void)updateTransactionIDWithKeyMaterial:(id)arg1;
- (int)vfdCancel;
- (int)vfdMessage;

@end

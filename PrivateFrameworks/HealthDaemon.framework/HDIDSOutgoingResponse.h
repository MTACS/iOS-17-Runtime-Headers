
@interface HDIDSOutgoingResponse : NSObject <HDNanoSyncDescription> {
    NSData * _data;
    bool  _doNotCompress;
    bool  _forceLocalDelivery;
    NSString * _idsIdentifier;
    HDIDSMessageCenter * _messageCenter;
    unsigned short  _messageID;
    PBCodable * _pbResponse;
    NSDictionary * _persistentUserInfo;
    unsigned long long  _priority;
    NSString * _requestIdsIdentifier;
    unsigned short  _requestMessageID;
    double  _sendTimeout;
    bool  _sent;
    HDIDSParticipant * _toParticipant;
    HDDaemonTransaction * _transaction;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool doNotCompress;
@property (nonatomic) bool forceLocalDelivery;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *idsIdentifier;
@property (nonatomic, readonly) HDIDSMessageCenter *messageCenter;
@property (nonatomic, readonly) unsigned short messageID;
@property (nonatomic, retain) PBCodable *pbResponse;
@property (nonatomic, retain) NSDictionary *persistentUserInfo;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, readonly, copy) NSString *requestIdsIdentifier;
@property (nonatomic, readonly) unsigned short requestMessageID;
@property (nonatomic) double sendTimeout;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDIDSParticipant *toParticipant;

- (void).cxx_destruct;
- (void)configureWithActivationRestore:(id)arg1 syncStore:(id)arg2 profile:(id)arg3;
- (void)configureWithStatus:(id)arg1 syncStore:(id)arg2 profile:(id)arg3;
- (id)data;
- (void)dealloc;
- (id)description;
- (bool)doNotCompress;
- (bool)forceLocalDelivery;
- (id)idsIdentifier;
- (id)init;
- (id)messageCenter;
- (unsigned short)messageID;
- (id)nanoSyncDescription;
- (id)pbResponse;
- (id)persistentUserInfo;
- (unsigned long long)priority;
- (id)requestIdsIdentifier;
- (unsigned short)requestMessageID;
- (void)send;
- (double)sendTimeout;
- (void)setData:(id)arg1;
- (void)setDoNotCompress:(bool)arg1;
- (void)setForceLocalDelivery:(bool)arg1;
- (void)setPbResponse:(id)arg1;
- (void)setPersistentUserInfo:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setSendTimeout:(double)arg1;
- (id)toParticipant;

@end

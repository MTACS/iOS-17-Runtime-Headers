
@interface HDIDSIncomingResponse : NSObject <HDNanoSyncDescription> {
    NSData * _data;
    HDIDSParticipant * _fromParticipant;
    NSString * _idsIdentifier;
    HDIDSMessageCenter * _messageCenter;
    unsigned short  _messageID;
    PBCodable * _pbResponse;
    NSString * _requestIDSIdentifier;
    NSDictionary * _requestPersistentUserInfo;
    NSDate * _requestSent;
}

@property (nonatomic, readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDIDSParticipant *fromParticipant;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *idsIdentifier;
@property (nonatomic, readonly) unsigned short messageID;
@property (nonatomic, readonly) PBCodable *pbResponse;
@property (nonatomic, readonly, copy) NSString *requestIDSIdentifier;
@property (nonatomic, readonly) NSDictionary *requestPersistentUserInfo;
@property (nonatomic, readonly) NSDate *requestSent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (id)fromParticipant;
- (id)idsIdentifier;
- (unsigned short)messageID;
- (id)nanoSyncDescription;
- (id)pbResponse;
- (id)requestIDSIdentifier;
- (id)requestPersistentUserInfo;
- (id)requestSent;

@end

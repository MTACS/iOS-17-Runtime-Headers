
@interface HDIDSIncomingRequest : NSObject <HDNanoSyncDescription> {
    NSData * _data;
    bool  _expectsResponse;
    HDIDSParticipant * _fromParticipant;
    NSString * _idsIdentifier;
    HDIDSMessageCenter * _messageCenter;
    unsigned short  _messageID;
    id  _pbRequest;
    unsigned long long  _priority;
    HDIDSOutgoingResponse * _response;
}

@property (nonatomic, readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool expectsResponse;
@property (nonatomic, readonly) HDIDSParticipant *fromParticipant;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *idsIdentifier;
@property (nonatomic, readonly) unsigned short messageID;
@property (nonatomic, readonly) PBCodable *pbRequest;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly) HDIDSOutgoingResponse *response;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)data;
- (void)dealloc;
- (id)description;
- (bool)expectsResponse;
- (id)fromParticipant;
- (id)idsIdentifier;
- (unsigned short)messageID;
- (id)nanoSyncDescription;
- (id)pbRequest;
- (unsigned long long)priority;
- (id)response;

@end

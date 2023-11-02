
@interface SIRINLUEXTERNALRequestID : PBCodable <NSCopying> {
    NSString * _connectionId;
    struct { 
        unsigned int requester : 1; 
    }  _has;
    NSString * _idA;
    NSString * _loggableUserId;
    SIRINLUEXTERNALUUID * _nluRequestId;
    int  _requester;
    NSString * _trpId;
    NSString * _userId;
}

@property (nonatomic, retain) NSString *connectionId;
@property (nonatomic, readonly) bool hasConnectionId;
@property (nonatomic, readonly) bool hasIdA;
@property (nonatomic, readonly) bool hasLoggableUserId;
@property (nonatomic, readonly) bool hasNluRequestId;
@property (nonatomic) bool hasRequester;
@property (nonatomic, readonly) bool hasTrpId;
@property (nonatomic, readonly) bool hasUserId;
@property (nonatomic, retain) NSString *idA;
@property (nonatomic, retain) NSString *loggableUserId;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *nluRequestId;
@property (nonatomic) int requester;
@property (nonatomic, retain) NSString *trpId;
@property (nonatomic, retain) NSString *userId;

- (void).cxx_destruct;
- (int)StringAsRequester:(id)arg1;
- (id)connectionId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConnectionId;
- (bool)hasIdA;
- (bool)hasLoggableUserId;
- (bool)hasNluRequestId;
- (bool)hasRequester;
- (bool)hasTrpId;
- (bool)hasUserId;
- (unsigned long long)hash;
- (id)idA;
- (bool)isEqual:(id)arg1;
- (id)loggableUserId;
- (void)mergeFrom:(id)arg1;
- (id)nluRequestId;
- (bool)readFrom:(id)arg1;
- (int)requester;
- (id)requesterAsString:(int)arg1;
- (void)setConnectionId:(id)arg1;
- (void)setHasRequester:(bool)arg1;
- (void)setIdA:(id)arg1;
- (void)setLoggableUserId:(id)arg1;
- (void)setNluRequestId:(id)arg1;
- (void)setRequester:(int)arg1;
- (void)setTrpId:(id)arg1;
- (void)setUserId:(id)arg1;
- (id)trpId;
- (id)userId;
- (void)writeTo:(id)arg1;

@end

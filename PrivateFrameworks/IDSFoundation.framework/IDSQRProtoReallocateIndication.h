
@interface IDSQRProtoReallocateIndication : PBCodable <NSCopying> {
    NSString * _clientAddress;
    struct { 
        unsigned int txnId : 1; 
    }  _has;
    NSData * _reallocateToken;
    NSString * _serverAddress;
    NSData * _serverBlob;
    NSData * _sessionId;
    unsigned long long  _txnId;
}

@property (nonatomic, retain) NSString *clientAddress;
@property (nonatomic, readonly) bool hasServerBlob;
@property (nonatomic) bool hasTxnId;
@property (nonatomic, retain) NSData *reallocateToken;
@property (nonatomic, retain) NSString *serverAddress;
@property (nonatomic, retain) NSData *serverBlob;
@property (nonatomic, retain) NSData *sessionId;
@property (nonatomic) unsigned long long txnId;

- (void).cxx_destruct;
- (id)clientAddress;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasServerBlob;
- (bool)hasTxnId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reallocateToken;
- (id)serverAddress;
- (id)serverBlob;
- (id)sessionId;
- (void)setClientAddress:(id)arg1;
- (void)setHasTxnId:(bool)arg1;
- (void)setReallocateToken:(id)arg1;
- (void)setServerAddress:(id)arg1;
- (void)setServerBlob:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTxnId:(unsigned long long)arg1;
- (unsigned long long)txnId;
- (void)writeTo:(id)arg1;

@end

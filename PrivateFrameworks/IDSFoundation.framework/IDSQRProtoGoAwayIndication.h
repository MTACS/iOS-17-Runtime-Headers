
@interface IDSQRProtoGoAwayIndication : PBCodable <NSCopying> {
    struct { 
        unsigned int txnId : 1; 
    }  _has;
    unsigned int  _reasonCode;
    NSString * _reasonString;
    NSData * _serverBlob;
    unsigned long long  _txnId;
}

@property (nonatomic, readonly) bool hasReasonString;
@property (nonatomic, readonly) bool hasServerBlob;
@property (nonatomic) bool hasTxnId;
@property (nonatomic) unsigned int reasonCode;
@property (nonatomic, retain) NSString *reasonString;
@property (nonatomic, retain) NSData *serverBlob;
@property (nonatomic) unsigned long long txnId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReasonString;
- (bool)hasServerBlob;
- (bool)hasTxnId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)reasonCode;
- (id)reasonString;
- (id)serverBlob;
- (void)setHasTxnId:(bool)arg1;
- (void)setReasonCode:(unsigned int)arg1;
- (void)setReasonString:(id)arg1;
- (void)setServerBlob:(id)arg1;
- (void)setTxnId:(unsigned long long)arg1;
- (unsigned long long)txnId;
- (void)writeTo:(id)arg1;

@end

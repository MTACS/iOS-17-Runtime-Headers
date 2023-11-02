
@interface IDSQRProtoErrorIndication : PBCodable <NSCopying> {
    unsigned int  _channelId;
    NSString * _clientAddress;
    unsigned int  _errorCode;
    NSString * _errorReason;
    struct { 
        unsigned int txnId : 1; 
        unsigned int channelId : 1; 
        unsigned int errorCode : 1; 
    }  _has;
    unsigned long long  _txnId;
}

@property (nonatomic) unsigned int channelId;
@property (nonatomic, retain) NSString *clientAddress;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic, retain) NSString *errorReason;
@property (nonatomic) bool hasChannelId;
@property (nonatomic, readonly) bool hasClientAddress;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorReason;
@property (nonatomic) bool hasTxnId;
@property (nonatomic) unsigned long long txnId;

- (void).cxx_destruct;
- (unsigned int)channelId;
- (id)clientAddress;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (id)errorReason;
- (bool)hasChannelId;
- (bool)hasClientAddress;
- (bool)hasErrorCode;
- (bool)hasErrorReason;
- (bool)hasTxnId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChannelId:(unsigned int)arg1;
- (void)setClientAddress:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setErrorReason:(id)arg1;
- (void)setHasChannelId:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasTxnId:(bool)arg1;
- (void)setTxnId:(unsigned long long)arg1;
- (unsigned long long)txnId;
- (void)writeTo:(id)arg1;

@end

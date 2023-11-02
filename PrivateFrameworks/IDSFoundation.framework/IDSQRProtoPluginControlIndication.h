
@interface IDSQRProtoPluginControlIndication : PBCodable <NSCopying> {
    struct { 
        unsigned int txnId : 1; 
    }  _has;
    unsigned int  _pluginOperation;
    unsigned long long  _pluginParticipantId;
    unsigned long long  _txnId;
}

@property (nonatomic) bool hasTxnId;
@property (nonatomic) unsigned int pluginOperation;
@property (nonatomic) unsigned long long pluginParticipantId;
@property (nonatomic) unsigned long long txnId;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTxnId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)pluginOperation;
- (unsigned long long)pluginParticipantId;
- (bool)readFrom:(id)arg1;
- (void)setHasTxnId:(bool)arg1;
- (void)setPluginOperation:(unsigned int)arg1;
- (void)setPluginParticipantId:(unsigned long long)arg1;
- (void)setTxnId:(unsigned long long)arg1;
- (unsigned long long)txnId;
- (void)writeTo:(id)arg1;

@end

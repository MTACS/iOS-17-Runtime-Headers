
@interface IDSQRProtoDiagnosticIndication : PBCodable <NSCopying> {
    NSString * _failureSubtype;
    NSString * _failureSubtypeContext;
    struct { 
        unsigned int txnId : 1; 
        unsigned int packetsRecordDuration : 1; 
    }  _has;
    unsigned int  _packetsRecordDuration;
    unsigned long long  _txnId;
}

@property (nonatomic, retain) NSString *failureSubtype;
@property (nonatomic, retain) NSString *failureSubtypeContext;
@property (nonatomic) bool hasPacketsRecordDuration;
@property (nonatomic) bool hasTxnId;
@property (nonatomic) unsigned int packetsRecordDuration;
@property (nonatomic) unsigned long long txnId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)failureSubtype;
- (id)failureSubtypeContext;
- (bool)hasPacketsRecordDuration;
- (bool)hasTxnId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)packetsRecordDuration;
- (bool)readFrom:(id)arg1;
- (void)setFailureSubtype:(id)arg1;
- (void)setFailureSubtypeContext:(id)arg1;
- (void)setHasPacketsRecordDuration:(bool)arg1;
- (void)setHasTxnId:(bool)arg1;
- (void)setPacketsRecordDuration:(unsigned int)arg1;
- (void)setTxnId:(unsigned long long)arg1;
- (unsigned long long)txnId;
- (void)writeTo:(id)arg1;

@end

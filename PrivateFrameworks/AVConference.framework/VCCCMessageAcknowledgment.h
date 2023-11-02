
@interface VCCCMessageAcknowledgment : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    }  _has;
    unsigned int  _status;
    unsigned long long  _transactionID;
}

@property (nonatomic) bool hasStatus;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned long long transactionID;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setTransactionID:(unsigned long long)arg1;
- (unsigned int)status;
- (unsigned long long)transactionID;
- (void)writeTo:(id)arg1;

@end


@interface EDPBMessageDataIDOnly : PBCodable <NSCopying> {
    struct { 
        unsigned int messageId : 1; 
    }  _has;
    long long  _messageId;
}

@property (nonatomic) bool hasMessageId;
@property (nonatomic) long long messageId;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessageId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)messageId;
- (bool)readFrom:(id)arg1;
- (void)setHasMessageId:(bool)arg1;
- (void)setMessageId:(long long)arg1;
- (void)writeTo:(id)arg1;

@end

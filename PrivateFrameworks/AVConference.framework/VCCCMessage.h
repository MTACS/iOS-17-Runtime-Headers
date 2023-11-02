
@interface VCCCMessage : PBCodable <NSCopying> {
    NSData * _payload;
    NSString * _topic;
    unsigned long long  _transactionID;
}

@property (nonatomic, readonly) bool hasPayload;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic, retain) NSString *topic;
@property (nonatomic) unsigned long long transactionID;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPayload;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)payload;
- (bool)readFrom:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setTransactionID:(unsigned long long)arg1;
- (id)topic;
- (unsigned long long)transactionID;
- (void)writeTo:(id)arg1;

@end

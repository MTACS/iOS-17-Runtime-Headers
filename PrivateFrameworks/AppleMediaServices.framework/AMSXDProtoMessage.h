
@interface AMSXDProtoMessage : PBCodable <NSCopying> {
    NSString * _logKey;
    NSData * _messageData;
}

@property (nonatomic, readonly) bool hasLogKey;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, retain) NSData *messageData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLogKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)logKey;
- (void)mergeFrom:(id)arg1;
- (id)messageData;
- (bool)readFrom:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setMessageData:(id)arg1;
- (void)writeTo:(id)arg1;

@end

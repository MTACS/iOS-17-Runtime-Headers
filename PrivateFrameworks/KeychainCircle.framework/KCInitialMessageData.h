
@interface KCInitialMessageData : PBCodable <NSCopying> {
    NSData * _prepareMessage;
}

@property (nonatomic, readonly) bool hasPrepareMessage;
@property (nonatomic, retain) NSData *prepareMessage;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPrepareMessage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)prepareMessage;
- (bool)readFrom:(id)arg1;
- (void)setPrepareMessage:(id)arg1;
- (void)writeTo:(id)arg1;

@end

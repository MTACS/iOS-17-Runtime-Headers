
@interface BMPBDKEvent : PBCodable <NSCopying> {
    NSData * _dkEvent;
}

@property (nonatomic, retain) NSData *dkEvent;
@property (nonatomic, readonly) bool hasDkEvent;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dkEvent;
- (bool)hasDkEvent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDkEvent:(id)arg1;
- (void)writeTo:(id)arg1;

@end

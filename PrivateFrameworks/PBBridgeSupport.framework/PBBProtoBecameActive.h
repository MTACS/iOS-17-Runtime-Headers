
@interface PBBProtoBecameActive : PBCodable <NSCopying> {
    bool  _wantsConfirmation;
}

@property (nonatomic) bool wantsConfirmation;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setWantsConfirmation:(bool)arg1;
- (bool)wantsConfirmation;
- (void)writeTo:(id)arg1;

@end

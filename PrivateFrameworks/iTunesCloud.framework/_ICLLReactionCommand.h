
@interface _ICLLReactionCommand : PBCodable <NSCopying> {
    NSString * _itemId;
    NSString * _reaction;
    NSString * _reactionId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

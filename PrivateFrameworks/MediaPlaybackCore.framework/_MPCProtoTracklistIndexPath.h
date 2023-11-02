
@interface _MPCProtoTracklistIndexPath : PBCodable <NSCopying> {
    long long  _containerIndex;
    struct { 
        unsigned int containerIndex : 1; 
        unsigned int itemIndex : 1; 
    }  _has;
    long long  _itemIndex;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

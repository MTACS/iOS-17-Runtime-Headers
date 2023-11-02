
@interface _MPCProtoContainer : PBCodable <NSCopying> {
    int  _containerType;
    struct { 
        unsigned int containerType : 1; 
    }  _has;
    _MPCProtoContainerIdentifierSet * _identifierSet;
    NSMutableArray * _items;
    NSString * _playActivityFeatureName;
    NSString * _playActivityQueueGroupingID;
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

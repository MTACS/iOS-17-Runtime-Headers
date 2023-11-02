
@interface _MPCProtoRadioContentReferenceStoreContentReference : PBCodable <NSCopying> {
    struct { 
        unsigned int storeAdamID : 1; 
    }  _has;
    long long  _storeAdamID;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

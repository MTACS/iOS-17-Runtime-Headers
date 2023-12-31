
@interface AWDHomeKitCharacteristicEvent : PBCodable <NSCopying> {
    bool  _containsValue;
    struct { 
        unsigned int containsValue : 1; 
    }  _has;
}

@property (nonatomic) bool containsValue;
@property (nonatomic) bool hasContainsValue;

- (bool)containsValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainsValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContainsValue:(bool)arg1;
- (void)setHasContainsValue:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

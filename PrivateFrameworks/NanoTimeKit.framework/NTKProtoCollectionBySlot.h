
@interface NTKProtoCollectionBySlot : PBCodable <NSCopying> {
    NTKProtoPigmentCollection * _collection;
    NSString * _slot;
}

@property (nonatomic, retain) NTKProtoPigmentCollection *collection;
@property (nonatomic, readonly) bool hasCollection;
@property (nonatomic, readonly) bool hasSlot;
@property (nonatomic, retain) NSString *slot;

- (void).cxx_destruct;
- (id)collection;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCollection;
- (bool)hasSlot;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCollection:(id)arg1;
- (void)setSlot:(id)arg1;
- (id)slot;
- (void)writeTo:(id)arg1;

@end

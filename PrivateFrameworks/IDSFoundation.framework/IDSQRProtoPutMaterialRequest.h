
@interface IDSQRProtoPutMaterialRequest : PBRequest <NSCopying> {
    NSMutableArray * _materials;
}

@property (nonatomic, retain) NSMutableArray *materials;

+ (Class)materialsType;

- (void).cxx_destruct;
- (void)addMaterials:(id)arg1;
- (void)clearMaterials;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)materials;
- (id)materialsAtIndex:(unsigned long long)arg1;
- (unsigned long long)materialsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMaterials:(id)arg1;
- (void)writeTo:(id)arg1;

@end

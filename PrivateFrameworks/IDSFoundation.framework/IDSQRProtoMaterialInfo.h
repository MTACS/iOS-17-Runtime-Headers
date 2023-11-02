
@interface IDSQRProtoMaterialInfo : PBCodable <NSCopying> {
    NSData * _materialContent;
    NSData * _materialId;
    int  _materialType;
}

@property (nonatomic, retain) NSData *materialContent;
@property (nonatomic, retain) NSData *materialId;
@property (nonatomic) int materialType;

- (void).cxx_destruct;
- (int)StringAsMaterialType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)materialContent;
- (id)materialId;
- (int)materialType;
- (id)materialTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMaterialContent:(id)arg1;
- (void)setMaterialId:(id)arg1;
- (void)setMaterialType:(int)arg1;
- (void)writeTo:(id)arg1;

@end


@interface BLTPBSectionIcon : PBCodable <NSCopying> {
    NSMutableArray * _variants;
}

@property (nonatomic, retain) NSMutableArray *variants;

+ (Class)variantType;

- (void).cxx_destruct;
- (void)addVariant:(id)arg1;
- (void)clearVariants;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setVariants:(id)arg1;
- (id)variantAtIndex:(unsigned long long)arg1;
- (id)variants;
- (unsigned long long)variantsCount;
- (void)writeTo:(id)arg1;

@end

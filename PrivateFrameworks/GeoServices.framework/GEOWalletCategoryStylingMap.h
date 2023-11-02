
@interface GEOWalletCategoryStylingMap : PBCodable <NSCopying> {
    NSMutableArray * _mappings;
}

@property (nonatomic, retain) NSMutableArray *mappings;

+ (bool)isValid:(id)arg1;
+ (Class)mappingsType;

- (void).cxx_destruct;
- (void)addMappings:(id)arg1;
- (void)clearMappings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mappings;
- (id)mappingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mappingsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMappings:(id)arg1;
- (void)writeTo:(id)arg1;

@end

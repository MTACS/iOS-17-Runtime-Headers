
@interface GEOARInfo : PBCodable <NSCopying> {
    NSMutableArray * _storefrontFaceGeometrys;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *storefrontFaceGeometrys;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)storefrontFaceGeometryType;

- (void).cxx_destruct;
- (void)addStorefrontFaceGeometry:(id)arg1;
- (void)clearStorefrontFaceGeometrys;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setStorefrontFaceGeometrys:(id)arg1;
- (id)storefrontFaceGeometryAtIndex:(unsigned long long)arg1;
- (id)storefrontFaceGeometrys;
- (unsigned long long)storefrontFaceGeometrysCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

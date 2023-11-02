
@interface GEOVersionManifest : PBCodable <NSCopying> {
    NSMutableArray * _serviceVersions;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *serviceVersions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)serviceVersionType;

- (void).cxx_destruct;
- (void)addServiceVersion:(id)arg1;
- (void)clearServiceVersions;
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
- (id)serviceVersionAtIndex:(unsigned long long)arg1;
- (id)serviceVersions;
- (unsigned long long)serviceVersionsCount;
- (void)setServiceVersions:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

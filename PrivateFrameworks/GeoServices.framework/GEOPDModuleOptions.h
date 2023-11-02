
@interface GEOPDModuleOptions : PBCodable <NSCopying> {
    PBUnknownFields * _unknownFields;
    NSString * _webContentUrl;
}

@property (nonatomic, readonly) bool hasWebContentUrl;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *webContentUrl;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasWebContentUrl;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setWebContentUrl:(id)arg1;
- (id)unknownFields;
- (id)webContentUrl;
- (void)writeTo:(id)arg1;

@end

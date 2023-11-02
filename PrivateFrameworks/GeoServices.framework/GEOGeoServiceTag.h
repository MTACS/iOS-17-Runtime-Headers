
@interface GEOGeoServiceTag : PBCodable <NSCopying> {
    struct { 
        unsigned int has_serviceType : 1; 
    }  _flags;
    int  _serviceType;
    NSString * _tag;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasServiceType;
@property (nonatomic) int serviceType;
@property (nonatomic, retain) NSString *tag;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)defaultTag;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsServiceType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasServiceType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)serviceType;
- (id)serviceTypeAsString:(int)arg1;
- (void)setHasServiceType:(bool)arg1;
- (void)setServiceType:(int)arg1;
- (void)setTag:(id)arg1;
- (id)tag;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

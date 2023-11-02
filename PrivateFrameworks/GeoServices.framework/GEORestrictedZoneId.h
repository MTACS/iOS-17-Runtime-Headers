
@interface GEORestrictedZoneId : PBCodable <NSCopying> {
    GEOMapRegion * _boundingBox;
    struct { 
        unsigned int has_identifier : 1; 
        unsigned int has_type : 1; 
        unsigned int has_version : 1; 
    }  _flags;
    unsigned long long  _identifier;
    int  _type;
    PBUnknownFields * _unknownFields;
    unsigned int  _version;
}

@property (nonatomic, retain) GEOMapRegion *boundingBox;
@property (nonatomic, readonly) bool hasBoundingBox;
@property (nonatomic) bool hasIdentifier;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasVersion;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int version;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)boundingBox;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBoundingBox;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIdentifier;
- (bool)hasType;
- (bool)hasVersion;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBoundingBox:(id)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end

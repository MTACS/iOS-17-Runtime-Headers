
@interface GEOVLFEntryPoint : PBCodable <NSCopying> {
    int  _accessPoint;
    struct { 
        unsigned int has_accessPoint : 1; 
    }  _flags;
}

@property (nonatomic) int accessPoint;
@property (nonatomic) bool hasAccessPoint;

+ (bool)isValid:(id)arg1;

- (int)StringAsAccessPoint:(id)arg1;
- (int)accessPoint;
- (id)accessPointAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessPoint;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessPoint:(int)arg1;
- (void)setHasAccessPoint:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

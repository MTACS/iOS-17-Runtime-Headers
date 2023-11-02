
@interface GEOPDStorefrontFeature : PBCodable <NSCopying> {
    struct { 
        unsigned int has_type : 1; 
    }  _flags;
    GEOPDOrientedBoundingBox * _geometry;
    int  _type;
}

@property (nonatomic, retain) GEOPDOrientedBoundingBox *geometry;
@property (nonatomic, readonly) bool hasGeometry;
@property (nonatomic) bool hasType;
@property (nonatomic) int type;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geometry;
- (bool)hasGeometry;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

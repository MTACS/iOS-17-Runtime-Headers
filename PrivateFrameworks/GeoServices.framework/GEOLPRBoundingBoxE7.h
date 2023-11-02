
@interface GEOLPRBoundingBoxE7 : PBCodable <NSCopying> {
    int  _eastLngE7;
    struct { 
        unsigned int has_eastLngE7 : 1; 
        unsigned int has_northLatE7 : 1; 
        unsigned int has_southLatE7 : 1; 
        unsigned int has_westLngE7 : 1; 
    }  _flags;
    int  _northLatE7;
    int  _southLatE7;
    int  _westLngE7;
}

@property (nonatomic, readonly) struct { double x1; double x2; } center;
@property (nonatomic, readonly) int centerLatE7;
@property (nonatomic, readonly) int centerLngE7;
@property (nonatomic) int eastLngE7;
@property (nonatomic) bool hasEastLngE7;
@property (nonatomic) bool hasNorthLatE7;
@property (nonatomic) bool hasSouthLatE7;
@property (nonatomic) bool hasWestLngE7;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic) int northLatE7;
@property (nonatomic) int southLatE7;
@property (nonatomic) int westLngE7;

+ (bool)isValid:(id)arg1;

- (struct { double x1; double x2; })center;
- (int)centerLatE7;
- (int)centerLngE7;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)eastLngE7;
- (bool)hasEastLngE7;
- (bool)hasNorthLatE7;
- (bool)hasSouthLatE7;
- (bool)hasWestLngE7;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)jsonRepresentation;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (int)northLatE7;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEastLngE7:(int)arg1;
- (void)setHasEastLngE7:(bool)arg1;
- (void)setHasNorthLatE7:(bool)arg1;
- (void)setHasSouthLatE7:(bool)arg1;
- (void)setHasWestLngE7:(bool)arg1;
- (void)setNorthLatE7:(int)arg1;
- (void)setSouthLatE7:(int)arg1;
- (void)setWestLngE7:(int)arg1;
- (int)southLatE7;
- (int)westLngE7;
- (void)writeTo:(id)arg1;

@end

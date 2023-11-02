
@interface GEOLogMsgEventDirectionsRequestDetails : PBCodable <NSCopying> {
    int  _destination;
    struct { 
        unsigned int has_destination : 1; 
        unsigned int has_origin : 1; 
        unsigned int has_purpose : 1; 
        unsigned int has_navStarted : 1; 
    }  _flags;
    bool  _navStarted;
    int  _origin;
    int  _purpose;
}

@property (nonatomic) int destination;
@property (nonatomic) bool hasDestination;
@property (nonatomic) bool hasNavStarted;
@property (nonatomic) bool hasOrigin;
@property (nonatomic) bool hasPurpose;
@property (nonatomic) bool navStarted;
@property (nonatomic) int origin;
@property (nonatomic) int purpose;

+ (bool)isValid:(id)arg1;

- (int)StringAsDestination:(id)arg1;
- (int)StringAsOrigin:(id)arg1;
- (int)StringAsPurpose:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)destination;
- (id)destinationAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasDestination;
- (bool)hasNavStarted;
- (bool)hasOrigin;
- (bool)hasPurpose;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (bool)navStarted;
- (int)origin;
- (id)originAsString:(int)arg1;
- (int)purpose;
- (id)purposeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDestination:(int)arg1;
- (void)setHasDestination:(bool)arg1;
- (void)setHasNavStarted:(bool)arg1;
- (void)setHasOrigin:(bool)arg1;
- (void)setHasPurpose:(bool)arg1;
- (void)setNavStarted:(bool)arg1;
- (void)setOrigin:(int)arg1;
- (void)setPurpose:(int)arg1;
- (void)writeTo:(id)arg1;

@end

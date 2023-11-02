
@interface GEOPDOrientedTilePosition : PBCodable <NSCopying> {
    int  _altitude;
    struct { 
        unsigned int has_altitude : 1; 
        unsigned int has_pitch : 1; 
        unsigned int has_roll : 1; 
        unsigned int has_x : 1; 
        unsigned int has_yaw : 1; 
        unsigned int has_y : 1; 
    }  _flags;
    unsigned int  _pitch;
    unsigned int  _roll;
    unsigned int  _x;
    unsigned int  _y;
    unsigned int  _yaw;
}

@property (nonatomic) int altitude;
@property (nonatomic) bool hasAltitude;
@property (nonatomic) bool hasPitch;
@property (nonatomic) bool hasRoll;
@property (nonatomic) bool hasX;
@property (nonatomic) bool hasY;
@property (nonatomic) bool hasYaw;
@property (nonatomic) unsigned int pitch;
@property (nonatomic) unsigned int roll;
@property (nonatomic) unsigned int x;
@property (nonatomic) unsigned int y;
@property (nonatomic) unsigned int yaw;

+ (bool)isValid:(id)arg1;

- (int)altitude;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAltitude;
- (bool)hasPitch;
- (bool)hasRoll;
- (bool)hasX;
- (bool)hasY;
- (bool)hasYaw;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)pitch;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)roll;
- (void)setAltitude:(int)arg1;
- (void)setHasAltitude:(bool)arg1;
- (void)setHasPitch:(bool)arg1;
- (void)setHasRoll:(bool)arg1;
- (void)setHasX:(bool)arg1;
- (void)setHasY:(bool)arg1;
- (void)setHasYaw:(bool)arg1;
- (void)setPitch:(unsigned int)arg1;
- (void)setRoll:(unsigned int)arg1;
- (void)setX:(unsigned int)arg1;
- (void)setY:(unsigned int)arg1;
- (void)setYaw:(unsigned int)arg1;
- (void)writeTo:(id)arg1;
- (unsigned int)x;
- (unsigned int)y;
- (unsigned int)yaw;

@end

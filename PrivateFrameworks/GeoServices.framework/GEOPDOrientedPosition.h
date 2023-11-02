
@interface GEOPDOrientedPosition : PBCodable <NSCopying> {
    struct { 
        unsigned int has_pitch : 1; 
        unsigned int has_roll : 1; 
        unsigned int has_x : 1; 
        unsigned int has_yaw : 1; 
        unsigned int has_y : 1; 
        unsigned int has_z : 1; 
    }  _flags;
    double  _pitch;
    double  _roll;
    double  _x;
    double  _y;
    double  _yaw;
    double  _z;
}

@property (nonatomic) bool hasPitch;
@property (nonatomic) bool hasRoll;
@property (nonatomic) bool hasX;
@property (nonatomic) bool hasY;
@property (nonatomic) bool hasYaw;
@property (nonatomic) bool hasZ;
@property (nonatomic) double pitch;
@property (nonatomic) double roll;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double yaw;
@property (nonatomic) double z;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPitch;
- (bool)hasRoll;
- (bool)hasX;
- (bool)hasY;
- (bool)hasYaw;
- (bool)hasZ;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (double)pitch;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (double)roll;
- (void)setHasPitch:(bool)arg1;
- (void)setHasRoll:(bool)arg1;
- (void)setHasX:(bool)arg1;
- (void)setHasY:(bool)arg1;
- (void)setHasYaw:(bool)arg1;
- (void)setHasZ:(bool)arg1;
- (void)setPitch:(double)arg1;
- (void)setRoll:(double)arg1;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (void)setYaw:(double)arg1;
- (void)setZ:(double)arg1;
- (void)writeTo:(id)arg1;
- (double)x;
- (double)y;
- (double)yaw;
- (double)z;

@end

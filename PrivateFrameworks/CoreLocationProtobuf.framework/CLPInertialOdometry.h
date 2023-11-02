
@interface CLPInertialOdometry : PBCodable <NSCopying> {
    double  _deltaPositionX;
    double  _deltaPositionY;
    double  _deltaPositionZ;
    double  _deltaVelocityX;
    double  _deltaVelocityY;
    double  _deltaVelocityZ;
    struct { 
        unsigned int deltaPositionX : 1; 
        unsigned int deltaPositionY : 1; 
        unsigned int deltaPositionZ : 1; 
        unsigned int deltaVelocityX : 1; 
        unsigned int deltaVelocityY : 1; 
        unsigned int deltaVelocityZ : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    double  _timestamp;
}

@property (nonatomic) double deltaPositionX;
@property (nonatomic) double deltaPositionY;
@property (nonatomic) double deltaPositionZ;
@property (nonatomic) double deltaVelocityX;
@property (nonatomic) double deltaVelocityY;
@property (nonatomic) double deltaVelocityZ;
@property (nonatomic) bool hasDeltaPositionX;
@property (nonatomic) bool hasDeltaPositionY;
@property (nonatomic) bool hasDeltaPositionZ;
@property (nonatomic) bool hasDeltaVelocityX;
@property (nonatomic) bool hasDeltaVelocityY;
@property (nonatomic) bool hasDeltaVelocityZ;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) double timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)deltaPositionX;
- (double)deltaPositionY;
- (double)deltaPositionZ;
- (double)deltaVelocityX;
- (double)deltaVelocityY;
- (double)deltaVelocityZ;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeltaPositionX;
- (bool)hasDeltaPositionY;
- (bool)hasDeltaPositionZ;
- (bool)hasDeltaVelocityX;
- (bool)hasDeltaVelocityY;
- (bool)hasDeltaVelocityZ;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeltaPositionX:(double)arg1;
- (void)setDeltaPositionY:(double)arg1;
- (void)setDeltaPositionZ:(double)arg1;
- (void)setDeltaVelocityX:(double)arg1;
- (void)setDeltaVelocityY:(double)arg1;
- (void)setDeltaVelocityZ:(double)arg1;
- (void)setHasDeltaPositionX:(bool)arg1;
- (void)setHasDeltaPositionY:(bool)arg1;
- (void)setHasDeltaPositionZ:(bool)arg1;
- (void)setHasDeltaVelocityX:(bool)arg1;
- (void)setHasDeltaVelocityY:(bool)arg1;
- (void)setHasDeltaVelocityZ:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end

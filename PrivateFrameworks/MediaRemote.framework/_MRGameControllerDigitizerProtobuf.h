
@interface _MRGameControllerDigitizerProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int x : 1; 
        unsigned int y : 1; 
        unsigned int touchDown : 1; 
    }  _has;
    unsigned long long  _timestamp;
    bool  _touchDown;
    double  _x;
    double  _y;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTouchDown;
@property (nonatomic) bool hasX;
@property (nonatomic) bool hasY;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool touchDown;
@property (nonatomic) double x;
@property (nonatomic) double y;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (bool)hasTouchDown;
- (bool)hasX;
- (bool)hasY;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTouchDown:(bool)arg1;
- (void)setHasX:(bool)arg1;
- (void)setHasY:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTouchDown:(bool)arg1;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (unsigned long long)timestamp;
- (bool)touchDown;
- (void)writeTo:(id)arg1;
- (double)x;
- (double)y;

@end

@interface RS3DCurvedSurface : RS3DSurface <NSCopying, NSSecureCoding> {
    float  _ceilingHeight;
    void _circleCenter;
    float  _endOrientation;
    float  _floorHeight;
    float  _radius;
    float  _startOrientation;
}

@property (nonatomic, readonly) void circleCenter;
@property (nonatomic, readonly) float endOrientation;
@property (nonatomic, readonly) float radius;
@property (nonatomic, readonly) float startOrientation;

+ (bool)supportsSecureCoding;

- (void)circleCenter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (float)endOrientation;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 WithGroupId:(unsigned int)arg2;
- (float)radius;
- (void)rotateAlongZAxisRightHand:(float)arg1;
- (float)startOrientation;
- (void)translateBy;

@end

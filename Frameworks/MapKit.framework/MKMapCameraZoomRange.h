
@interface MKMapCameraZoomRange : NSObject <NSCopying, NSSecureCoding> {
    bool  _bouncesZoom;
    double  _maxCenterCoordinateDistance;
    double  _minCenterCoordinateDistance;
}

@property (getter=_bouncesZoom, setter=_setBouncesZoom:, nonatomic) bool bouncesZoom;
@property (nonatomic, readonly) double maxCenterCoordinateDistance;
@property (nonatomic, readonly) double minCenterCoordinateDistance;

+ (bool)supportsSecureCoding;

- (bool)_bouncesZoom;
- (void)_setBouncesZoom:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaxCenterCoordinateDistance:(double)arg1;
- (id)initWithMinCenterCoordinateDistance:(double)arg1;
- (id)initWithMinCenterCoordinateDistance:(double)arg1 maxCenterCoordinateDistance:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMapCameraZoomRange:(id)arg1;
- (double)maxCenterCoordinateDistance;
- (double)minCenterCoordinateDistance;

@end

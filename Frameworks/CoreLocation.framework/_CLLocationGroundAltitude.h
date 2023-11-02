
@interface _CLLocationGroundAltitude : NSObject <NSCopying, NSSecureCoding> {
    double  _altitudeWgs84;
    double  _estimate;
    bool  _isAltitudeWgs84Available;
    double  _uncertainty;
    double  _uncertaintyWgs84;
    double  _undulation;
    int  _undulationModel;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) double altitudeWgs84;
@property (nonatomic, readonly) double estimate;
@property (nonatomic, readonly) bool isAltitudeWgs84Available;
@property (nonatomic, readonly) double uncertainty;
@property (nonatomic, readonly) double uncertaintyWgs84;
@property (nonatomic, readonly) double undulation;
@property (nonatomic, readonly) int undulationModel;

+ (bool)supportsSecureCoding;

- (double)altitude;
- (double)altitudeWgs84;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)estimate;
- (id)initWithCoder:(id)arg1;
- (id)initWithEstimate:(double)arg1 uncertainty:(double)arg2;
- (id)initWithEstimate:(double)arg1 uncertainty:(double)arg2 undulation:(double)arg3 undulationModel:(int)arg4;
- (bool)isAltitudeWgs84Available;
- (double)uncertainty;
- (double)uncertaintyWgs84;
- (double)undulation;
- (int)undulationModel;

@end

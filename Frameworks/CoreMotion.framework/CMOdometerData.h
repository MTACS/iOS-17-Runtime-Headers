
@interface CMOdometerData : NSObject <HDCoreMotionDatum, NSCopying, NSSecureCoding, SRSampling> {
    NSNumber * _accuracy;
    NSNumber * _averageSpeed;
    NSNumber * _currentSpeed;
    NSNumber * _deltaGroundAltitude;
    NSNumber * _distance;
    NSDate * _endDate;
    NSNumber * _gpsAltitude;
    NSNumber * _gpsCourseAccuracy;
    NSNumber * _gpsCourseRadians;
    NSNumber * _gpsSpeedAccuracy;
    NSNumber * _groundAltitude;
    NSNumber * _groundAltitudeUncertainty;
    NSNumber * _maxAbsSlope;
    NSNumber * _odometer;
    long long  _originDevice;
    NSNumber * _rawSpeed;
    NSNumber * _slope;
    NSNumber * _smoothedGPSAltitude;
    NSNumber * _smoothedGPSAltitudeUncertainty;
    NSDate * _startDate;
    NSNumber * _timestampGps;
}

@property (nonatomic, retain) NSNumber *accuracy;
@property (nonatomic, retain) NSNumber *averageSpeed;
@property (nonatomic, retain) NSNumber *currentSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double deltaAltitude;
@property (nonatomic, readonly) double deltaDistance;
@property (nonatomic, readonly) double deltaDistanceAccuracy;
@property (nonatomic, retain) NSNumber *deltaGroundAltitude;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *distance;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, retain) NSNumber *gpsAltitude;
@property (nonatomic, retain) NSNumber *gpsCourseAccuracy;
@property (nonatomic, retain) NSNumber *gpsCourseRadians;
@property (nonatomic, readonly) NSDate *gpsDate;
@property (nonatomic, retain) NSNumber *gpsSpeedAccuracy;
@property (nonatomic, retain) NSNumber *groundAltitude;
@property (nonatomic, retain) NSNumber *groundAltitudeUncertainty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *maxAbsSlope;
@property (nonatomic, retain) NSNumber *odometer;
@property (nonatomic, readonly) long long originDevice;
@property (nonatomic, retain) NSNumber *rawSpeed;
@property (nonatomic, readonly) NSNumber *slope;
@property (nonatomic, retain) NSNumber *smoothedGPSAltitude;
@property (nonatomic, retain) NSNumber *smoothedGPSAltitudeUncertainty;
@property (nonatomic, readonly) double speed;
@property (nonatomic, readonly) double speedAccuracy;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *timestampGps;
@property (nonatomic, readonly) double verticalAccuracy;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

+ (bool)supportsSecureCoding;

- (id)accuracy;
- (id)averageSpeed;
- (id)binarySampleRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentSpeed;
- (void)dealloc;
- (double)deltaAltitude;
- (double)deltaDistance;
- (double)deltaDistanceAccuracy;
- (id)deltaGroundAltitude;
- (id)description;
- (id)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)gpsAltitude;
- (id)gpsCourseAccuracy;
- (id)gpsCourseRadians;
- (id)gpsDate;
- (id)gpsSpeedAccuracy;
- (id)groundAltitude;
- (id)groundAltitudeUncertainty;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeltaDistance:(double)arg1 startDate:(id)arg2 endDate:(id)arg3 accuracy:(id)arg4 rawSpeed:(id)arg5 gpsSpeedAccuracy:(id)arg6 timestampGps:(id)arg7 deltaGroundAltitude:(id)arg8 groundAltitudeUncertainty:(id)arg9 originDevice:(long long)arg10 slope:(id)arg11 maxAbsSlope:(id)arg12;
- (id)initWithDistance:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 currentSpeed:(id)arg4 averageSpeed:(id)arg5;
- (id)maxAbsSlope;
- (id)odometer;
- (long long)originDevice;
- (id)rawSpeed;
- (id)relativeTimestampGps;
- (void)setAccuracy:(id)arg1;
- (void)setAverageSpeed:(id)arg1;
- (void)setCurrentSpeed:(id)arg1;
- (void)setDeltaGroundAltitude:(id)arg1;
- (void)setDistance:(id)arg1;
- (void)setGpsAltitude:(id)arg1;
- (void)setGpsCourseAccuracy:(id)arg1;
- (void)setGpsCourseRadians:(id)arg1;
- (void)setGpsSpeedAccuracy:(id)arg1;
- (void)setGroundAltitude:(id)arg1;
- (void)setGroundAltitudeUncertainty:(id)arg1;
- (void)setOdometer:(id)arg1;
- (void)setRawSpeed:(id)arg1;
- (void)setSmoothedGPSAltitude:(id)arg1;
- (void)setSmoothedGPSAltitudeUncertainty:(id)arg1;
- (void)setTimestampGps:(id)arg1;
- (id)slope;
- (id)smoothedGPSAltitude;
- (id)smoothedGPSAltitudeUncertainty;
- (double)speed;
- (double)speedAccuracy;
- (id)startDate;
- (id)timestampGps;
- (void)updateStartDate:(id)arg1;
- (double)verticalAccuracy;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (long long)hd_compare:(id)arg1;
- (id)hd_datestamp;
- (id)hd_epochDatestamp;
- (id)hd_sourceID;
- (id)hd_unitForType:(id)arg1;

@end

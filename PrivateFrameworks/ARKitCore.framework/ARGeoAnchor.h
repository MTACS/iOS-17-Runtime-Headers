
@interface ARGeoAnchor : ARAnchor <ARDaemonSecureCoding, ARTrackable> {
    long long  _altitudeSource;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _ecefFromAnchor;
    bool  _isAltitudeAvailable;
    bool  _isAltitudeLookupInProgress;
    bool  _isTracked;
    void _locationECEF;
    void _locationLLA;
    double  _undulation;
}

@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) long long altitudeSource;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } ecefFromAnchor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAltitudeAvailable;
@property (nonatomic) bool isAltitudeLookupInProgress;
@property (nonatomic) bool isTracked;
@property (nonatomic, readonly) void locationECEF;
@property (nonatomic, readonly) void locationLLA;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double undulation;

+ (bool)supportsSecureCoding;

- (double)altitude;
- (long long)altitudeSource;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)description;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })ecefFromAnchor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 altitude:(double)arg2;
- (void)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 altitude:(double)arg2 altitudeSource:(long long)arg3 isAltitudeAvailable:(bool)arg4 undulation:(double)arg5;
- (id)initWithName:(id)arg1 coordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (id)initWithName:(id)arg1 coordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 altitude:(double)arg3;
- (bool)isAltitudeAvailable;
- (bool)isAltitudeLookupInProgress;
- (bool)isTracked;
- (void)locationECEF;
- (void)locationLLA;
- (void)setIsAltitudeLookupInProgress:(bool)arg1;
- (void)setIsTracked:(bool)arg1;
- (double)undulation;

@end

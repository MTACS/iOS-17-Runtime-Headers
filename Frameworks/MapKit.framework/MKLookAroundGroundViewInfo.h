
@interface MKLookAroundGroundViewInfo : NSObject {
    double  _endHeading;
    GEOLocationInfo * _locationInfo;
    double  _startHeading;
}

@property (nonatomic, readonly) double endHeading;
@property (nonatomic, readonly) GEOLocationInfo *locationInfo;
@property (nonatomic, readonly) double startHeading;

- (void).cxx_destruct;
- (double)endHeading;
- (id)initWithStartHeading:(double)arg1 endHeading:(double)arg2 localityName:(id)arg3 locationName:(id)arg4 secondaryLocationName:(id)arg5;
- (bool)isHeadingInRange:(double)arg1;
- (id)locationInfo;
- (double)startHeading;

@end

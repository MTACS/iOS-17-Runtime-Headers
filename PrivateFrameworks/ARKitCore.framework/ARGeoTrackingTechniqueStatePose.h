
@interface ARGeoTrackingTechniqueStatePose : NSObject {
    bool  _fused;
    double  _heading;
    double  _timestamp;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
}

@property (nonatomic, readonly) bool fused;
@property (nonatomic, readonly) double heading;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;

- (bool)fused;
- (double)heading;
- (id)initWithTimestamp:(double)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 fused:(bool)arg3 heading:(double)arg4;
- (double)timestamp;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;

@end

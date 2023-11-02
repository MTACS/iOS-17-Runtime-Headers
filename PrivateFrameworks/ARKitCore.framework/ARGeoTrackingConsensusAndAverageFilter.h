
@interface ARGeoTrackingConsensusAndAverageFilter : NSObject {
    void * _impl;
}

- (void)dealloc;
- (bool)getCurrentENUFromVIO:(double)arg1 ENUFromVIO:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg2;
- (id)initWithENUFromECEF:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 maxHistory:(int)arg2 minInlierScore:(double)arg3;
- (double)score;
- (void)updateWithVIOPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 VLPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;

@end

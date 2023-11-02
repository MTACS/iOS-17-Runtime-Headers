
@interface VNVideoProcessorTimeIntervalCadence : VNVideoProcessorCadence {
    double  _timeInterval;
}

@property (readonly) double timeInterval;

- (unsigned long long)hash;
- (id)initWithTimeInterval:(double)arg1;
- (bool)isEqual:(id)arg1;
- (void)populateVCPVideoProcessorRequestConfiguration:(id)arg1;
- (double)timeInterval;

@end


@interface AVPlayerItemSampleBufferOutputConfiguration : NSObject {
    double  _advanceIntervalForDataAvailability;
}

@property (nonatomic) double advanceIntervalForDataAvailability;

- (double)advanceIntervalForDataAvailability;
- (void)setAdvanceIntervalForDataAvailability:(double)arg1;

@end


@protocol OFRescalableSegment <NSObject>

@required

- (double)compressibility;
- (double)defaultDuration;
- (double)expandability;
- (double)maximumDuration;
- (double)minimumDuration;
- (void)setCompressibility:(double)arg1;
- (void)setDefaultDuration:(double)arg1;
- (void)setExpandability:(double)arg1;
- (void)setMaximumDuration:(double)arg1;
- (void)setMinimumDuration:(double)arg1;

@end

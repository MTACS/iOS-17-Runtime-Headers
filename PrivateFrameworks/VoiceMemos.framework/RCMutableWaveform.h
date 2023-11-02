
@interface RCMutableWaveform : RCWaveform

@property (readonly) NSMutableArray *segments;

- (void)addSegment:(id)arg1;
- (void)addSegments:(id)arg1;
- (id)classForCoder;
- (bool)clipToTimeRange:(struct { double x1; double x2; })arg1;
- (void)removeAllSegments;
- (void)removeSegment:(id)arg1;
- (void)setSegments:(id)arg1;

@end

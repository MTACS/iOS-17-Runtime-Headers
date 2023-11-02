
@interface ASVRubberBandedSpinDeceleration : ASVDampingDeceleration {
    float  _currentOffset;
    float  _previousRubberBandedOffset;
    ASVRubberBand * _rubberBand;
}

@property (nonatomic) float currentOffset;
@property (nonatomic) float previousRubberBandedOffset;
@property (nonatomic, retain) ASVRubberBand *rubberBand;

- (void).cxx_destruct;
- (float)currentOffset;
- (float)decelerationDelta;
- (id)initWithVelocity:(float)arg1 minEndDelta:(float)arg2 startingOffset:(float)arg3 decelerationRate:(float)arg4 rubberBand:(id)arg5;
- (float)previousRubberBandedOffset;
- (id)rubberBand;
- (void)setCurrentOffset:(float)arg1;
- (void)setPreviousRubberBandedOffset:(float)arg1;
- (void)setRubberBand:(id)arg1;

@end

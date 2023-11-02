
@interface ASVRubberBand : NSObject {
    float  _maxOffset;
    float  _minOffset;
    float  _overshoot;
    float  _rubberBandFactor;
}

@property (nonatomic) float maxOffset;
@property (nonatomic) float minOffset;
@property (nonatomic) float overshoot;
@property (nonatomic) float rubberBandFactor;

- (id)initWithRubberBandFactor:(float)arg1 minOffset:(float)arg2 maxOffset:(float)arg3 overshoot:(float)arg4;
- (float)maxOffset;
- (float)minOffset;
- (float)offsetForRubberBandOffset:(float)arg1;
- (bool)offsetIsWithinRubberBandedRange:(float)arg1;
- (float)overshoot;
- (float)rubberBandFactor;
- (float)rubberBandOffsetForOffset:(float)arg1;
- (void)setMaxOffset:(float)arg1;
- (void)setMinOffset:(float)arg1;
- (void)setOvershoot:(float)arg1;
- (void)setRubberBandFactor:(float)arg1;

@end

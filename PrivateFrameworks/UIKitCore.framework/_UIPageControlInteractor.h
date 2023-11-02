
@interface _UIPageControlInteractor : NSObject {
    _UIHyperInteractor * _interactor;
    double  _lowerBound;
    double  _scrubbingOffset;
    double  _upperBound;
}

@property (nonatomic, readonly) double boundedScrubPosition;
@property (nonatomic, readonly) double hyperConstrainedPosition;
@property (nonatomic, retain) _UIHyperInteractor *interactor;
@property (nonatomic, readonly) double joggingDistance;
@property (nonatomic, readonly) double unboundedScrubPosition;
@property (nonatomic, readonly) double unconstrainedPosition;

- (void).cxx_destruct;
- (double)boundedScrubPosition;
- (void)commitTranslation;
- (double)hyperConstrainedPosition;
- (id)initWithMaximumDistance:(double)arg1;
- (id)interactor;
- (double)joggingDistance;
- (void)reduceScrubOffsetByOffset:(double)arg1;
- (void)reduceScrubOffsetByRatio:(double)arg1;
- (void)setInteractor:(id)arg1;
- (void)setTranslation:(double)arg1 velocity:(double)arg2;
- (void)setUnconstrainedPosition:(double)arg1 offset:(double)arg2;
- (double)unboundedScrubPosition;
- (double)unconstrainedPosition;
- (void)updateRubberbandLowerBound:(double)arg1 upperBound:(double)arg2;
- (void)updateScrubLowerBound:(double)arg1 upperBound:(double)arg2;

@end

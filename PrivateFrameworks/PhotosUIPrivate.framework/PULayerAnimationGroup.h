
@interface PULayerAnimationGroup : PUTimedAnimationGroup {
    bool  _areTrackedAnimationsPaused;
    CALayer * _referenceLayer;
}

@property (nonatomic, readonly) CALayer *referenceLayer;

- (void).cxx_destruct;
- (double)currentTime;
- (id)init;
- (id)initWithReferenceLayer:(id)arg1;
- (id)referenceLayer;
- (void)updateAnimations;

@end

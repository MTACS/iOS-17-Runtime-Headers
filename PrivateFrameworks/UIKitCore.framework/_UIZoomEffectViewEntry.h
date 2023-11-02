
@interface _UIZoomEffectViewEntry : _UIVisualEffectViewEntry {
    double  _zoomAmount;
}

@property (nonatomic) double zoomAmount;

- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (bool)canTransitionToEffect:(id)arg1;
- (void)convertToIdentity;
- (id)description;
- (void)removeEffectFromView:(id)arg1;
- (void)setZoomAmount:(double)arg1;
- (bool)shouldAnimateProperty:(id)arg1;
- (double)zoomAmount;

@end

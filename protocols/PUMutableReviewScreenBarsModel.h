
@protocol PUMutableReviewScreenBarsModel

@required

- (UIView *)accessoryView;
- (NSDictionary *)availableItemsByIdentifier;
- (struct CGPoint { double x1; double x2; })controlCenterAlignmentPoint;
- (bool)isTransitioningWithCamera;
- (void)setAccessoryView:(UIView *)arg1;
- (void)setAvailableItemsByIdentifier:(NSDictionary *)arg1;
- (void)setControlCenterAlignmentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setControlCenterAlignmentPoint:(struct CGPoint { double x1; double x2; })arg1 forceLayout:(bool)arg2;
- (void)setShouldBarsCounterrotate:(bool)arg1;
- (void)setShouldPlaceScrubberInScrubberBar:(bool)arg1;
- (void)setTransitioningWithCamera:(bool)arg1;
- (void)setUseVerticalControlLayout:(bool)arg1;
- (bool)shouldBarsCounterrotate;
- (bool)shouldPlaceScrubberInScrubberBar;
- (bool)useVerticalControlLayout;

@end

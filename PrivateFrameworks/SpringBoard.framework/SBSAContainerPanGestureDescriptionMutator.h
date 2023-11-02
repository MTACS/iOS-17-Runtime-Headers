
@interface SBSAContainerPanGestureDescriptionMutator : SBSAGestureDescriptionMutator

@property (nonatomic) struct CGPoint { double x1; double x2; } initialLocation;
@property (nonatomic) struct CGPoint { double x1; double x2; } translation;

- (id)_containerPanGestureDescription;
- (struct CGPoint { double x1; double x2; })initialLocation;
- (void)setInitialLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })translation;

@end


@protocol UIDragInteractionDelegate_Internal <UIDragInteractionDelegate_Private>

@optional

- (double)_dragInteraction:(UIDragInteraction *)arg1 delayForLiftBeginningAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_dragInteractionDynamicallyUpdatesPrefersFullSizePreviews:(UIDragInteraction *)arg1;
- (bool)_dragInteractionShouldBecomeDraggingSourceDelegate:(UIDragInteraction *)arg1;

@end

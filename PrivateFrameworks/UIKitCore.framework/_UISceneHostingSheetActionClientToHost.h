
@interface _UISceneHostingSheetActionClientToHost : _UISceneHostingActionClientToHost

+ (id)actionForSheetGrabberDidTriggerPrimaryAction;
+ (id)actionForSheetInteractionDraggingDidBeginWithRubberBandCoefficient:(double)arg1 dismissible:(bool)arg2 interruptedOffset:(struct CGPoint { double x1; double x2; })arg3;
+ (id)actionForSheetInteractionDraggingDidChangeWithTranslation:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2 animateChange:(bool)arg3 dismissible:(bool)arg4;
+ (id)actionForSheetInteractionDraggingDidEnd;

- (void)performActionForSceneController:(id)arg1;

@end

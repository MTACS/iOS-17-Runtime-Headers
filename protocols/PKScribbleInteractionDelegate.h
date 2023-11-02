
@protocol PKScribbleInteractionDelegate <NSObject>

@optional

- (bool)_pkScribbleInteractionShouldDisableInputAssistant:(PKScribbleInteraction *)arg1;
- (void)_scribbleInteraction:(PKScribbleInteraction *)arg1 beginSuppressingPlaceholderForElement:(id <NSObject><NSCopying>)arg2;
- (void)_scribbleInteraction:(PKScribbleInteraction *)arg1 didFinishWritingInElement:(id <NSObject><NSCopying>)arg2;
- (void)_scribbleInteraction:(PKScribbleInteraction *)arg1 didTargetElement:(id <NSObject><NSCopying>)arg2 forTouches:(NSSet *)arg3 event:(UIEvent *)arg4;
- (void)_scribbleInteraction:(PKScribbleInteraction *)arg1 endSuppressingPlaceholderForElement:(id <NSObject><NSCopying>)arg2;
- (bool)_scribbleInteraction:(PKScribbleInteraction *)arg1 focusWillTransformElement:(id <NSObject><NSCopying>)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_scribbleInteraction:(PKScribbleInteraction *)arg1 hitToleranceInsetsForElement:(id <NSObject><NSCopying>)arg2 defaultInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (bool)_scribbleInteraction:(PKScribbleInteraction *)arg1 isEditableElement:(id <NSObject><NSCopying>)arg2;
- (bool)_scribbleInteraction:(PKScribbleInteraction *)arg1 shouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_scribbleInteraction:(PKScribbleInteraction *)arg1 willBeginWritingInElement:(id <NSObject><NSCopying>)arg2;
- (bool)_scribbleInteractionIsEnabled:(PKScribbleInteraction *)arg1;

@end

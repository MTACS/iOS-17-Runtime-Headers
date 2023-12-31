
@interface AKInkAnnotationEventHandler : AKRectangularAnnotationEventHandler

+ (bool)allowsDraggingOfAnnotation:(id)arg1;

- (bool)alwaysLockAspectRatio;
- (bool)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (bool)handleDownEvent:(id)arg1 orRecognizer:(id)arg2;
- (struct CGSize { double x1; double x2; })naturalSizeForAnnotation;

@end

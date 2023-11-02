
@protocol AKShapeDetectionControllerDelegate <NSObject>

@required

- (void)beginIgnoringAnnotationSelectionObservation:(AKShapeDetectionController *)arg1;
- (void)endIgnoringAnnotationSelectionObservation:(AKShapeDetectionController *)arg1;
- (bool)isIgnoringAnnotationAndSelectionKVO:(AKShapeDetectionController *)arg1;
- (bool)isWaitingToCoalesceStrokes;
- (UIView *)overlayView:(AKShapeDetectionController *)arg1;
- (bool)shapeDetectionController:(AKShapeDetectionController *)arg1 shouldSelectCandidateAnnotation:(AKAnnotation *)arg2;

@optional

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shapeDetectionControllerPositioningRectForCandidatePicker:(AKShapeDetectionController *)arg1;
- (void)shapeDetectionControllerWillPickCandidate:(AKShapeDetectionController *)arg1 isInk:(bool)arg2;

@end
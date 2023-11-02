
@protocol PKShapeDrawingControllerDelegate <NSObject>

@required

- (PKMetalRendererController *)shapeDrawingControllerRendererController:(PKShapeDrawingController *)arg1;
- (void)shapeDrawingControllerShapeDetectionCancelled:(PKShapeDrawingController *)arg1;
- (void)shapeDrawingControllerShapeGestureDetected:(PKShapeDrawingController *)arg1;

@end

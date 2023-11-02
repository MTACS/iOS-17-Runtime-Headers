
@interface PKShapeDrawingTimerHelper : NSObject <PKShapeDrawingControllerDelegate> {
    <PKShapeDrawingTimerHelperDelegate> * _delegate;
    PKShapeDrawingController * _shapeDrawingController;
    NSTimer * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addStrokePoint:(struct CGPoint { double x1; double x2; })arg1 inputPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg2;
- (void)beginStrokeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithDelegate:(id)arg1;
- (id)shapeDrawingControllerRendererController:(id)arg1;
- (void)shapeDrawingControllerShapeDetectionCancelled:(id)arg1;
- (void)shapeDrawingControllerShapeGestureDetected:(id)arg1;
- (void)teardown;

@end

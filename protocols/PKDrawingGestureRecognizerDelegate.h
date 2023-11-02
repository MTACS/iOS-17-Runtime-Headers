
@protocol PKDrawingGestureRecognizerDelegate <UIGestureRecognizerDelegate>

@optional

- (bool)drawingGestureRecognizer:(UIGestureRecognizer<PKDrawingGestureRecognizerProtocol> *)arg1 shouldBeginDrawingWithTouches:(NSSet *)arg2 event:(UIEvent *)arg3;
- (bool)drawingGestureRecognizer:(UIGestureRecognizer<PKDrawingGestureRecognizerProtocol> *)arg1 shouldDelayDrawingBeganWithTouch:(UITouch *)arg2;
- (void)drawingGestureRecognizer:(UIGestureRecognizer<PKDrawingGestureRecognizerProtocol> *)arg1 touchesEndedWithDrawingTouch:(UITouch *)arg2;

@end

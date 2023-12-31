
@interface TSDCanvasZoomPinchGestureRecognizer : UIPinchGestureRecognizer {
    bool  mZoomTimedOut;
}

- (void)p_cancelAfterDelay;
- (void)p_startCancellationTimer;
- (void)p_stopCancellationTimer;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end


@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {
    UIView<UIScrollViewDelayedTouchesBeganGestureRecognizerClient> * _client;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startSceneReferenceLocation;
    UIDelayedAction * _touchDelay;
}

+ (bool)_shouldDefaultToTouches;

- (void).cxx_destruct;
- (id)_clientView;
- (void)_resetGestureRecognizer;
- (bool)_shouldMakeTimerForDelayedContentTouches:(id)arg1;
- (void)clearTimer;
- (void)dealloc;
- (void)sendDelayedTouches;
- (void)sendTouchesShouldBeginForDelayedTouches:(id)arg1;
- (void)sendTouchesShouldBeginForTouches:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

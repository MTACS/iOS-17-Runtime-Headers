
@interface WKImageAnalysisGestureRecognizer : UILongPressGestureRecognizer {
    UIView<WKImageAnalysisGestureRecognizerDelegate> * _imageAnalysisGestureRecognizerDelegate;
    UIScrollView * _lastTouchedScrollView;
}

@property (nonatomic, readonly) UIScrollView *lastTouchedScrollView;

- (void).cxx_destruct;
- (void)beginAfterExceedingForceThresholdIfNeeded:(id)arg1;
- (id)initWithImageAnalysisGestureDelegate:(id)arg1;
- (id)lastTouchedScrollView;
- (void)reset;
- (void)setState:(long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

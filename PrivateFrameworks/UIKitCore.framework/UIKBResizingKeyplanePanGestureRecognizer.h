
@interface UIKBResizingKeyplanePanGestureRecognizer : UIPanGestureRecognizer {
    <UIKBResizingKeyplanePanGestureRecognizerDelegate> * _resizingDelegate;
}

@property (nonatomic) <UIKBResizingKeyplanePanGestureRecognizerDelegate> *resizingDelegate;

- (void).cxx_destruct;
- (bool)_willScrollY;
- (id)resizingDelegate;
- (void)setResizingDelegate:(id)arg1;

@end


@interface UIKBResizingKeyplaneCoordinator : NSObject <UIGestureRecognizerDelegate, UIKBResizingKeyplanePanGestureRecognizerDelegate> {
    <UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> * _delegate;
    double  _foregroundOpacity;
    UIKBResizingKeyplanePanGestureRecognizer * _gestureRecognizer;
    UIView * _grabber;
    UIColor * _grabberColor;
    bool  _isResizing;
    double  _prevResizingOffset;
    _UIDynamicAnimationGroup * _resizingAnimationGroup;
    double  _resizingOffset;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIKBResizingKeyplaneCoordinatorCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIKBResizingKeyplanePanGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isResizing;
@property (nonatomic, readonly) double resizingOffset;
@property (readonly) Class superclass;

+ (double)savedResizingOffset;

- (void).cxx_destruct;
- (id)delegate;
- (void)dimKeys:(id)arg1;
- (id)gestureRecognizer;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleResizeGesture:(id)arg1;
- (id)init;
- (bool)isResizing;
- (void)reloadResizingOffset;
- (void)resizeKeyplaneWithOffset:(double)arg1 andRedraw:(bool)arg2;
- (double)resizingOffset;
- (void)saveResizingStopIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (bool)shouldStartResizeForTranslationY:(double)arg1;
- (void)stopResizing;
- (void)uninstallGestureRecognizers;
- (void)updateGestureRecognizers;
- (void)updateGrabber;

@end

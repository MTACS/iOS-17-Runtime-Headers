
@interface SiriSharedUIPanDismissalGestureRecognizer : UIPanGestureRecognizer <UIGestureRecognizerDelegate> {
    <SiriSharedUIPanDismissalGestureRecognizerDelegate> * _dismissalDelegate;
    long long  _dismissalStyle;
    long long  _initialDirection;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialPosition;
    id /* block */  _rtlProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SiriSharedUIPanDismissalGestureRecognizerDelegate> *dismissalDelegate;
@property (nonatomic) long long dismissalStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long initialDirection;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialPosition;
@property (nonatomic, copy) id /* block */ rtlProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_contentScaleFactor;
- (void)_handlePanWithRubberBandDownDismissUp:(id)arg1 requiredDirection:(long long)arg2;
- (void)_handlePanWithRubberBandUpDownDismissTrailing:(id)arg1 requiredDirection:(long long)arg2;
- (void)_preventHighlightingUntilGestureFaills;
- (void)_runAnimationsWithPreferredStyle:(id /* block */)arg1;
- (void)_updatePanGestureRecognizer:(id)arg1 changedAnimations:(id /* block */)arg2 endAnimations:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_windowBounds;
- (id)dismissalDelegate;
- (long long)dismissalStyle;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDismissalDelegate:(id)arg1 dismissalStyle:(long long)arg2;
- (id)initWithDismissalDelegate:(id)arg1 dismissalStyle:(long long)arg2 rtlProvider:(id /* block */)arg3;
- (long long)initialDirection;
- (struct CGPoint { double x1; double x2; })initialPosition;
- (void)panGestureRecognizerDidPan:(id)arg1;
- (id /* block */)rtlProvider;
- (void)setDismissalDelegate:(id)arg1;
- (void)setDismissalStyle:(long long)arg1;
- (void)setInitialDirection:(long long)arg1;
- (void)setInitialPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRtlProvider:(id /* block */)arg1;

@end

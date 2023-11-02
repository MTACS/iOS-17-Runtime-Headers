
@interface LPTapToLoadView : LPComponentView <CAAnimationDelegate, UIGestureRecognizerDelegate> {
    id /* block */  _animateOutCompletionHandler;
    LPTextView * _captionView;
    UILongPressGestureRecognizer * _highlightGestureRecognizer;
    UIView * _highlightView;
    UIView * _progressView;
    LPTapToLoadViewStyle * _style;
    <LPTapToLoadViewDelegate> * _tapToLoadViewDelegate;
    bool  _wasTapped;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <LPTapToLoadViewDelegate> *tapToLoadViewDelegate;

- (void).cxx_destruct;
- (void)_animateToProgressView;
- (void)_buildViews;
- (id)_createIndeterminateProgressIndicator;
- (void)_didScroll;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (void)animateOutWithCompletionHandler:(id /* block */)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 style:(id)arg2;
- (void)layoutComponentView;
- (void)setTapToLoadViewDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tapToLoadViewDelegate;

@end

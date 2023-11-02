
@interface CSScrollGestureController : NSObject <BSDescriptionProviding, CSEventHandling, UIGestureRecognizerDelegate> {
    <CSScrollGestureControllerDelegate> * _delegate;
    CSHorizontalScrollFailureRecognizer * _horizontalFailureGestureRecognizer;
    UIScrollView * _scrollView;
    UIGestureRecognizer * _scrollViewGestureRecognizer;
    UIView<CSScrollableView> * _scrollableView;
    long long  _scrollingStrategy;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSScrollGestureControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSHorizontalScrollFailureRecognizer *horizontalFailureGestureRecognizer;
@property (nonatomic) long long scrollingStrategy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_horizontalScrollFailureGestureRecognizerChanged:(id)arg1;
- (bool)_shouldAllowScrollForScrollingStrategy:(long long)arg1;
- (bool)_shouldFailHorizontalSwipesForScrollingStrategy:(long long)arg1;
- (void)_updateForScrollingStrategy:(long long)arg1 fromScrollingStrategy:(long long)arg2;
- (void)conformsToCSEventHandling;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)handleEvent:(id)arg1;
- (id)horizontalFailureGestureRecognizer;
- (id)initWithScrollableView:(id)arg1;
- (void)invalidate;
- (long long)scrollingStrategy;
- (void)setDelegate:(id)arg1;
- (void)setHorizontalFailureGestureRecognizer:(id)arg1;
- (void)setScrollingStrategy:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end

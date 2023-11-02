
@interface WKKeyboardScrollViewAnimator : NSObject <WKKeyboardScrollableInternal> {
    struct RetainPtr<WKKeyboardScrollingAnimator> { 
        void *m_ptr; 
    }  _animator;
    <WKKeyboardScrollViewAnimatorDelegate> * _delegate;
    bool  _delegateRespondsToDidFinishScrolling;
    bool  _delegateRespondsToDistanceForIncrement;
    bool  _delegateRespondsToIsKeyboardScrollable;
    bool  _delegateRespondsToWillScroll;
    struct WeakObjCPtr<UIScrollView> { 
        id m_weakReference; 
    }  _scrollView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WKKeyboardScrollViewAnimatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)beginWithEvent:(id)arg1;
- (struct CGPoint { double x1; double x2; })boundedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (void)dealloc;
- (id)delegate;
- (void)didFinishScrolling;
- (double)distanceForIncrement:(unsigned char)arg1 inDirection:(unsigned char)arg2;
- (void)handleKeyEvent:(id)arg1;
- (id)init;
- (id)initWithScrollView:(id)arg1;
- (struct CGSize { double x1; double x2; })interactiveScrollVelocity;
- (void)invalidate;
- (bool)isKeyboardScrollable;
- (struct RectEdges<bool> { struct array<bool, 4UL> { bool x_1_1_1[4]; } x1; })rubberbandableDirections;
- (void)scrollToContentOffset:(struct FloatPoint { float x1; float x2; })arg1 animated:(bool)arg2;
- (bool)scrollTriggeringKeyIsPressed;
- (void)scrollWithScrollToExtentAnimationTo:(struct CGPoint { double x1; double x2; })arg1;
- (struct RectEdges<bool> { struct array<bool, 4UL> { bool x_1_1_1[4]; } x1; })scrollableDirectionsFromOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)stopScrollingImmediately;
- (void)willStartInteractiveScroll;

@end

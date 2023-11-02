
@interface SiriSharedUIExpandablePlatterPanGestureRecognizer : UIPanGestureRecognizer <UIGestureRecognizerDelegate> {
    bool  _allowExpandedState;
    double  _collapsedHeight;
    double  _expandedHeight;
    <SiriSharedUIExpandablePlatterPanGestureRecognizerDelegate> * _expansionDelegate;
    double  _initialHeight;
    double  _scrollViewContentHeight;
}

@property (nonatomic) bool allowExpandedState;
@property (nonatomic) double collapsedHeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double expandedHeight;
@property (nonatomic) <SiriSharedUIExpandablePlatterPanGestureRecognizerDelegate> *expansionDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initialHeight;
@property (nonatomic) double scrollViewContentHeight;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowExpandedState;
- (double)collapsedHeight;
- (double)expandedHeight;
- (id)expansionDelegate;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithExpansionDelegate:(id)arg1;
- (double)initialHeight;
- (void)panGestureRecognizerDidPan:(id)arg1;
- (double)projectedTranslationWithVelocity:(double)arg1 decelerationRate:(double)arg2;
- (double)scrollViewContentHeight;
- (void)setAllowExpandedState:(bool)arg1;
- (void)setCollapsedHeight:(double)arg1;
- (void)setExpandedHeight:(double)arg1;
- (void)setExpansionDelegate:(id)arg1;
- (void)setInitialHeight:(double)arg1;
- (void)setScrollViewContentHeight:(double)arg1;

@end

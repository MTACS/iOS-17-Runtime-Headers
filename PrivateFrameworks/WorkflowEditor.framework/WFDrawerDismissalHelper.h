
@interface WFDrawerDismissalHelper : NSObject {
    NSHashTable * _activeGestureRecognizers;
    double  _currentInsideness;
    <WFDrawerDismissalHelperDelegate> * _delegate;
    bool  _didDismiss;
    double  _dismissalRectTopEdge;
    WFDrawerDismissalPanMediator * _panMediator;
    UIScrollView * _scrollView;
}

@property (nonatomic, retain) NSHashTable *activeGestureRecognizers;
@property (nonatomic) double currentInsideness;
@property (nonatomic) <WFDrawerDismissalHelperDelegate> *delegate;
@property (nonatomic) bool didDismiss;
@property (nonatomic) double dismissalRectTopEdge;
@property (nonatomic, retain) WFDrawerDismissalPanMediator *panMediator;
@property (nonatomic, readonly) UIScrollView *scrollView;

- (void).cxx_destruct;
- (id)activeGestureRecognizers;
- (double)currentInsideness;
- (void)dealloc;
- (id)delegate;
- (bool)didDismiss;
- (void)dismissCardWithPanGestureRecognizer:(id)arg1;
- (void)dismissCardWithVelocity:(double)arg1;
- (double)dismissalRectTopEdge;
- (void)handlePanGesture:(id)arg1;
- (id)initWithScrollView:(id)arg1;
- (double)insidenessForGestureRecognizer:(id)arg1;
- (void)panGestureDidChange:(id)arg1;
- (void)panGestureRecognizerDidBegin:(id)arg1;
- (void)panGestureRecognizerDidEnd:(id)arg1;
- (id)panMediator;
- (id)scrollView;
- (void)setActiveGestureRecognizers:(id)arg1;
- (void)setCurrentInsideness:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidDismiss:(bool)arg1;
- (void)setDismissalRectTopEdge:(double)arg1;
- (void)setPanMediator:(id)arg1;

@end


@interface WFDrawerGestureCoordinator : NSObject <WFDrawerDismissalHelperDelegate> {
    double  _bottomRubberBandRange;
    bool  _correctingContentOffset;
    <WFDrawerGestureCoordinatorDelegate> * _delegate;
    WFDrawerVelocityFilter * _heightAccelerationFilter;
    WFDrawerVelocityFilter * _heightVelocityFilter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialContentOffset;
    double  _maximumDrawerHeight;
    double  _minimumDrawerHeight;
    UIPanGestureRecognizer * _panGestureRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousPanTranslation;
    UIScrollView * _scrollView;
    unsigned long long  _tapGestureIgnoringCount;
    UITapGestureRecognizer * _tapGestureRecognizer;
    double  _topRubberBandRange;
    struct CGPoint { 
        double x; 
        double y; 
    }  _unmodifiedInitialContentOffset;
}

@property (nonatomic) double bottomRubberBandRange;
@property (nonatomic) bool correctingContentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <WFDrawerGestureCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFDrawerVelocityFilter *heightAccelerationFilter;
@property (nonatomic, readonly) WFDrawerVelocityFilter *heightVelocityFilter;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialContentOffset;
@property (nonatomic) double maximumDrawerHeight;
@property (nonatomic) double minimumDrawerHeight;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) struct CGPoint { double x1; double x2; } previousPanTranslation;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long tapGestureIgnoringCount;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) double topRubberBandRange;
@property (nonatomic) struct CGPoint { double x1; double x2; } unmodifiedInitialContentOffset;

- (void).cxx_destruct;
- (double)applyRubberBandToValue:(double)arg1 withRange:(double)arg2;
- (void)beginDragging;
- (void)beginIgnoringTapGestures;
- (double)bottomRubberBandRange;
- (double)clampedDrawerHeight:(double)arg1;
- (double)containerHeight;
- (bool)correctingContentOffset;
- (id)delegate;
- (double)dismissalRectTopEdgeForCardDismissalHelper:(id)arg1 coordinateSpace:(id)arg2;
- (id)dragGestureTrackerForCardDismissalHelper:(id)arg1;
- (void)dragTranslatedWithVerticalDelta:(double)arg1;
- (void)drawerDismissalHelper:(id)arg1 requestedDismissalWithVelocity:(double)arg2;
- (double)drawerHeight;
- (void)endDraggingWithAnimation:(id)arg1;
- (void)endDraggingWithVerticalVelocity:(double)arg1 animation:(id)arg2;
- (void)endIgnoringTapGestures;
- (void)handlePanGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (id)heightAccelerationFilter;
- (double)heightForRubberBandHeight:(double)arg1;
- (id)heightVelocityFilter;
- (id)initWithDelegate:(id)arg1;
- (struct CGPoint { double x1; double x2; })initialContentOffset;
- (double)maximumDrawerHeight;
- (double)minimumDrawerHeight;
- (id)panGestureRecognizer;
- (struct CGPoint { double x1; double x2; })previousPanTranslation;
- (double)rubberBandHeightForHeight:(double)arg1;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setBottomRubberBandRange:(double)arg1;
- (void)setCorrectingContentOffset:(bool)arg1;
- (void)setInitialContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMaximumDrawerHeight:(double)arg1;
- (void)setMinimumDrawerHeight:(double)arg1;
- (void)setPreviousPanTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScrollView:(id)arg1;
- (void)setTapGestureIgnoringCount:(unsigned long long)arg1;
- (void)setTopRubberBandRange:(double)arg1;
- (void)setUnmodifiedInitialContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)tapGestureIgnoringCount;
- (id)tapGestureRecognizer;
- (double)topRubberBandRange;
- (double)unapplyRubberBandToValue:(double)arg1 withRange:(double)arg2;
- (struct CGPoint { double x1; double x2; })unmodifiedInitialContentOffset;
- (void)updateTapGestureRecognizer;

@end

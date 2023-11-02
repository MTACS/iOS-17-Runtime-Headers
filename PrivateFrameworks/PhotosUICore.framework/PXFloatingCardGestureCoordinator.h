
@interface PXFloatingCardGestureCoordinator : NSObject <UIGestureRecognizerDelegate> {
    PXFloatingCardAnimationManager * _animationManager;
    double  _bottomRubberBandRange;
    PXFloatingCardViewController * _cardViewController;
    <PXFloatingCardGestureCoordinatorDelegate> * _delegate;
    UIPanGestureRecognizer * _heightGestureRecognizer;
    bool  _isDragging;
    <PXFloatingCardLayout> * _layout;
    UIPanGestureRecognizer * _positionGestureRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousPanTranslation;
    double  _topRubberBandRange;
}

@property (nonatomic, retain) PXFloatingCardAnimationManager *animationManager;
@property (nonatomic) double bottomRubberBandRange;
@property (nonatomic) PXFloatingCardViewController *cardViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXFloatingCardGestureCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPanGestureRecognizer *heightGestureRecognizer;
@property (nonatomic) bool isDragging;
@property (nonatomic) <PXFloatingCardLayout> *layout;
@property (nonatomic, retain) UIPanGestureRecognizer *positionGestureRecognizer;
@property (nonatomic) struct CGPoint { double x1; double x2; } previousPanTranslation;
@property (readonly) Class superclass;
@property (nonatomic) double topRubberBandRange;

- (void).cxx_destruct;
- (void)_addGestureRecognizers;
- (void)_handlePositionGestureEnded:(struct CGPoint { double x1; double x2; })arg1;
- (void)_removeGestureRecognizers;
- (id)animationManager;
- (double)applyRubberBandToValue:(double)arg1 withRange:(double)arg2;
- (double)bottomRubberBandRange;
- (id)cardViewController;
- (struct CGPoint { double x1; double x2; })centerPointForPosition:(unsigned long long)arg1;
- (double)closestHeightForProjectedHeight:(double)arg1;
- (unsigned long long)closestPositionToProjectedCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (void)dragBegan;
- (void)dragChangedWithVerticalDelta:(double)arg1;
- (void)dragEndedWithAnimation:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleHeightGesture:(id)arg1;
- (void)handlePositionGesture:(id)arg1;
- (double)heightForRubberBandHeight:(double)arg1;
- (id)heightGestureRecognizer;
- (id)initWithCardViewController:(id)arg1 layout:(id)arg2;
- (bool)isDragging;
- (id)layout;
- (void)layoutDidChange;
- (double)maximumHeight;
- (double)minimumHeight;
- (id)positionGestureRecognizer;
- (struct CGPoint { double x1; double x2; })previousPanTranslation;
- (double)projectionWithVelocity:(double)arg1 decelerationRate:(double)arg2;
- (double)rubberBandHeightForHeight:(double)arg1;
- (void)setAnimationManager:(id)arg1;
- (void)setBottomRubberBandRange:(double)arg1;
- (void)setCardViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeightGestureRecognizer:(id)arg1;
- (void)setIsDragging:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setPositionGestureRecognizer:(id)arg1;
- (void)setPreviousPanTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTopRubberBandRange:(double)arg1;
- (void)snapToHeight:(double)arg1;
- (double)topRubberBandRange;
- (double)unapplyRubberBandToValue:(double)arg1 withRange:(double)arg2;
- (void)updateCardHeightConstraintWithHeight:(double)arg1;

@end

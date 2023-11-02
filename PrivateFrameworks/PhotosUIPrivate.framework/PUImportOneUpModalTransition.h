
@interface PUImportOneUpModalTransition : NSObject {
    long long  _activeGesture;
    <UIViewControllerContextTransitioning> * _context;
    NSArray * _floatingItems;
    UIViewPropertyAnimator * _floatingItemsAnimator;
    PUImportOneUpTransitionItem * _manipulatedFloatingItem;
    long long  _operation;
    UIPanGestureRecognizer * _panGestureRecognizer;
    PUPhotoPinchGestureRecognizer * _pinchGestureRecognizer;
    PXPinchTracker * _pinchTracker;
    double  _startingAnimationProgress;
    PXSwipeDownTracker * _swipeDownTracker;
    UIViewPropertyAnimator * _transitionAnimator;
}

@property (nonatomic) long long activeGesture;
@property (nonatomic, retain) <UIViewControllerContextTransitioning> *context;
@property (nonatomic, retain) NSArray *floatingItems;
@property (nonatomic, retain) UIViewPropertyAnimator *floatingItemsAnimator;
@property (nonatomic, retain) PUImportOneUpTransitionItem *manipulatedFloatingItem;
@property (nonatomic, readonly) long long operation;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, readonly) PUPhotoPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, readonly) PXPinchTracker *pinchTracker;
@property (nonatomic) double startingAnimationProgress;
@property (nonatomic, readonly) PXSwipeDownTracker *swipeDownTracker;
@property (nonatomic, retain) UIViewPropertyAnimator *transitionAnimator;

+ (double)defaultAnimationDurationForOperation:(long long)arg1;
+ (id)propertyAnimatorWithInitialVelocity:(struct CGVector { double x1; double x2; })arg1 forOperation:(long long)arg2 inDirection:(long long)arg3;
+ (struct CGSize { double x1; double x2; })scaledSizeForTargetSize:(struct CGSize { double x1; double x2; })arg1 aspectFillingIntoSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)transitioningObjectInViewController:(id)arg1;

- (void).cxx_destruct;
- (long long)activeGesture;
- (void)animateToPosition:(long long)arg1;
- (long long)animatingPositionForPinchTracker:(id)arg1;
- (long long)animatingPositionForSwipeDownTracker:(id)arg1;
- (void)configureFloatingItemForInteractiveTracking;
- (id)context;
- (bool)continuousGestureRecognizerIsActive:(id)arg1;
- (double)currentProgressForFloatingItem:(id)arg1 atSize:(struct CGSize { double x1; double x2; })arg2 inDirection:(long long)arg3;
- (void)endInteraction;
- (id)floatingItems;
- (id)floatingItemsAnimator;
- (void)handleTapHoldGesture:(id)arg1;
- (void)handleTransitionComplete:(long long)arg1;
- (id)initWithOperation:(long long)arg1 transitionContext:(id)arg2 pinchGestureRecognizer:(id)arg3 panGestureRecognizer:(id)arg4 startsInteractive:(bool)arg5;
- (id)manipulatedFloatingItem;
- (long long)operation;
- (id)panGestureRecognizer;
- (void)pauseAnimation;
- (id)pinchGestureRecognizer;
- (id)pinchTracker;
- (void)prepareFloatingItemsForAnimation;
- (void)setActiveGesture:(long long)arg1;
- (void)setContext:(id)arg1;
- (void)setFloatingItems:(id)arg1;
- (void)setFloatingItemsAnimator:(id)arg1;
- (void)setManipulatedFloatingItem:(id)arg1;
- (void)setStartingAnimationProgress:(double)arg1;
- (void)setTransitionAnimator:(id)arg1;
- (void)startTransition;
- (double)startingAnimationProgress;
- (id)swipeDownTracker;
- (id)transitionAnimator;
- (struct CGVector { double x1; double x2; })unitVelocityForDisplayVelocity:(struct PXDisplayVelocity { double x1; double x2; double x3; double x4; })arg1;
- (void)updateTransitionWithPanGestureRecognizer:(id)arg1;
- (void)updateTransitionWithPinchGestureRecognizer:(id)arg1;

@end

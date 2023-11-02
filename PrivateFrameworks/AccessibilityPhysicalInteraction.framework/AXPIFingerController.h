
@interface AXPIFingerController : NSObject <AXAssertionCoordinatorDelegate, AXPIFingerModelDelegate> {
    <AXPIFingerAppearanceDelegate> * _appearanceDelegate;
    bool  _didMoveFingersDuringUpdate;
    NSMutableDictionary * _downInfosByIdentifier;
    AXPIFingerEventSender * _eventSender;
    AXPIFingerContainerView * _fingerContainerView;
    NSMutableArray * _fingerModels;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _fixedReferenceBounds;
    UIWindow * _fixedReferenceWindow;
    id /* block */  _gestureCompletion;
    bool  _isPerformingGesture;
    AXAssertionCoordinator * _suppressVisualsAssertionCoodinator;
    NSMutableDictionary * _upInfosByIdentifier;
    unsigned long long  _updateCount;
}

@property (nonatomic) <AXPIFingerAppearanceDelegate> *appearanceDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *fingerContainerView;
@property (nonatomic, readonly) NSArray *fingerModels;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } fixedReferenceBounds;
@property (nonatomic, retain) UIWindow *fixedReferenceWindow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPerformingGesture;
@property (nonatomic, readonly) bool isPinchEnabled;
@property (nonatomic, readonly) unsigned long long numberOfFingers;
@property (nonatomic) unsigned long long senderID;
@property (nonatomic) bool shouldAddRealEventFlag;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AXAssertionCoordinator *suppressVisualsAssertionCoodinator;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_endGestureWithSuccess:(bool)arg1;
- (id)_eventTouchInfoForFinger:(id)arg1;
- (id)_eventTouchInfoForFingerLocation:(struct CGPoint { double x1; double x2; })arg1 force:(double)arg2;
- (unsigned long long)_fingerIdentifierForIndex:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })_fingerLocationFromSceneReferencePoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_handleStartingFingersForGesture:(id)arg1 animated:(bool)arg2 startPointForAnimation:(struct CGPoint { double x1; double x2; })arg3 midpoint:(struct CGPoint { double x1; double x2; }*)arg4 showFingers:(bool)arg5;
- (void)_interruptGestureIfNeeded;
- (bool)_isInUpdateBlock;
- (void)_performGesture:(id)arg1 shouldShowFingers:(bool)arg2 completion:(id /* block */)arg3;
- (id)_pointStringsFromFingers;
- (void)_replayEventAtIndex:(unsigned long long)arg1 inGesture:(id)arg2 allFingerIdentifiers:(id)arg3;
- (struct CGPoint { double x1; double x2; })_sceneReferencePointFromFingerLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_sendMoveEventIfNeededForFingerModel:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_showFingerModels:(id)arg1 animated:(bool)arg2 startPointForAnimation:(struct CGPoint { double x1; double x2; })arg3 shouldShowPinchChain:(bool)arg4 shouldReuseFingers:(bool)arg5;
- (id)_showStartingFingersForGesture:(id)arg1 animated:(bool)arg2 startPointForAnimation:(struct CGPoint { double x1; double x2; })arg3;
- (id)_touchInfosByIdentifierForPressedFingers;
- (id)acquireAssertionToSuppressVisualsWithReason:(id)arg1;
- (void)animateToTapWithDuration:(double)arg1;
- (id)appearanceDelegate;
- (void)assertionCoordinator:(id)arg1 assertionsDidBecomeActive:(bool)arg2;
- (void)beginUpdates;
- (void)cancelCircularProgressAnimation;
- (void)cancelGesture;
- (void)clearAllFingersAnimated:(bool)arg1 endPointForAnimation:(struct CGPoint { double x1; double x2; })arg2;
- (void)dealloc;
- (void)didUpdateForceForFingerModel:(id)arg1;
- (void)didUpdateLocationForFingerModel:(id)arg1;
- (void)didUpdatePressStateForFingerModel:(id)arg1;
- (void)didUpdateSelectedStateForFingerModel:(id)arg1;
- (void)didUpdateShapeForFingerModel:(id)arg1;
- (void)endUpdates;
- (void)enumerateFingersUsingBlock:(id /* block */)arg1;
- (id)fingerContainerView;
- (id)fingerModelAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)fingerModels;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fixedReferenceBounds;
- (id)fixedReferenceWindow;
- (id)init;
- (id)initWithDisplayUUID:(id)arg1;
- (bool)isPerformingGesture;
- (bool)isPinchEnabled;
- (id)legacyLiftFingersUp;
- (id)legacyPressFingersDown;
- (void)liftFingersUpAnimated:(bool)arg1;
- (void)liftFingersUpAnimated:(bool)arg1 sendTouchEvents:(bool)arg2;
- (struct CGPoint { double x1; double x2; })midpointForFingers;
- (struct CGPoint { double x1; double x2; })midpointOfStartingFingersForGesture:(id)arg1;
- (bool)moveFingersToPoints:(id)arg1;
- (unsigned long long)numberOfFingers;
- (void)performCircularProgressAnimationOnFingersWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)performDownAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)performGesture:(id)arg1;
- (void)performGesture:(id)arg1 completion:(id /* block */)arg2;
- (void)performMoveToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)performUpAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)performWithoutPreparingGesture:(id)arg1 completion:(id /* block */)arg2;
- (void)pressFingersDownAnimated:(bool)arg1;
- (void)pressFingersDownAnimated:(bool)arg1 sendTouchEvents:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForFingersAtPoints:(id)arg1;
- (void)resetPinchFingers;
- (unsigned long long)senderID;
- (void)setAppearanceDelegate:(id)arg1;
- (void)setFixedReferenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFixedReferenceWindow:(id)arg1;
- (void)setSenderID:(unsigned long long)arg1;
- (void)setShouldAddRealEventFlag:(bool)arg1;
- (bool)shouldAddRealEventFlag;
- (void)showFingerModels:(id)arg1 animated:(bool)arg2 startPointForAnimation:(struct CGPoint { double x1; double x2; })arg3;
- (void)showPinchFingersAnimated:(bool)arg1 midpoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)showStartingFingersForGesture:(id)arg1;
- (void)showStartingFingersForGesture:(id)arg1 animated:(bool)arg2 startPointForAnimation:(struct CGPoint { double x1; double x2; })arg3;
- (id)suppressVisualsAssertionCoodinator;

@end


@interface CACSpokenCommandGestureManager : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _defaultPortraitUpPointForGestures;
    bool  _didStart3DTouch;
    bool  _didStartDrag;
    unsigned int  _displayID;
    AXPIFingerController * _fingerController;
    bool  _shouldHoldStartPointForDrag;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPointFor3DTouch;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPointForDrag;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } defaultPortraitUpPointForGestures;
@property (nonatomic) bool didStart3DTouch;
@property (nonatomic) bool didStartDrag;
@property (nonatomic, readonly) AXPIFingerController *fingerController;
@property (nonatomic, readonly) bool isIn3DTouchGesture;
@property (nonatomic, readonly) bool isInDragGesture;
@property (nonatomic, readonly) bool isInGesture;
@property (nonatomic) bool shouldHoldStartPointForDrag;
@property (nonatomic) struct CGPoint { double x1; double x2; } startPointFor3DTouch;
@property (nonatomic) struct CGPoint { double x1; double x2; } startPointForDrag;

+ (id)allManagers;
+ (void)initializeSharedManagerTable;
+ (id)mainScreenGestureManager;
+ (id)managerForDisplayID:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_adjust3DTouchToForce:(double)arg1;
- (void)_clearStateFlags;
- (struct CGPoint { double x1; double x2; })_fingerControllerPointForPortraitUpPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_performGesture:(id)arg1;
- (struct CGPoint { double x1; double x2; })_pointForGestureGivenPortraitUpPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_pointForGestureGivenPortraitUpPoint:(struct CGPoint { double x1; double x2; })arg1 shouldToggleSelectionOptions:(bool)arg2;
- (void)_startDragWithHold:(bool)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })defaultPortraitUpPointForGestures;
- (bool)didStart3DTouch;
- (bool)didStartDrag;
- (void)endDragAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)fingerController;
- (id)initWithDisplayID:(unsigned int)arg1;
- (bool)isIn3DTouchGesture;
- (bool)isInDragGesture;
- (bool)isInGesture;
- (void)maximize3DTouch;
- (void)performDoubleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 numberOfFingers:(unsigned long long)arg2;
- (void)performGesture:(id)arg1;
- (void)performLongPressAtPoint:(struct CGPoint { double x1; double x2; })arg1 numberOfFingers:(unsigned long long)arg2;
- (void)performPinchInGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)performPinchOutGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)performRotateLeftGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)performRotateRightGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)performSwipeGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1 inDirection:(long long)arg2 fast:(bool)arg3 numberOfFingers:(unsigned long long)arg4;
- (void)performTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 numberOfFingers:(unsigned long long)arg2;
- (void)resetState;
- (void)reveal3DTouchActions;
- (void)setDefaultPortraitUpPointForGestures:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDidStart3DTouch:(bool)arg1;
- (void)setDidStartDrag:(bool)arg1;
- (void)setShouldHoldStartPointForDrag:(bool)arg1;
- (void)setStartPointFor3DTouch:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartPointForDrag:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldHoldStartPointForDrag;
- (void)start3DTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startDragAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startHoldAndDragAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })startPointFor3DTouch;
- (struct CGPoint { double x1; double x2; })startPointForDrag;

@end

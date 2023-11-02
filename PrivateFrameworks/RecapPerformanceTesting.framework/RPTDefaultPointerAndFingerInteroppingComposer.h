
@interface RPTDefaultPointerAndFingerInteroppingComposer : NSProxy <RPTComposer> {
    struct CGPoint { 
        double x; 
        double y; 
    }  __currentlySetAbsolutePosition;
    bool  __usePointer;
    <RCPEventStreamComposer> * _forwardingTarget;
    RPTInteractionOptions * _interactionOptions;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } _currentlySetAbsolutePosition;
@property (nonatomic, readonly) bool _usePointer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultPressure;
@property (nonatomic, readonly) double defaultRadius;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <RCPEventStreamComposer> *forwardingTarget;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RPTInteractionOptions *interactionOptions;
@property (nonatomic, retain) CAMediaTimingFunction *pointerCurveFunction;
@property (nonatomic) double pointerFrequency;
@property (nonatomic) bool scalePointerPhaseScrollToPixels;
@property (nonatomic, retain) RCPEventSenderProperties *senderProperties;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAMediaTimingFunction *touchCurveFunction;
@property (nonatomic) long long touchFrequency;

+ (id)composerWrapping:(id)arg1 withInteractionOptions:(id)arg2;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_currentlySetAbsolutePosition;
- (void)_pointerOrFingerFlickAt:(struct CGPoint { double x1; double x2; })arg1 byDelta:(struct CGVector { double x1; double x2; })arg2 duration:(double)arg3;
- (void)_pointerOrFingerScrollAt:(struct CGPoint { double x1; double x2; })arg1 byDelta:(struct CGVector { double x1; double x2; })arg2 duration:(double)arg3 touchDownAndLift:(bool)arg4;
- (bool)_usePointer;
- (bool)conformsToProtocol:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTarget;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initFromWrapping:(id)arg1 interactionOptions:(id)arg2;
- (id)interactionOptions;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)overrideInteractionOptions:(id)arg1 withEventActionsBlock:(id /* block */)arg2;
- (void)pointerMoveDelta:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2 frequency:(long long)arg3;
- (void)pointerMoveToPoint:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)pointerMoveToPointIfApplicable:(struct CGPoint { double x1; double x2; })arg1;
- (void)pointerOrFingerDoubleTap:(struct CGPoint { double x1; double x2; })arg1;
- (void)pointerOrFingerDragWithStartPoint:(struct CGPoint { double x1; double x2; })arg1 mask:(unsigned long long)arg2 endPoint:(struct CGPoint { double x1; double x2; })arg3 mask:(unsigned long long)arg4 duration:(double)arg5;
- (void)pointerOrFingerMoveToPoint:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)pointerOrFingerScrollAt:(struct CGPoint { double x1; double x2; })arg1 byDelta:(struct CGVector { double x1; double x2; })arg2 duration:(double)arg3;
- (void)pointerOrFingerTap:(struct CGPoint { double x1; double x2; })arg1;
- (void)pointerOrFingerTapDown:(struct CGPoint { double x1; double x2; })arg1;
- (void)pointerOrFingerTapUp:(struct CGPoint { double x1; double x2; })arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setForwardingTarget:(id)arg1;
- (void)set_currentlySetAbsolutePosition:(struct CGPoint { double x1; double x2; })arg1;

@end

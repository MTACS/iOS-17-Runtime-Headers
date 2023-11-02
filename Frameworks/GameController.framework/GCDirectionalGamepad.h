
@interface GCDirectionalGamepad : GCMicroGamepad <CoalescableMicroGamepad, DigitizerValueChangedDelegate, DirectionPadValueChangedDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _absolutePosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _absoluteTouchDownPosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _absoluteWindowLocation;
    bool  _beganTouchOutsideBounds;
    GCControllerDirectionPad * _cardinalDpad;
    GCControllerButtonInput * _centerButton;
    bool  _centerButtonPressed;
    long long  _deviceType;
    unsigned char  _directionPadButtonsState;
    bool  _leftBufferZone;
    unsigned long long  _owner;
    float  _previousButtonState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _relativePosition;
    bool  _reportsAbsoluteDpadValues;
    long long  _touchState;
    float  _touchpadRelativeOriginBufferSize;
    float  _touchpadRelativeWindowSize;
    bool  _treatOnlyCenterRingAsButtonA;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long deviceType;
@property (readonly) GCControllerDirectionPad *dpad;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long owner;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })addCGPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)allowsRotation;
- (bool)calculateRelativePositionWithDigitizerX:(float)arg1 digitizerY:(float)arg2 touchDown:(bool)arg3;
- (id)centerButtonEvent:(id)arg1 pressed:(bool)arg2;
- (struct CGPoint { double x1; double x2; })clampPoint:(struct CGPoint { double x1; double x2; })arg1 toLength:(double)arg2;
- (bool)determineTouchStateWithDigitizerX:(float)arg1 digitizerY:(float)arg2 touchDown:(bool)arg3;
- (long long)deviceType;
- (void)digitizerTouchEvent:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(bool)arg5;
- (void)digitizerTouchUp:(id)arg1 timestamp:(unsigned long long)arg2 forceSkipDpadRotation:(bool)arg3;
- (double)distanceBetweenCGPoint:(struct CGPoint { double x1; double x2; })arg1 andCGPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)dpadDirectionEvent:(id)arg1 direction:(unsigned long long)arg2 pressed:(bool)arg3;
- (id)initWithIdentifier:(id)arg1;
- (double)magnitudeForCGPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mulCGPoint:(struct CGPoint { double x1; double x2; })arg1 byScalar:(double)arg2;
- (struct CGPoint { double x1; double x2; })normalizeCGPoint:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)owner;
- (bool)ownershipClaimingElementsZero;
- (id)productCategory;
- (void)reportDigitizerChange:(id)arg1;
- (void)reportDirectionpadChange:(id)arg1 onQueue:(id)arg2;
- (bool)reportsAbsoluteDpadValues;
- (struct CGPoint { double x1; double x2; })scaleCGPoint:(struct CGPoint { double x1; double x2; })arg1 toLength:(double)arg2;
- (void)setAllowsRotation:(bool)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setDpad:(id)arg1 digitizerX:(double)arg2 digitizerY:(double)arg3 touchDown:(bool)arg4;
- (void)setOwner:(unsigned long long)arg1;
- (void)setReportsAbsoluteDpadValues:(bool)arg1;
- (struct CGPoint { double x1; double x2; })subCGPoint:(struct CGPoint { double x1; double x2; })arg1 fromPoint:(struct CGPoint { double x1; double x2; })arg2;

@end

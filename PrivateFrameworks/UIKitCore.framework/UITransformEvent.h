
@interface UITransformEvent : UIEvent {
    NSMapTable * _gestureRecognizersByWindow;
    BKSHIDEventPointerAttributes * _pointerAttributes;
    double  _rotation;
    double  _rotationDelta;
    unsigned long long  _rotationPhase;
    double  _scale;
    double  _scaleDelta;
    unsigned long long  _scalePhase;
    struct CGPoint { 
        double x; 
        double y; 
    }  _sceneReferenceLocation;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
    double  _translationMagDelta;
    unsigned long long  _translationPhase;
}

@property (readonly) unsigned long long phase;
@property (nonatomic, readonly) double rotation;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } translation;

- (void).cxx_destruct;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_init;
- (id)_initWithEvent:(struct __GSEvent { }*)arg1 touches:(id)arg2;
- (void)_removeGestureRecognizer:(id)arg1;
- (void)_removeGestureRecognizersFromWindows;
- (void)_reset;
- (bool)_sendEventToGestureRecognizer:(id)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (id)_windowServerHitTestWindow;
- (id)_windows;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (unsigned long long)phase;
- (double)rotation;
- (double)scale;
- (long long)subtype;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (struct CGPoint { double x1; double x2; })translation;
- (long long)type;
- (long long)weightedDominantComponentForScaleWeight:(double)arg1 rotationWeight:(double)arg2 translationWeight:(double)arg3;

@end

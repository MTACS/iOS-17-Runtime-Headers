
@interface PKRulerController : NSObject <UIGestureRecognizerDelegate> {
    bool  _canRulerSnapToAngle;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _defaultRulerTransform;
    <PKRulerDelegate> * _delegate;
    bool  _isInteractingWithRuler;
    bool  _lastDrawingWasMaskedByRuler;
    bool  _lastDrawingWasSnappedToRuler;
    bool  _lastTouchWasMaskedByRuler;
    struct { 
        int arcType; 
        bool before; 
        double snapAngle; 
    }  _previousRulerState;
    PKRulerGestureRecognizer * _rulerGestureRecognizer;
    <PKRulerHostingDelegate> * _rulerHostingDelegate;
    UIView * _rulerHostingView;
    bool  _rulerIsRotating;
    PKRulerLayer * _rulerLayer;
    bool  _rulerSnappedToAngle;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _rulerStartTransform;
    struct { 
        int arcType; 
        bool before; 
        double snapAngle; 
    }  _rulerState;
    PKRulerView * _rulerView;
    bool  _rulerWasShownViaGesture;
    UIImpactFeedbackGenerator * _snapImpactBehavior;
    bool  _wantsSharedRuler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)eatPencilGesture:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)rulerMoveGesture:(id)arg1;

@end


@interface PUCropGestureHandler : NSObject {
    bool  _animateEndGesture;
    NSObject<OS_dispatch_queue> * _animationQueue;
    NUCropModel * _cropModel;
    <PUCropGestureHandlerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _delegateQueueIsMain;
    long long  _gesture;
    double  _gestureStartPitch;
    double  _gestureStartRoll;
    double  _gestureStartYaw;
    bool  _inPanState;
    bool  _inZoomState;
    bool  _isDebugging;
    bool  _isLogging;
    bool  _isRequestActive;
    double  _maximumZoomScale;
    NSObject<OS_dispatch_source> * _panAnimationTimer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _panPinchStartRect;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _panRubberBandDelta;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _panRubberBandOffset;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _panSlideVelocity;
    struct { 
        double scale; 
        struct CGVector { 
            double dx; 
            double dy; 
        } modelSpaceTranslation; 
    }  _panState;
    struct { 
        double scale; 
    }  _pinchState;
    NSObject<OS_dispatch_source> * _pitchYawRollAnimationTimer;
    int  _pitchYawRollAnimationTimerCountdown;
    struct { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } startCropRect; 
    }  _pitchYawRollState;
    NSObject<OS_dispatch_source> * _zoomAnimationTimer;
    double  _zoomOverflow;
}

@property (readonly, retain) NUCropModel *cropModel;
@property <PUCropGestureHandlerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) long long gesture;
@property double maximumZoomScale;
@property (readonly) struct CGVector { double x1; double x2; } panRubberBandOffset;
@property (readonly) double zoomOverflow;

- (void).cxx_destruct;
- (void)_activateRequest;
- (void)_clearGestureTypePan;
- (void)_clearGestureTypePinch;
- (void)_clearGestureTypePitchYawRoll;
- (void)_constrainedMoveCropRectBy:(struct CGVector { double x1; double x2; })arg1 startRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rubberband:(bool)arg3;
- (void)_deactivateRequest;
- (void)_didTrack;
- (void)_dispatchSyncOnDelegateQueue:(id /* block */)arg1;
- (void)_setGestureType:(long long)arg1;
- (void)_setGestureTypePan;
- (void)_setGestureTypePinch;
- (void)_setZoomScale:(double)arg1;
- (void)_startPitchYawRollGestureTimeoutTimer;
- (void)_stopAnimatedPan;
- (void)_stopAnimatedPanTimer;
- (void)_stopAnimatedZoom;
- (void)_stopAnimatedZoomTimer;
- (double)_zoomScaleForCurrentCropRectAndModelRect;
- (double)_zoomScaleForModelCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_zoomWithScale:(double)arg1 startCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)beginPan;
- (void)beginZoom;
- (id)cropModel;
- (id)delegate;
- (id)delegateQueue;
- (id)delgateQueue;
- (void)endPanWithTranslation:(struct CGVector { double x1; double x2; })arg1 velocity:(struct CGVector { double x1; double x2; })arg2;
- (void)endZoomWithScale:(double)arg1;
- (long long)gesture;
- (id)initWithCropModel:(id)arg1;
- (struct CGSize { double x1; double x2; })masterImageSize;
- (double)maximumZoomScale;
- (struct CGVector { double x1; double x2; })panRubberBandOffset;
- (void)panWithTranslation:(struct CGVector { double x1; double x2; })arg1 velocity:(struct CGVector { double x1; double x2; })arg2;
- (void)reset;
- (void)setAnimateEndGestureEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setLoggingEnabled:(bool)arg1;
- (void)setMaximumZoomScale:(double)arg1;
- (void)setPitchAngle:(double)arg1;
- (void)setRollAngle:(double)arg1;
- (void)setYawAngle:(double)arg1;
- (void)tearDown;
- (double)zoomOverflow;
- (void)zoomWithScale:(double)arg1;
- (void)zoomWithScale:(double)arg1 rubberband:(bool)arg2;

@end


@interface AVSpatialOverCaptureVideoPreviewLayer : AVCaptureVideoPreviewLayer {
    bool  _automaticallyDimsOverCaptureRegion;
    CALayer * _bottomDimmingOverlay;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    bool  _havePendingPrimaryCaptureRectChange;
    bool  _isPresentationLayer;
    double  _lastAspectCenterUpdateTime;
    unsigned long long  _maxSemanticStyles;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _overCaptureRect;
    long long  _overCaptureStatus;
    bool  _primaryAndOverCaptureCompositingEnabled;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _primaryCaptureRect;
    double  _primaryCaptureRectAspectRatio;
    struct CGPoint { 
        double x; 
        double y; 
    }  _primaryCaptureRectCenterPoint;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _primaryCaptureRectLock;
    long long  _primaryCaptureRectUniqueID;
    bool  _semanticStyleRenderingEnabled;
    bool  _semanticStyleRenderingSupported;
    NSArray * _semanticStyles;
    NSArray * _semanticStylesRegions;
    CALayer * _topDimmingOverlay;
}

@property (nonatomic) bool automaticallyDimsOverCaptureRegion;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } overCaptureRect;
@property (nonatomic, readonly) long long overCaptureStatus;
@property (getter=isPrimaryAndOverCaptureCompositingEnabled, nonatomic) bool primaryAndOverCaptureCompositingEnabled;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } primaryCaptureRect;
@property (nonatomic, readonly) double primaryCaptureRectAspectRatio;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } primaryCaptureRectCenterPoint;

+ (long long)uniqueID;

- (void)_handleSpatialNotification:(id)arg1 payload:(id)arg2;
- (id)_initWithSession:(id)arg1 makeConnection:(bool)arg2;
- (void)_updateSemanticStyleRenderingSupported;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (bool)automaticallyDimsOverCaptureRegion;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })captureDeviceTransformForSensorSize:(struct CGSize { double x1; double x2; })arg1 previewSize:(struct CGSize { double x1; double x2; })arg2 sensorToPreviewVTScalingMode:(id)arg3;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)didUpdatePreviewImageQueueSlot:(unsigned int)arg1 imageQueue:(id)arg2 rotationDegrees:(double)arg3 size:(struct CGSize { double x1; double x2; })arg4;
- (void)getPrimaryCaptureRectCenter:(struct CGPoint { double x1; double x2; }*)arg1 aspectRatio:(double*)arg2 uniqueID:(long long*)arg3;
- (id)initWithLayer:(id)arg1;
- (bool)isPrimaryAndOverCaptureCompositingEnabled;
- (bool)isSemanticStyleRenderingEnabled;
- (bool)isSemanticStyleRenderingSupported;
- (void)layoutSublayers;
- (long long)maxSemanticStyles;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })overCaptureRect;
- (long long)overCaptureStatus;
- (bool)performContentUpdates:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })primaryCaptureRect;
- (double)primaryCaptureRectAspectRatio;
- (struct CGPoint { double x1; double x2; })primaryCaptureRectCenterPoint;
- (long long)primaryCaptureRectUniqueID;
- (void)removeConnection:(id)arg1;
- (id)semanticStyle;
- (id)semanticStyles;
- (id)semanticStylesRegions;
- (void)setAutomaticallyDimsOverCaptureRegion:(bool)arg1;
- (void)setPrimaryAndOverCaptureCompositingEnabled:(bool)arg1;
- (void)setPrimaryCaptureRectAspectRatio:(double)arg1 centerPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setSemanticStyle:(id)arg1 animated:(bool)arg2;
- (void)setSemanticStyleRenderingEnabled:(bool)arg1;
- (void)setSemanticStyles:(id)arg1 semanticStylesRegions:(id)arg2;

@end

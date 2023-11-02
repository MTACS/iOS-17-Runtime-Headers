
@interface PUCropPerspectiveView : PUCropTransformedImageView <NUMediaViewDelegate, PUCropGestureHandlerDelegate, UIGestureRecognizerDelegate> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _cachedVideoSeekTime;
    NUCropModel * _cropModel;
    _UIDynamicAnimation * _currentAnimation;
    CAShapeLayer * _debugCropRectLayer;
    CALayer * _debugLayer;
    CAShapeLayer * _debugQuadLayer;
    CAShapeLayer * _debugViewRectLayer;
    struct CGImage { } * _gainMapImage;
    float  _gainMapValue;
    PUCropGestureHandler * _gestureHandler;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageCropRect;
    PLImageGeometry * _imageGeometry;
    CALayer * _imageLayer;
    PXImageLayerModulator * _imageLayerModulator;
    PXImageModulationManager * _imageModulationManager;
    bool  _isDebugging;
    double  _lastImageZoomScale;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastModelCropCenter;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _lastPanRubberBandOffset;
    double  _lastPitchRadians;
    double  _lastRollRadians;
    double  _lastUICroppingRectToImageScale;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastViewCropCenter;
    double  _lastYawRadians;
    bool  _layerTransformUpdateAnimated;
    PHLivePhotoView * _livePhotoView;
    CALayer * _mediaLayer;
    CALayer * _mediaSuperlayer;
    bool  _muted;
    bool  _needsLayerTransformUpdate;
    bool  _needsUpdateLayerTransforms;
    bool  _needsUpdateLayerTransformsAnimated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) struct CGImage { }*gainMapImage;
@property (nonatomic) float gainMapValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageCropRect;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_animateValueFromValue:(double)arg1 toValue:(double)arg2 interpolation:(id /* block */)arg3 completion:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_croppingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_fullCropRect;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_imageOrientationTransform;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_imageOrientationTransformWithoutTranslation;
- (void)_invalidateImageLayerModulator;
- (void)_invalidateImageModulationManager;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_modelCropRectUnorientedInUICoords;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_modelSpaceToViewSpaceTransformWithModelCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 currentViewCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_resetCropRect;
- (void)_setCropModel:(id)arg1;
- (void)_setupMediaWithComposition:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeRotatedIfNeeded:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateImageModulation;
- (double)_viewScaleWithModelCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_zoomScaleForCurrentCropRectAndModelRect;
- (double)_zoomScaleForModelCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)cropModel;
- (void)dealloc;
- (void)didBeginTrackingWithCropGestureHandler:(id)arg1;
- (void)didEndTrackingWithCropGestureHandler:(id)arg1;
- (void)didTrackWithCropGestureHandler:(id)arg1;
- (struct CGImage { }*)gainMapImage;
- (float)gainMapValue;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageCropRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageCropRectForViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageOrientedViewCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })imageOrientedViewCropTransform;
- (struct CGPoint { double x1; double x2; })imagePointForViewPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMuted;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })masterImageSize;
- (void)mediaViewDidFinishRendering:(id)arg1;
- (void)setAutoloopComposition:(id)arg1;
- (void)setCanvasFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGainMapImage:(struct CGImage { }*)arg1;
- (void)setGainMapValue:(float)arg1;
- (void)setImage:(id)arg1;
- (void)setImageCropRectFromViewCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)setImageModulationOptions:(struct { long long x1; float x2; })arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLivePhoto:(id)arg1;
- (void)setModelCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 viewCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setMuted:(bool)arg1;
- (void)setNeedsLayerTransformsUpdateAnimated:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setPitchAngle:(double)arg1;
- (void)setStraightenAngle:(double)arg1;
- (void)setVideoComposition:(id)arg1 withSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setYawAngle:(double)arg1;
- (void)tearDownMediaViewAndLayers;
- (void)updateLayerTransformsAnimated:(bool)arg1;
- (void)updateLayerTransformsAnimated:(bool)arg1 viewCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 modelCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })validateViewCropRectAgainstModelCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewCropRectForImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewOrientedViewCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)willBeginTrackingWithCropGestureHandler:(id)arg1;

@end

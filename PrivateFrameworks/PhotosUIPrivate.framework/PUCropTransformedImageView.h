
@interface PUCropTransformedImageView : UIView {
    NUComposition * _autoloopComposition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _canvasFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    bool  _decelerating;
    <PUCropTransformedImageViewDelegate> * _delegate;
    UIImage * _image;
    struct { 
        long long privateInteger; 
        float privateFloat; 
    }  _imageModulationOptions;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    PHLivePhoto * _livePhoto;
    long long  _orientation;
    double  _pitchAngle;
    double  _straightenAngle;
    bool  _tracking;
    NUComposition * _videoComposition;
    NUMediaView * _videoMediaView;
    double  _yawAngle;
}

@property (nonatomic, retain) NUComposition *autoloopComposition;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } canvasFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (getter=isDecelerating, nonatomic, readonly) bool decelerating;
@property (nonatomic) <PUCropTransformedImageViewDelegate> *delegate;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct { long long x1; float x2; } imageModulationOptions;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) PHLivePhoto *livePhoto;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic) long long orientation;
@property (nonatomic) double pitchAngle;
@property (nonatomic) double straightenAngle;
@property (getter=isTracking, nonatomic, readonly) bool tracking;
@property (nonatomic, readonly) NUComposition *videoComposition;
@property (nonatomic, retain) NUMediaView *videoMediaView;
@property (nonatomic) double yawAngle;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageBounds;
- (void)_resetCropRect;
- (void)_setCropModel:(id)arg1;
- (void)_setTracking:(bool)arg1;
- (id)autoloopComposition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })canvasFrame;
- (id)cropModel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)delegate;
- (id)image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageCropRectForViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { long long x1; float x2; })imageModulationOptions;
- (struct CGSize { double x1; double x2; })imageSize;
- (bool)isDecelerating;
- (bool)isMuted;
- (bool)isTracking;
- (id)livePhoto;
- (long long)orientation;
- (double)pitchAngle;
- (void)setAutoloopComposition:(id)arg1;
- (void)setCanvasFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
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
- (void)setVideoMediaView:(id)arg1;
- (void)setYawAngle:(double)arg1;
- (double)straightenAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })validateViewCropRectAgainstModelCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)videoComposition;
- (id)videoMediaView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewCropRectForImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)yawAngle;

@end

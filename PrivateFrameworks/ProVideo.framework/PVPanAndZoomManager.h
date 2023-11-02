
@interface PVPanAndZoomManager : NSObject {
    double  _adjustedMaxScale;
    bool  _disableRotation;
    bool  _disableScale;
    bool  _disableTranslation;
    int  _fillMode;
    bool  _isEditingRotate;
    bool  _isEditingScale;
    bool  _isEditingTranslate;
    bool  _isTranslationDirectionLockEnabled;
    bool  _isZoomSnapEnabled;
    double  _maxScale;
    double  _mediaAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _mediaSize;
    double  _minScale;
    double  _scaleWhileSnapped;
    bool  _skipFirstSnap;
    NSTimer * _snapTimer;
    double  _translationDirectionLockThreshold;
    double  _viewAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
    struct PVTransformAnimationInfo { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } time; 
        struct CGPoint { 
            double x; 
            double y; 
        } translation; 
        double scale; 
        double rotation; 
    }  _workingTransformRotate;
    struct PVTransformAnimationInfo { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } time; 
        struct CGPoint { 
            double x; 
            double y; 
        } translation; 
        double scale; 
        double rotation; 
    }  _workingTransformScale;
    struct PVTransformAnimationInfo { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } time; 
        struct CGPoint { 
            double x; 
            double y; 
        } translation; 
        double scale; 
        double rotation; 
    }  _workingTransformTranslate;
    double  _zoomSnapScale;
    double  _zoomSnapThreshold;
}

@property (nonatomic) bool disableRotation;
@property (nonatomic) bool disableScale;
@property (nonatomic) bool disableTranslation;
@property (nonatomic) int fillMode;
@property (nonatomic) bool isTranslationDirectionLockEnabled;
@property (nonatomic) bool isZoomSnapEnabled;
@property (nonatomic) double maxScale;
@property (nonatomic) struct CGSize { double x1; double x2; } mediaSize;
@property (nonatomic) double translationDirectionLockThreshold;
@property (nonatomic) struct CGSize { double x1; double x2; } viewSize;
@property (nonatomic) double zoomSnapScale;
@property (nonatomic) double zoomSnapThreshold;

+ (struct CGPoint { double x1; double x2; })adjustPositionToKeepMediaInViewBounds:(struct CGPoint { double x1; double x2; })arg1 scale:(double)arg2 minScale:(double)arg3 mediaAspectRatio:(double)arg4 viewAspectRatio:(double)arg5 fillMode:(int)arg6 outNeedsUpdate:(out bool*)arg7;
+ (double)calculateMaxScale:(double)arg1 forMediaAspectRatio:(double)arg2 viewAspectRatio:(double)arg3 fillMode:(int)arg4;
+ (double)calculateMinScaleForMediaAspectRatio:(double)arg1 viewAspectRatio:(double)arg2 fillMode:(int)arg3;
+ (struct CGPoint { double x1; double x2; })maximumNormalizedPositionForScale:(double)arg1 minScale:(double)arg2 position:(struct CGPoint { double x1; double x2; })arg3 mediaAspectRatio:(double)arg4 viewAspectRatio:(double)arg5 fillMode:(int)arg6;
+ (double)maximumNormalizedPositionInAxisForScale:(double)arg1 minScale:(double)arg2 isMediaAxisNormal:(bool)arg3 isPositionBelowZero:(bool)arg4;
+ (id)panAndZoomManagerWithMediaSize:(struct CGSize { double x1; double x2; })arg1 viewSize:(struct CGSize { double x1; double x2; })arg2 fillMode:(int)arg3 maxScale:(double)arg4;
+ (struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })transformAnimInfoForScale:(double)arg1 atNormalizedLocationInView:(struct CGPoint { double x1; double x2; })arg2 minScale:(double)arg3 currentScale:(double)arg4 currentTranslation:(struct CGPoint { double x1; double x2; })arg5 mediaAspectRatio:(double)arg6 viewAspectRatio:(double)arg7 fillMode:(int)arg8 outNeedsUpdate:(out bool*)arg9;

- (void).cxx_destruct;
- (void)beginEditingTransform:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })arg1 transformType:(int)arg2 updateOtherWorkingTransforms:(bool)arg3;
- (void)cancelEditing;
- (void)cancelSnapTimer;
- (bool)disableRotation;
- (bool)disableScale;
- (bool)disableTranslation;
- (struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })endEditingTransformForType:(int)arg1;
- (int)fillMode;
- (id)initWithMediaSize:(struct CGSize { double x1; double x2; })arg1 viewSize:(struct CGSize { double x1; double x2; })arg2 fillMode:(int)arg3 maxScale:(double)arg4;
- (bool)isEditing;
- (bool)isEditingTransformType:(int)arg1;
- (bool)isTranslationDirectionLockEnabled;
- (bool)isZoomSnapEnabled;
- (double)maxScale;
- (struct CGSize { double x1; double x2; })mediaSize;
- (void)onSnapTimer:(id)arg1;
- (void)setDisableRotation:(bool)arg1;
- (void)setDisableScale:(bool)arg1;
- (void)setDisableTranslation:(bool)arg1;
- (void)setFillMode:(int)arg1;
- (void)setIsEditingTransform:(bool)arg1 type:(int)arg2;
- (void)setIsTranslationDirectionLockEnabled:(bool)arg1;
- (void)setIsZoomSnapEnabled:(bool)arg1;
- (void)setMaxScale:(double)arg1;
- (void)setMediaSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTranslationDirectionLockThreshold:(double)arg1;
- (void)setViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setZoomSnapScale:(double)arg1;
- (void)setZoomSnapThreshold:(double)arg1;
- (double)translationDirectionLockThreshold;
- (void)updateMaxScale;
- (void)updateMediaAspectRatio;
- (void)updateMinScale;
- (struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })updateRotation:(double)arg1 normalizedLocationInView:(struct CGPoint { double x1; double x2; })arg2 outNeedsUpdate:(out bool*)arg3;
- (struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })updateScale:(double)arg1 normalizedLocationInView:(struct CGPoint { double x1; double x2; })arg2 outNeedsUpdate:(out bool*)arg3;
- (struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })updateTranslation:(struct CGPoint { double x1; double x2; })arg1 outNeedsUpdate:(out bool*)arg2;
- (void)updateViewAspectRatio;
- (struct CGSize { double x1; double x2; })viewSize;
- (double)zoomSnapScale;
- (double)zoomSnapThreshold;

@end

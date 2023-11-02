
@interface CAMPreviewView : UIView {
    bool  __debugDrawZoomPIP;
    int  __exposureBiasSide;
    CAShapeLayer * __indicatorContainerMask;
    UILabel * __simulatorLabel;
    double  _bottomContentInset;
    CEKSubjectIndicatorView * _centeredSubjectIndicatorView;
    CAMFocusIndicatorView * _continuousIndicator;
    CAMGridView * _gridView;
    CAMHorizonLevelView * _horizonLevelView;
    long long  _indicatorClippingStyle;
    CAMInterfaceModulationView * _indicatorContainerView;
    CAMLevelIndicatorView * _levelView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedZoomPIPRect;
    long long  _orientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _overlayFrame;
    CAMFocusIndicatorView * _pointIndicator;
    CAMStageLightOverlayView * _stageLightOverlayView;
    CAMVideoPreviewView * _videoPreviewView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewportFrame;
}

@property (nonatomic, readonly) bool _debugDrawZoomPIP;
@property (nonatomic) int _exposureBiasSide;
@property (setter=_setIndicatorContainerMask:, nonatomic, retain) CAShapeLayer *_indicatorContainerMask;
@property (nonatomic, readonly) UILabel *_simulatorLabel;
@property (nonatomic) double bottomContentInset;
@property (nonatomic, retain) CEKSubjectIndicatorView *centeredSubjectIndicatorView;
@property (nonatomic, retain) CAMFocusIndicatorView *continuousIndicator;
@property (nonatomic) CAMGridView *gridView;
@property (nonatomic) CAMHorizonLevelView *horizonLevelView;
@property (nonatomic) long long indicatorClippingStyle;
@property (nonatomic, readonly) CAMInterfaceModulationView *indicatorContainerView;
@property (nonatomic) CAMLevelIndicatorView *levelView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedZoomPIPRect;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } overlayFrame;
@property (nonatomic, retain) CAMFocusIndicatorView *pointIndicator;
@property (nonatomic, retain) CAMStageLightOverlayView *stageLightOverlayView;
@property (nonatomic, retain) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic, readonly) CAMVideoPreviewView *videoPreviewView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewportFrame;

+ (Class)layerClass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_aspectFaceRectFromSquareFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 angle:(double)arg2;
- (bool)_debugDrawZoomPIP;
- (void)_drawZoomPIP;
- (int)_exposureBiasSide;
- (int)_faceOrientationForRollAngle:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameClampedToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForAVMetadataObject:(id)arg1;
- (id)_indicatorContainerMask;
- (bool)_isZoomPIPRectValid;
- (void)_setIndicatorContainerMask:(id)arg1;
- (id)_simulatorLabel;
- (void)_updateIndicatorContainerMask;
- (double)bottomContentInset;
- (struct CGPoint { double x1; double x2; })captureDevicePointOfInterestForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)centeredSubjectIndicatorView;
- (id)continuousIndicator;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceIndicatorFrameForFaceResult:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fixedSizeSubjectIndicatorFrameForBodyResult:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fixedSizeSubjectIndicatorFrameForFaceResult:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForMetadataObjectResult:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForMetadataObjectResult:(id)arg1 fixedSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSubjectGroupResult:(id)arg1 minimumSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForTextRegionResult:(id)arg1;
- (id)gridView;
- (id)horizonLevelView;
- (void)indicatePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (long long)indicatorClippingStyle;
- (id)indicatorContainerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)levelView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedZoomPIPRect;
- (long long)orientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })overlayFrame;
- (struct CGPoint { double x1; double x2; })pointForCaptureDevicePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (id)pointIndicator;
- (void)setBottomContentInset:(double)arg1;
- (void)setCenteredSubjectIndicatorView:(id)arg1;
- (void)setContinuousIndicator:(id)arg1;
- (void)setGridView:(id)arg1;
- (void)setHorizonLevelView:(id)arg1;
- (void)setIndicatorClippingStyle:(long long)arg1;
- (void)setLevelView:(id)arg1;
- (void)setNormalizedZoomPIPRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setOverlayFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPointIndicator:(id)arg1;
- (void)setStageLightOverlayView:(id)arg1;
- (void)setVideoPreviewLayer:(id)arg1;
- (void)setViewportFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_exposureBiasSide:(int)arg1;
- (id)stageLightOverlayView;
- (id)videoPreviewLayer;
- (id)videoPreviewView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewportFrame;

@end

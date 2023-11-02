
@interface CACZoomController : UIViewController {
    UIView * _containingView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _dockedLensFrame;
    CAReplicatorLayer * _dockedReplicatorLayer;
    CACZWLensChromeView * _lensChromeView;
    CABackdropLayer * _screenBackdropLayer;
    double  _zoomFactor;
    CABackdropLayer * _zoomedRegionBackdropLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _zoomedRegionFrame;
}

@property (nonatomic) UIView *containingView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } dockedLensFrame;
@property (nonatomic, retain) CAReplicatorLayer *dockedReplicatorLayer;
@property (nonatomic, retain) CACZWLensChromeView *lensChromeView;
@property (nonatomic, retain) CABackdropLayer *screenBackdropLayer;
@property (nonatomic) double zoomFactor;
@property (nonatomic, retain) CABackdropLayer *zoomedRegionBackdropLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } zoomedRegionFrame;

+ (id)sharedController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_effectiveRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 position:(struct CGPoint { double x1; double x2; })arg2 scaleFactor:(double)arg3;
- (struct CGSize { double x1; double x2; })_prescaledSizeForFinalSize:(struct CGSize { double x1; double x2; })arg1 withScaleFactor:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestDockFromZoomRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)containingView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dockedLensFrame;
- (id)dockedReplicatorLayer;
- (void)hide;
- (id)initWithContainingView:(id)arg1;
- (id)initWithZoomFactor:(double)arg1;
- (void)layerize:(id)arg1 color:(id)arg2;
- (id)lensChromeView;
- (void)loadView;
- (void)moveZoomRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)printLayers;
- (id)screenBackdropLayer;
- (void)setContainingView:(id)arg1;
- (void)setDockedLensFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDockedReplicatorLayer:(id)arg1;
- (void)setLensChromeView:(id)arg1;
- (void)setScreenBackdropLayer:(id)arg1;
- (void)setZoomFactor:(double)arg1;
- (void)setZoomedRegionBackdropLayer:(id)arg1;
- (void)setZoomedRegionFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)show;
- (double)zoomFactor;
- (id)zoomedRegionBackdropLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zoomedRegionFrame;

@end

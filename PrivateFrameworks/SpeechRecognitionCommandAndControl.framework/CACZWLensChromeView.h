
@interface CACZWLensChromeView : UIView {
    CAShapeLayer * _backdropGrabberMaskLayer;
    CALayer * _backdropLayer;
    CAShapeLayer * _backdropMaskShapeLayer;
    CAShapeLayer * _backdropResizingMaskLayer;
    CAShapeLayer * _chromeInnerBorderLayer;
    CAShapeLayer * _chromeOuterBorderLayer;
    CALayer * _grabberOverlayLayer;
    double  _lensCornerRadius;
    CAShapeLayer * _lensResizingHandlesLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousResizeBounds;
    NSArray * _resizeElements;
    bool  _showingResizeHandles;
    CAShapeLayer * _touchStealerShapeLayer;
}

@property (nonatomic, retain) CAShapeLayer *backdropGrabberMaskLayer;
@property (nonatomic, retain) CALayer *backdropLayer;
@property (nonatomic, retain) CAShapeLayer *backdropMaskShapeLayer;
@property (nonatomic, retain) CAShapeLayer *backdropResizingMaskLayer;
@property (nonatomic, retain) CAShapeLayer *chromeInnerBorderLayer;
@property (nonatomic, retain) CAShapeLayer *chromeOuterBorderLayer;
@property (nonatomic, retain) CALayer *grabberOverlayLayer;
@property (nonatomic) double lensCornerRadius;
@property (nonatomic, retain) CAShapeLayer *lensResizingHandlesLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousResizeBounds;
@property (nonatomic, retain) NSArray *resizeElements;
@property (nonatomic) bool showingResizeHandles;
@property (nonatomic, retain) CAShapeLayer *touchStealerShapeLayer;

- (void).cxx_destruct;
- (id)backdropGrabberMaskLayer;
- (id)backdropLayer;
- (id)backdropMaskShapeLayer;
- (id)backdropResizingMaskLayer;
- (id)chromeInnerBorderLayer;
- (id)chromeOuterBorderLayer;
- (id)grabberOverlayLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)lensCornerRadius;
- (id)lensResizingHandlesLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousResizeBounds;
- (id)resizeElements;
- (void)setBackdropGrabberMaskLayer:(id)arg1;
- (void)setBackdropLayer:(id)arg1;
- (void)setBackdropMaskShapeLayer:(id)arg1;
- (void)setBackdropResizingMaskLayer:(id)arg1;
- (void)setChromeInnerBorderLayer:(id)arg1;
- (void)setChromeOuterBorderLayer:(id)arg1;
- (void)setGrabberOverlayLayer:(id)arg1;
- (void)setLensCornerRadius:(double)arg1;
- (void)setLensResizingHandlesLayer:(id)arg1;
- (void)setPreviousResizeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setResizeElements:(id)arg1;
- (void)setShowingResizeHandles:(bool)arg1;
- (void)setTouchStealerShapeLayer:(id)arg1;
- (void)showLensResizingHandles:(bool)arg1 animated:(bool)arg2;
- (bool)showingResizeHandles;
- (id)touchStealerShapeLayer;
- (void)updateChromeVisibility:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;

@end

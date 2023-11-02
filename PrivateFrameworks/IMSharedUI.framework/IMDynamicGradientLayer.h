
@interface IMDynamicGradientLayer : CALayer {
    struct CGColorSpace { } * _colorSpace;
    NSArray * _colors;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _gradientFrame;
    CALayer * _gradientLayer;
    <IMDynamicGradientReferenceView> * _referenceView;
    double  _screenScale;
    CATransformLayer * _trackingLayer;
}

@property (nonatomic) struct CGColorSpace { }*colorSpace;
@property (nonatomic, copy) NSArray *colors;
@property (nonatomic, readonly) struct CGImage { }*gradient;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } gradientFrame;
@property (nonatomic, retain) CALayer *gradientLayer;
@property (nonatomic) <IMDynamicGradientReferenceView> *referenceView;
@property (nonatomic) double screenScale;
@property (nonatomic, retain) CATransformLayer *trackingLayer;

- (void).cxx_destruct;
- (double)_floorToPixels:(double)arg1;
- (void)_updateAnimation;
- (void)_updateGradientImage;
- (struct CGColorSpace { }*)colorSpace;
- (id)colors;
- (void)dealloc;
- (id)description;
- (void)didMoveToWindow:(id)arg1;
- (struct CGImage { }*)gradient;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })gradientFrame;
- (id)gradientLayer;
- (id)init;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)layoutSublayers;
- (id)referenceView;
- (double)screenScale;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setColors:(id)arg1;
- (void)setGradientFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setReferenceView:(id)arg1;
- (void)setScreenScale:(double)arg1;
- (void)setTrackingLayer:(id)arg1;
- (id)trackingLayer;

@end


@interface SCKPGradientView : UIView {
    double  _gradientEndOpacity;
    double  _gradientHeight;
    struct CGPoint { 
        double x; 
        double y; 
    }  _gradientOrigin;
    double  _gradientStartOpacity;
    NSString * _gradientType;
    bool  _isVisible;
}

@property (nonatomic) double gradientEndOpacity;
@property (nonatomic) double gradientHeight;
@property (nonatomic) struct CGPoint { double x1; double x2; } gradientOrigin;
@property (nonatomic) double gradientStartOpacity;
@property (nonatomic, retain) NSString *gradientType;
@property (nonatomic, readonly) CAGradientLayer *layer;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_fadeInAnimation;
- (id)_fadeOutAnimation;
- (void)_updateGradientOpacity;
- (double)gradientEndOpacity;
- (double)gradientHeight;
- (struct CGPoint { double x1; double x2; })gradientOrigin;
- (double)gradientStartOpacity;
- (id)gradientType;
- (id)initWithGradientType:(id)arg1;
- (void)layoutSubviews;
- (void)setGradientEndOpacity:(double)arg1;
- (void)setGradientHeight:(double)arg1;
- (void)setGradientOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setGradientStartOpacity:(double)arg1;
- (void)setGradientType:(id)arg1;
- (void)setVisible:(bool)arg1 animated:(bool)arg2;

@end

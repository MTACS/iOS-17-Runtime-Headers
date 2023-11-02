
@interface SBHomeScreenMaterialView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _backgroundInsets;
    UIView * _backgroundView;
    UIView * _highlightView;
    bool  _highlighted;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    UIView * _whiteTintView;
    UIImageView * _xColorBurnView;
    UIImageView * _xPlusDView;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } backgroundInsets;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic) double brightness;
@property (nonatomic, retain) UIImage *foregroundImage;
@property (getter=isHighlighted, nonatomic) bool highlighted;

+ (id)colorBurnContentImageForImage:(id)arg1;

- (void).cxx_destruct;
- (void)_addHighlightViewIfNecessary;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })backgroundInsets;
- (id)backgroundView;
- (double)brightness;
- (id)foregroundImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundView:(id)arg2 foregroundImage:(id)arg3;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (void)setBackgroundInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBrightness:(double)arg1;
- (void)setForegroundImage:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLegibilityStyle:(long long)arg1;

@end

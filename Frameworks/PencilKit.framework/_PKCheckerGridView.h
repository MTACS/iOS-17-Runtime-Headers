
@interface _PKCheckerGridView : UIView {
    UIColor * _colorA;
    UIColor * _colorB;
    UIImageView * _imageView;
    double  _tileSize;
}

@property (nonatomic, retain) UIColor *colorA;
@property (nonatomic, retain) UIColor *colorB;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) double tileSize;

- (void).cxx_destruct;
- (id)_createGridTileImage;
- (void)_updateUI;
- (id)colorA;
- (id)colorB;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTileSize:(double)arg1 colorA:(id)arg2 colorB:(id)arg3;
- (void)layoutSubviews;
- (void)setColorA:(id)arg1;
- (void)setColorB:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTileSize:(double)arg1;
- (double)tileSize;

@end

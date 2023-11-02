
@interface CAMSemanticStylePickerTileOverlayView : UIView {
    UIImageView * __bottomLeftCorner;
    UIImageView * __bottomRightCorner;
    UIView * __tileOverlay;
    UIImageView * __topLeftCorner;
    UIImageView * __topRightCorner;
    double  _cornerTargetAlpha;
    UIColor * _materialColor;
    double  _tileAlpha;
}

@property (nonatomic, readonly) UIImageView *_bottomLeftCorner;
@property (nonatomic, readonly) UIImageView *_bottomRightCorner;
@property (nonatomic, readonly) UIView *_tileOverlay;
@property (nonatomic, readonly) UIImageView *_topLeftCorner;
@property (nonatomic, readonly) UIImageView *_topRightCorner;
@property (nonatomic) double cornerTargetAlpha;
@property (nonatomic) UIColor *materialColor;
@property (nonatomic) double tileAlpha;

+ (id)_sharedCornerImage;

- (void).cxx_destruct;
- (id)_bottomLeftCorner;
- (id)_bottomRightCorner;
- (id)_tileOverlay;
- (id)_topLeftCorner;
- (id)_topRightCorner;
- (void)_updateAlphas;
- (void)_updateMaterialColor;
- (double)cornerTargetAlpha;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)materialColor;
- (void)setCornerTargetAlpha:(double)arg1;
- (void)setMaterialColor:(id)arg1;
- (void)setTileAlpha:(double)arg1;
- (double)tileAlpha;

@end

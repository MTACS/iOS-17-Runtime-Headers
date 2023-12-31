
@interface TSKCenterTilingImageView : UIView {
    UIImage * mCenterTileImage;
    UIImage * mLeftCapImage;
    UIImage * mRightCapImage;
}

@property (nonatomic, retain) UIImage *centerTileImage;
@property (nonatomic, retain) UIImage *leftCapImage;
@property (nonatomic, retain) UIImage *rightCapImage;

- (id)centerTileImage;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leftCapImage;
- (id)rightCapImage;
- (void)setCenterTileImage:(id)arg1;
- (void)setLeftCapImage:(id)arg1;
- (void)setRightCapImage:(id)arg1;

@end

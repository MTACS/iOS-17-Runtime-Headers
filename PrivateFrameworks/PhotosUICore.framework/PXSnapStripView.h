
@interface PXSnapStripView : UIView {
    NSArray * _indicatorInfos;
    UIImageView * _stripImageView;
}

@property (nonatomic, copy) NSArray *indicatorInfos;

- (void).cxx_destruct;
- (void)_updateSnapStripImage;
- (void)_updateStripView:(bool)arg1;
- (id)cubeGlyph;
- (id)indicatorInfos;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setIndicatorInfos:(id)arg1;
- (void)setIndicatorInfos:(id)arg1 animated:(bool)arg2;

@end

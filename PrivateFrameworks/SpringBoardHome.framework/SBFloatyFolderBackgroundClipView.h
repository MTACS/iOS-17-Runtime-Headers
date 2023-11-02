
@interface SBFloatyFolderBackgroundClipView : UIView {
    SBFolderBackgroundView * _backgroundView;
}

@property (nonatomic) unsigned long long backgroundEffect;
@property (nonatomic, readonly) SBFolderBackgroundView *backgroundView;
@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;
- (unsigned long long)backgroundEffect;
- (id)backgroundView;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundEffect:(unsigned long long)arg1;
- (void)setCornerRadius:(double)arg1;

@end

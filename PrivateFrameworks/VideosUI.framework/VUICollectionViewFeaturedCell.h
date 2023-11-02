
@interface VUICollectionViewFeaturedCell : VUIBaseCollectionViewCell {
    VUICollectionViewFeaturedView * _featuredView;
}

@property (nonatomic, retain) VUICollectionViewFeaturedView *featuredView;

+ (double)_iOSLockupWidthWithWindowWidth:(double)arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 showsPageControl:(bool)arg3;

- (void).cxx_destruct;
- (void)_commonInitWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)featuredView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFeaturedView:(id)arg1;

@end

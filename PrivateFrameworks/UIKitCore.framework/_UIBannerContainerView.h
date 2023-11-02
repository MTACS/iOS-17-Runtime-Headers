
@interface _UIBannerContainerView : UIView {
    NSMutableArray * _banners;
    NSMutableArray * _constraints;
}

@property (nonatomic, retain) NSMutableArray *banners;
@property (nonatomic, retain) NSMutableArray *constraints;

- (void).cxx_destruct;
- (id)_bannerAnimationToVisible:(bool)arg1 hiddenValue:(id)arg2 visibleValue:(id)arg3 withKeyPath:(id)arg4;
- (void)_dismissBanner:(id)arg1 alongsideAnimations:(id)arg2 completion:(id /* block */)arg3;
- (void)_presentBanner:(id)arg1 completion:(id /* block */)arg2;
- (void)_setBanner:(id)arg1 visible:(bool)arg2 alongsideAnimations:(id)arg3 completion:(id /* block */)arg4;
- (id)banners;
- (id)constraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBanners:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)statusBarFrameDidChange:(id)arg1;
- (void)updateConstraints;

@end

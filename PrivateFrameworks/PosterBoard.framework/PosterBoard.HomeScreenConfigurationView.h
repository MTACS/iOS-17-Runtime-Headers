
@interface PosterBoard.HomeScreenConfigurationView : UIView <PosterBoard.PosterPairObserver> {
    void blurButton;
    void controls;
    void delegate;
    void gradientPreviewView;
    void homePosterPreviewView;
    void homeScreenConfiguration;
    void lockPosterPreviewView;
    void posterPair;
    void solidColorPreviewView;
    void stackView;
}

- (void).cxx_destruct;
- (void)didSelectControl:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)posterPairDidUpdateConfiguredProperties:(id)arg1;
- (void)posterPairDidUpdateHomePosterAppearance:(id)arg1;
- (void)posterPairDidUpdateLockPosterAppearance:(id)arg1;
- (void)posterPairDidUpdateLockPosterSnapshots:(id)arg1;
- (void)reloadLockPosterSnapshot;
- (void)toggleLegibilityBlur:(id)arg1;

@end

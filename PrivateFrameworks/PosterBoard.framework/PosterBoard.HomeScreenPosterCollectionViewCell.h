
@interface PosterBoard.HomeScreenPosterCollectionViewCell : PosterBoard.PosterPairCollectionViewCell {
    void $__lazy_storage_$_homePosterPreviewView;
    void $__lazy_storage_$_lockPosterPreviewView;
    void delegate;
    void gradientPreviewView;
    void homePosterBlurView;
    void homePosterSnapshotView;
    void homeScreenConfiguration;
    void homeScreenIconContentView;
    void lockPosterBlurView;
    void solidColorPreviewView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)posterPairDidUpdateHomePosterAppearance:(id)arg1;
- (void)prepareForReuse;

@end

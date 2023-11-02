
@interface PosterBoard.PosterPairCollectionViewCell : PosterBoard.PosterCollectionViewCell <PosterBoard.PosterPairObserver> {
    void isReloadingLockPosterSnapshot;
    void keyLineView;
    void lockPosterSnapshotImage;
    void lockPosterSnapshotView;
    void posterPair;
    void snapshotProvider;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)posterPairDidUpdateConfiguredProperties:(id)arg1;
- (void)posterPairDidUpdateHomePosterAppearance:(id)arg1;
- (void)posterPairDidUpdateLockPosterAppearance:(id)arg1;
- (void)posterPairDidUpdateLockPosterSnapshots:(id)arg1;
- (void)prepareForReuse;

@end

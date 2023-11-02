
@protocol PosterBoard.PosterPairObserver

@optional

- (void)posterPairDidUpdateConfiguredProperties:(PBFPosterPair *)arg1;
- (void)posterPairDidUpdateHomePosterAppearance:(PBFPosterPair *)arg1;
- (void)posterPairDidUpdateLocalizedTitle:(PBFPosterPair *)arg1;
- (void)posterPairDidUpdateLockPosterAppearance:(PBFPosterPair *)arg1;
- (void)posterPairDidUpdateLockPosterSnapshots:(PBFPosterPair *)arg1;

@end

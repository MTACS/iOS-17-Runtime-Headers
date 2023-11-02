
@interface SearchUIMultiResultAppCollectionCell : UICollectionViewCell {
    SearchUIHomeScreenAppIconView * _appIconView;
}

@property (retain) SearchUIHomeScreenAppIconView *appIconView;

- (void).cxx_destruct;
- (bool)_disableRasterizeInAnimations;
- (long long)_focusItemDeferralMode;
- (id)appIconView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAppIconView:(id)arg1;
- (void)updateWithResult:(id)arg1;

@end

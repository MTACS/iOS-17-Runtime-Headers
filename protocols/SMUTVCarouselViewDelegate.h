
@protocol SMUTVCarouselViewDelegate <NSObject>

@optional

- (void)carouselView:(UIView<SMUTVCarouselView> *)arg1 didCenterItemAtIndex:(long long)arg2;
- (void)carouselView:(UIView<SMUTVCarouselView> *)arg1 didDeselectItemAtIndex:(long long)arg2;
- (void)carouselView:(UIView<SMUTVCarouselView> *)arg1 didEndDisplayingCell:(UICollectionViewCell *)arg2 forItemAtIndex:(long long)arg3;
- (void)carouselView:(UIView<SMUTVCarouselView> *)arg1 didEndDisplayingItemAtIndex:(long long)arg2;
- (void)carouselView:(UIView<SMUTVCarouselView> *)arg1 didFocusItemAtIndex:(long long)arg2;
- (void)carouselView:(UIView<SMUTVCarouselView> *)arg1 didPlayItemAtIndex:(long long)arg2;
- (void)carouselView:(UIView<SMUTVCarouselView> *)arg1 didSelectItemAtIndex:(long long)arg2;
- (bool)carouselView:(UIView<SMUTVCarouselView> *)arg1 shouldDeselectItemAtIndex:(long long)arg2;
- (bool)carouselView:(UIView<SMUTVCarouselView> *)arg1 shouldSelectItemAtIndex:(long long)arg2;
- (void)carouselView:(UIView<SMUTVCarouselView> *)arg1 willDisplayCell:(UICollectionViewCell *)arg2 forItemAtIndex:(long long)arg3;
- (void)carouselView:(UIView<SMUTVCarouselView> *)arg1 willDisplayItemAtIndex:(long long)arg2;
- (void)carouselViewDidScroll:(UIView<SMUTVCarouselView> *)arg1;
- (long long)indexForPreferredCenteredViewInCarouselView:(UIView<SMUTVCarouselView> *)arg1;

@end

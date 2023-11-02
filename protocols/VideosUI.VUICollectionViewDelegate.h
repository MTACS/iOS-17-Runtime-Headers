
@protocol VideosUI.VUICollectionViewDelegate

@required

- (void)vuiCollectionView:(UICollectionView *)arg1 didEndDisplaying:(UICollectionViewCell *)arg2 for:(NSIndexPath *)arg3;
- (void)vuiCollectionView:(UICollectionView *)arg1 didSelectItemAt:(NSIndexPath *)arg2;
- (void)vuiCollectionView:(UICollectionView *)arg1 willDisplay:(UICollectionViewCell *)arg2 for:(NSIndexPath *)arg3;
- (void)vuiCollectionView:(UICollectionView *)arg1 willDisplaySupplementaryView:(UICollectionReusableView *)arg2 forElementKind:(NSString *)arg3 at:(NSIndexPath *)arg4;

@optional

- (void)vuiCollectionView:(UICollectionView *)arg1 orthogonalScrollViewDidScroll:(id <_UICollectionViewOrthogonalScrollView>)arg2 section:(long long)arg3;

@end

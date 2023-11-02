
@protocol SFCapsuleCollectionViewToolbarContentProviding <NSObject>

@required

- (double)capsuleCollectionView:(SFCapsuleCollectionView *)arg1 heightForToolbarContentView:(UIView *)arg2;
- (void)capsuleCollectionView:(SFCapsuleCollectionView *)arg1 relinquishToolbarContentView:(UIView *)arg2;
- (UIView *)toolbarContentViewForCapsuleCollectionView:(SFCapsuleCollectionView *)arg1;

@end

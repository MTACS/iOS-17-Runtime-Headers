
@protocol PUCollectionViewLayoutTransitioningDelegate <NSObject>

@required

- (void)collectionViewLayout:(UICollectionViewLayout *)arg1 willSupplyLayoutAttributes:(NSArray *)arg2;
- (bool)collectionViewLayoutShouldProvideCustomAnimations:(UICollectionViewLayout *)arg1;

@end

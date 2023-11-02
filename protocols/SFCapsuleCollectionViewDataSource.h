
@protocol SFCapsuleCollectionViewDataSource <NSObject>

@required

- (UIView *)capsuleCollectionView:(SFCapsuleCollectionView *)arg1 contentViewForItemAtIndex:(long long)arg2;
- (unsigned long long)numberOfItemsInCapsuleCollectionView:(SFCapsuleCollectionView *)arg1;

@end

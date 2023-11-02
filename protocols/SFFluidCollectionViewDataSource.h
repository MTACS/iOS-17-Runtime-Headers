
@protocol SFFluidCollectionViewDataSource <NSObject>

@required

- (unsigned long long)fluidCollectionView:(SFFluidCollectionView *)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (SFFluidCollectionReuseableView *)fluidCollectionView:(SFFluidCollectionView *)arg1 viewForItemAtIndexPath:(NSIndexPath *)arg2;

@optional

- (SFFluidCollectionReuseableView *)fluidCollectionView:(SFFluidCollectionView *)arg1 viewForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (unsigned long long)numberOfSectionsForFluidCollectionView:(SFFluidCollectionView *)arg1;

@end

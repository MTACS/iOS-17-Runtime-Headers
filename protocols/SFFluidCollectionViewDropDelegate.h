
@protocol SFFluidCollectionViewDropDelegate <NSObject>

@required

- (void)fluidCollectionView:(SFFluidCollectionView *)arg1 performDropWithCoordinator:(id <SFFluidCollectionViewDropCoordinator>)arg2;

@optional

- (bool)fluidCollectionView:(SFFluidCollectionView *)arg1 canHandleDropSession:(id <UIDropSession>)arg2;
- (void)fluidCollectionView:(SFFluidCollectionView *)arg1 dropSessionDidEnd:(id <UIDropSession>)arg2;
- (void)fluidCollectionView:(SFFluidCollectionView *)arg1 dropSessionDidEnter:(id <UIDropSession>)arg2;
- (void)fluidCollectionView:(SFFluidCollectionView *)arg1 dropSessionDidExit:(id <UIDropSession>)arg2;
- (UIDropProposal *)fluidCollectionView:(SFFluidCollectionView *)arg1 dropSessionDidUpdate:(id <UIDropSession>)arg2 withDestinationIndexPath:(NSIndexPath *)arg3;

@end


@interface PKDashboardPassTilesItemPresenter : NSObject <PKDashboardItemPresenter, PKPassTileGroupViewDelegate> {
    <PKDashboardPassTilesItemPresenterDelegate> * _delegate;
    PKDashboardContentHostCollectionViewCell * _sampleCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKDashboardPassTilesItemPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 animated:(bool)arg5;
- (bool)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewCellClasses;
- (id)delegate;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(id /* block */)arg5;
- (Class)itemClass;
- (void)passTileGroupView:(id)arg1 executeSEActionForPass:(id)arg2 tile:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;

@end

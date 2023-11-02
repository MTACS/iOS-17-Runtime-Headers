
@interface PKDashboardInstallmentPlanStatusItemPresenter : NSObject <PKDashboardItemPresenter> {
    PKInstallmentPlanProgressCollectionViewCell * _sampleProgressCell;
    PKInstallmentPlanTotalFinancedCollectionViewCell * _sampleTotalFinancedCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureProgressCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4;
- (void)_configureTotalFinancedCell:(id)arg1 forItem:(id)arg2 inCollection:(id)arg3 forIndexPath:(id)arg4;
- (bool)_showStatusForItem:(id)arg1;
- (bool)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(id /* block */)arg5;
- (id)init;
- (Class)itemClass;
- (struct CGSize { double x1; double x2; })sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;

@end


@interface PKDashboardPaymentProductsTransitPresenter : NSObject <PKDashboardItemPresenter, PKPerformActionViewControllerDelegate> {
    PKPassGroupView * _passGroupView;
    PKPassTransitProductsViewController * _productDetailsController;
    PKFusedDoubleCellView * _sampleFusedCellView;
    PKAdjustableSingleCellView * _sampleSingleCellView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_actionHandlerForItem:(id)arg1 indexPath:(id)arg2;
- (id)_allocViewForTransitItem:(id)arg1;
- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4;
- (void)_configureView:(id*)arg1 transitItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (id)_identifierForItem:(id)arg1;
- (id)_passForTransitItem:(id)arg1 indexPath:(id)arg2;
- (id)_renewActionForItem:(id)arg1 commutePlanIdentifier:(id)arg2;
- (id)_sampleViewForTransitItem:(id)arg1;
- (id)_topUpActionForItem:(id)arg1 indexPath:(id)arg2 balanceIdentifier:(id)arg3;
- (long long)_viewTypeForTransitItem:(id)arg1;
- (bool)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (bool)cellIsIndependentForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(id /* block */)arg5;
- (id)displayableBalancesForTransitItem:(id)arg1;
- (id)initWithPassGroupView:(id)arg1;
- (Class)itemClass;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;

@end

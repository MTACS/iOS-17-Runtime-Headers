
@interface PKTransactionSupportTransactionSectionController : PKPaymentSetupListSectionController {
    UICollectionView * _collectionView;
    PKDashboardPaymentTransactionItem * _transactionItem;
    PKDashboardPaymentTransactionItemPresenter * _transactionItemPresenter;
}

- (void).cxx_destruct;
- (void)_decorateCell:(id)arg1 forRowItem:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithTransactionItem:(id)arg1 transactionItemPresenter:(id)arg2 collectionView:(id)arg3;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end

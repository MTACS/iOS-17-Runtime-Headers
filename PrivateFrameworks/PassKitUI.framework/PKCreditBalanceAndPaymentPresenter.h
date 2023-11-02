
@interface PKCreditBalanceAndPaymentPresenter : NSObject <PKAccountServiceAccountResolutionControllerDelegate, PKCreditPaymentDueCellDelegate, PKDashboardItemPresenter> {
    bool  _isCompactUI;
    NSDateFormatter * _monthDayFormatter;
    NSDateFormatter * _monthFormatter;
    NSDateFormatter * _paymentDateFormatter;
    PKAccountServiceAccountResolutionController * _resolutionController;
    PKCreditActivityCell * _sampleActivityCell;
    PKCreditBalanceCell * _sampleBalanceCell;
    PKCreditPaymentDueCell * _samplePaymentDueCell;
    UIViewController<PKSpendingSummaryViewControllerDelegate> * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountServiceResoultionControllerWithItem:(id)arg1;
- (void)_configureAccountUserSpendingCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4;
- (void)_configureActivityCell:(id)arg1 forItem:(id)arg2 sizing:(bool)arg3 inCollectionView:(id)arg4 forIndexPath:(id)arg5;
- (void)_configureBalanceCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4;
- (void)_configurePaymentDueCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4;
- (bool)_useAccessibilityLayoutForCollectionView:(id)arg1;
- (void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(bool)arg3;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (bool)cellIsIndependentForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (bool)cellIsStackableForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(id /* block */)arg5;
- (id)initWithViewController:(id)arg1;
- (Class)itemClass;
- (void)paymentButtonTappedForItem:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;

@end

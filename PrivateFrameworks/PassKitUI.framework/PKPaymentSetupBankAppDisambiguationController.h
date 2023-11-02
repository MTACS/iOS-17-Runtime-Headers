
@interface PKPaymentSetupBankAppDisambiguationController : PKPaymentSetupListSectionController {
    NSMutableArray * _cameraItemIdentifierToItemMapping;
    <PKPaymentSetupBankAppDisambiguationControllerDelegate> * _delegate;
    NSMutableArray * _inAppItemIdentifierToItemMapping;
    PKPaymentSetupProduct * _paymentSetupProduct;
}

@property <PKPaymentSetupBankAppDisambiguationControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_listItemWithName:(id)arg1;
- (void)_updateItemWithIdentifier:(id)arg1 loadingIndicatorVisibility:(bool)arg2;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (id)identifiers;
- (id)initWithPaymentSetupProduct:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end


@interface PKPeerPaymentRecurringPaymentDetailAmountSectionController : PKDynamicListSectionController {
    <PKPeerPaymentRecurringPaymentDetailAmountSectionControllerDelegate> * _delegate;
    PKPeerPaymentRecurringPaymentAmountDetailRowItem * _item;
}

- (void).cxx_destruct;
- (void)_decorateListCell:(id)arg1 forItem:(id)arg2;
- (id)cellRegistrationForItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (id)identifiers;
- (id)initWithAmount:(id)arg1 currency:(id)arg2 delegate:(id)arg3;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end

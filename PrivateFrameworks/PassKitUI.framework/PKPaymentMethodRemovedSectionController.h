
@interface PKPaymentMethodRemovedSectionController : PKDynamicListSectionController {
    NSString * _removedPaymentMethodIdentifier;
    NSString * _removedPaymentMethodName;
}

- (void).cxx_destruct;
- (id)cellRegistrationForItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (id)identifiers;
- (id)initWithPaymentMethodName:(id)arg1 paymentMethodIdentifier:(id)arg2;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end

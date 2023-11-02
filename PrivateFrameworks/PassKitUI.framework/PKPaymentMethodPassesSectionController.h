
@interface PKPaymentMethodPassesSectionController : PKDynamicListSectionController {
    <PKPaymentMethodSectionControllerDelegate> * _delegate;
    NSArray * _passes;
    PKPaymentRequest * _request;
    PKPaymentPass * _selectedPass;
}

- (void).cxx_destruct;
- (id)cellRegistrationForItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (id)identifiers;
- (id)initWithDelegate:(id)arg1 request:(id)arg2 selectedPass:(id)arg3;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end

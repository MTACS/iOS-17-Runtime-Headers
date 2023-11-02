
@interface PKAccountSupportTopicExplanationSectionController : PKPaymentSetupListSectionController {
    <PKAccountSupportTopicExplanationSectionControllerDelegate> * _delegate;
    NSArray * _items;
}

- (void).cxx_destruct;
- (id)_decorateListCell:(id)arg1 forExplanationLink:(id)arg2;
- (id)cellRegistrationForItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (id)initWithExplanation:(id)arg1 delegate:(id)arg2;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end

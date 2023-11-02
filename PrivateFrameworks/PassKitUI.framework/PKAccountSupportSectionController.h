
@interface PKAccountSupportSectionController : PKPaymentSetupListSectionController {
    PKAccount * _account;
}

- (void).cxx_destruct;
- (id)_decorateListCell:(id)arg1 forRowItem:(id)arg2;
- (id)initWithAccount:(id)arg1;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end

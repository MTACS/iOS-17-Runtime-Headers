
@interface PKAccountSupportTopicsSectionController : PKPaymentSetupListSectionController {
    PKAccount * _account;
    <PKAccountSupportTopicsSectionControllerDelegate> * _delegate;
    NSString * _sectionTitle;
    NSArray * _topics;
}

- (void).cxx_destruct;
- (id)_decorateListCell:(id)arg1 forRowItem:(id)arg2;
- (void)didSelectItem:(id)arg1;
- (id)headerAttributedStringForIdentifier:(id)arg1;
- (id)initWithAccount:(id)arg1 topics:(id)arg2 sectionTitle:(id)arg3 delegate:(id)arg4;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;

@end

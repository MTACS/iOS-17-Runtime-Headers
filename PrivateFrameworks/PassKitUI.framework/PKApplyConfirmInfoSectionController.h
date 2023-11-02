
@interface PKApplyConfirmInfoSectionController : PKApplyCollectionViewSectionController {
    PKApplyActionContent * _actionContent;
    <PKApplyConfirmInfoSectionControllerDelegate> * _delegate;
}

- (void).cxx_destruct;
- (void)_configureContentSection:(id)arg1;
- (void)configureCellForRegistration:(id)arg1 item:(id)arg2;
- (void)configureFooterView:(id)arg1 forSectionIdentifier:(id)arg2;
- (Class)footerViewClassForSectionIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithController:(id)arg1 applyPage:(id)arg2 delegate:(id)arg3;
- (void)setPage:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end

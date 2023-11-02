
@interface PKApplyCollectionViewSectionController : PKPaymentSetupListSectionController {
    PKApplyController * _controller;
    <PKApplyCollectionViewSectionControllerDelegate> * _dynamicCollectionDelegate;
    PKDynamicProvisioningPageContent * _page;
}

@property (nonatomic, readonly) PKApplyController *controller;
@property (nonatomic) <PKApplyCollectionViewSectionControllerDelegate> *dynamicCollectionDelegate;
@property (nonatomic, retain) PKDynamicProvisioningPageContent *page;

- (void).cxx_destruct;
- (bool)_hasFooterContentForIdentifier:(id)arg1;
- (bool)_hasHeaderContentForIdentifier:(id)arg1;
- (id)cellRegistrationForItem:(id)arg1;
- (void)configureCellForRegistration:(id)arg1 item:(id)arg2;
- (void)configureFooterView:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)configureHeaderView:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (id)controller;
- (void)didSelectItem:(id)arg1;
- (id)dynamicCollectionDelegate;
- (Class)footerViewClassForSectionIdentifier:(id)arg1;
- (Class)headerViewClassForSectionIdentifier:(id)arg1;
- (id)initWithController:(id)arg1 applyPage:(id)arg2;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)listLayoutConfigurationWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)page;
- (void)setDynamicCollectionDelegate:(id)arg1;
- (void)setPage:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;

@end

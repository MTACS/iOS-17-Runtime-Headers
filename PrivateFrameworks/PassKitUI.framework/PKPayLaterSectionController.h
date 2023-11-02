
@interface PKPayLaterSectionController : PKPaymentSetupListSectionController {
    <PKPayLaterSectionControllerDelegate> * _dynamicCollectionDelegate;
    PKPayLaterDynamicContentPage * _dynamicContentPage;
    PKAccount * _payLaterAccount;
    <PKPayLaterViewControllerDelegate> * _viewControllerDelegate;
}

@property (nonatomic) <PKPayLaterSectionControllerDelegate> *dynamicCollectionDelegate;
@property (nonatomic, readonly) PKPayLaterDynamicContentPage *dynamicContentPage;
@property (nonatomic, retain) PKAccount *payLaterAccount;
@property (nonatomic, readonly) <PKPayLaterViewControllerDelegate> *viewControllerDelegate;

- (void).cxx_destruct;
- (bool)_hasFooterContentForIdentifier:(id)arg1;
- (bool)_hasHeaderContentForIdentifier:(id)arg1;
- (id)cellRegistrationForItem:(id)arg1;
- (void)configureCellForRegistration:(id)arg1 item:(id)arg2;
- (void)configureFooterView:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)configureHeaderView:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (id)contextMenuConfigurationForItem:(id)arg1;
- (id)contextMenuForPayLaterItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (void)didTapHyperLink:(id)arg1;
- (id)dynamicCollectionDelegate;
- (id)dynamicContentPage;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })firstSectionHeaderEdgeInsets;
- (id)footerContentForSectionIdentifier:(id)arg1;
- (Class)footerViewClassForSectionIdentifier:(id)arg1;
- (Class)headerViewClassForSectionIdentifier:(id)arg1;
- (double)headerViewHeight;
- (id)initWithPayLaterAccount:(id)arg1 dynamicContentPage:(id)arg2 viewControllerDelegate:(id)arg3;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)listLayoutConfigurationWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)payLaterAccount;
- (void)setDynamicCollectionDelegate:(id)arg1;
- (void)setPayLaterAccount:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;
- (id)viewControllerDelegate;

@end

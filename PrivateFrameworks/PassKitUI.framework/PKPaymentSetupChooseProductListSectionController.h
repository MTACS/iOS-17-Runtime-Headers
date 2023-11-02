
@interface PKPaymentSetupChooseProductListSectionController : PKDynamicListSectionController {
    PKPaymentSetupChooseProductListItem * _autoTopUpItem;
    NSArray * _balanceAndCommutePlansItems;
    UIImage * _cardImage;
    <PKPaymentSetupChooseProductListSectionControllerDelegate> * _delegate;
    PKPaymentDigitalIssuanceMetadata * _digitalIssuanceMetadata;
    PKPaymentSetupChooseProductListItem * _postPaidItem;
    UICollectionViewCellRegistration * cellRegistration;
}

@property (nonatomic, retain) UIImage *cardImage;
@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (nonatomic) <PKPaymentSetupChooseProductListSectionControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_generateItems;
- (id)cardImage;
- (id)cellRegistration;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (id)defaultListLayout;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (id)initWithImage:(id)arg1 digitalIssuanceMetadata:(id)arg2;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setCardImage:(id)arg1;
- (void)setCellRegistration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showLoadingIndicatorsForItemIdentifier:(id)arg1 show:(bool)arg2;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;

@end

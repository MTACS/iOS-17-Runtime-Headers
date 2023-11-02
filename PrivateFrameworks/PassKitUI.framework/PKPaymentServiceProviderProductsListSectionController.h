
@interface PKPaymentServiceProviderProductsListSectionController : PKDynamicListSectionController {
    UIImage * _cardImage;
    <PKPaymentServiceProviderProductsListSectionControllerDelegate> * _delegate;
    NSArray * _serviceProviderProducts;
    UICollectionViewCellRegistration * cellRegistration;
}

@property (nonatomic, retain) UIImage *cardImage;
@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (nonatomic) <PKPaymentServiceProviderProductsListSectionControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)cardImage;
- (id)cellRegistration;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (id)defaultListLayout;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (id)initWithIdentifier:(id)arg1 image:(id)arg2 serviceProviderProducts:(id)arg3;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setCardImage:(id)arg1;
- (void)setCellRegistration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;

@end

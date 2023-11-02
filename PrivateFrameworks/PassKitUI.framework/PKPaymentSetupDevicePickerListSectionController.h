
@interface PKPaymentSetupDevicePickerListSectionController : PKDynamicListSectionController {
    UIImage * _cardImage;
    <PKPaymentSetupDevicePickerListSectionControllerDelegate> * _delegate;
    NSArray * _items;
    NSString * _subtitle;
    NSString * _title;
    UICollectionViewCellRegistration * cellRegistration;
}

@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (nonatomic) <PKPaymentSetupDevicePickerListSectionControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)cellRegistration;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (id)decorateListCell:(id)arg1 forRowItem:(id)arg2;
- (id)defaultListLayout;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (id)initWithWebServices:(id)arg1 title:(id)arg2 subtitle:(id)arg3 image:(id)arg4;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setCellRegistration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;

@end

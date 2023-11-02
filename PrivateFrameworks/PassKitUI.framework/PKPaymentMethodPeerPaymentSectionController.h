
@interface PKPaymentMethodPeerPaymentSectionController : NSObject <PKDynamicSectionController, PKPaymentMethodCollectionViewCellDelegate> {
    PKPeerPaymentAccount * _account;
    <PKPaymentMethodSectionControllerDelegate> * _delegate;
    PKPaymentPass * _peerPaymentPass;
    PKPaymentRequest * _request;
    bool  _useAppleCashBalance;
}

@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *identifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cellRegistrationForItem:(id)arg1;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (void)didSelectItem:(id)arg1;
- (id)identifiers;
- (id)initWithDelegate:(id)arg1 request:(id)arg2 useAppleCashBalance:(bool)arg3;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)paymentMethodCellDidToggleItem:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;

@end

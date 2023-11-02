
@interface PKPeerPaymentRecurringPaymentDetailActionSectionController : PKDynamicListSectionController {
    unsigned long long  _action;
    bool  _actionInProgress;
    <PKPeerPaymentRecurringPaymentDetailActionSectionControllerDelegate> * _delegate;
    NSArray * _rowItems;
    unsigned long long  _status;
    UICollectionViewCellRegistration * cellRegistration;
}

@property (nonatomic, readonly) <PKPeerPaymentRecurringPaymentDetailActionSectionControllerDelegate> *delegate;
@property (nonatomic) unsigned long long status;

- (void).cxx_destruct;
- (id)_actionSectionIdentifier;
- (void)_decorateListCell:(id)arg1 forItem:(id)arg2;
- (id)_spinnerAccessory;
- (id)cellRegistration;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (id)identifiers;
- (id)initWithAction:(unsigned long long)arg1 delegate:(id)arg2;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)reloadItemsAnimated:(bool)arg1;
- (void)setCellRegistration:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (unsigned long long)status;

@end

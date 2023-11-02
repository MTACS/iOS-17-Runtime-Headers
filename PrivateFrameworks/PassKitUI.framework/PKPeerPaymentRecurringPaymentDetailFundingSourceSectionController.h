
@interface PKPeerPaymentRecurringPaymentDetailFundingSourceSectionController : PKDynamicListSectionController {
    <PKPeerPaymentRecurringPaymentDetailFundingSourceSectionControllerDelegate> * _delegate;
    NSString * _fundingSource;
    bool  _isEditable;
    NSArray * _rowItems;
    UIColor * _titleColor;
    bool  _useAppleCashBalance;
    UICollectionViewCellRegistration * cellRegistration;
}

@property (nonatomic, readonly) <PKPeerPaymentRecurringPaymentDetailFundingSourceSectionControllerDelegate> *delegate;
@property (nonatomic, copy) NSString *fundingSource;
@property (nonatomic) bool isEditable;
@property (nonatomic, copy) UIColor *titleColor;
@property (nonatomic) bool useAppleCashBalance;

- (void).cxx_destruct;
- (void)_decorateListCell:(id)arg1 forItem:(id)arg2;
- (id)cellRegistration;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (id)fundingSource;
- (id)identifiers;
- (id)initWithFundingSource:(id)arg1 useAppleCashBalance:(bool)arg2 delegate:(id)arg3;
- (bool)isEditable;
- (void)reloadItemsAnimated:(bool)arg1;
- (void)setCellRegistration:(id)arg1;
- (void)setFundingSource:(id)arg1;
- (void)setIsEditable:(bool)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setUseAppleCashBalance:(bool)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)titleColor;
- (bool)useAppleCashBalance;

@end

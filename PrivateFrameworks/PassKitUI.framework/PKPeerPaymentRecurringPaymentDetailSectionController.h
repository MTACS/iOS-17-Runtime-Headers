
@interface PKPeerPaymentRecurringPaymentDetailSectionController : PKDynamicListSectionController <PKCurrencyAmountEntryCollectionViewCellDelegate, PKDateSelectorCollectionViewCellDelegate, _UIDatePickerCompactStyleDelegate> {
    NSDecimalNumber * _amount;
    NSString * _currency;
    <PKPeerPaymentRecurringPaymentDetailSectionControllerDelegate> * _delegate;
    unsigned long long  _frequency;
    NSArray * _frequencyOptions;
    bool  _hideAmount;
    bool  _isEditable;
    unsigned long long  _mode;
    NSCalendar * _productCalendar;
    NSArray * _rowItems;
    bool  _showStartDateSelector;
    NSDate * _startDate;
    NSString * _startDateTitle;
    unsigned long long  _status;
    UIColor * _titleColor;
}

@property (nonatomic, readonly, copy) NSDecimalNumber *amount;
@property (nonatomic, readonly, copy) NSString *currency;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <PKPeerPaymentRecurringPaymentDetailSectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long frequency;
@property (nonatomic, copy) NSArray *frequencyOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideAmount;
@property (nonatomic) bool isEditable;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (nonatomic, readonly) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIColor *titleColor;

- (void).cxx_destruct;
- (void)_datePicker:(id)arg1 didSelectComponent:(long long)arg2;
- (void)_decorateAmountListCell:(id)arg1 forItem:(id)arg2;
- (void)_decorateDateListCell:(id)arg1 forItem:(id)arg2;
- (void)_decorateDateSelectorListCell:(id)arg1 forItem:(id)arg2;
- (void)_didTapDateButton:(id)arg1;
- (void)_handleFrequencyChanged:(unsigned long long)arg1;
- (void)_toggleShowStartDateSelector;
- (id)amount;
- (void)amountDidChange:(id)arg1;
- (id)cellRegistrationForItem:(id)arg1;
- (id)currency;
- (void)dateSelectorCollectionViewCell:(id)arg1 didUpdateDate:(id)arg2;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (unsigned long long)frequency;
- (id)frequencyOptions;
- (bool)hideAmount;
- (id)identifiers;
- (id)initWithRecurringPayment:(id)arg1 productTimeZone:(id)arg2 mode:(unsigned long long)arg3 delegate:(id)arg4;
- (bool)isEditable;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)reloadItemsAnimated:(bool)arg1;
- (void)setCurrency:(id)arg1;
- (void)setFrequencyOptions:(id)arg1;
- (void)setHideAmount:(bool)arg1;
- (void)setIsEditable:(bool)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setTitleColor:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)startDate;
- (unsigned long long)status;
- (id)titleColor;
- (void)updateWithRecurringPayment:(id)arg1;

@end

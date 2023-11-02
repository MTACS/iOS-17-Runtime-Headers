
@interface PKThresholdTopUpSelectionSectionController : NSObject <PKDynamicSectionController> {
    bool  _amountIsExpanded;
    NSArray * _amountSuggestions;
    NSString * _amountTitle;
    NSString * _currencyCode;
    NSDecimalNumber * _currentAmount;
    NSString * _currentPaymentMethodIdentifier;
    NSString * _currentPaymentMethodName;
    NSDecimalNumber * _currentThreshold;
    <PKThresholdTopUpSelectionSectionControllerDelegate> * _delegate;
    bool  _editing;
    bool  _enabled;
    NSDecimalNumber * _originalAmount;
    NSString * _originalPaymentMethodIdentifier;
    NSString * _originalPaymentMethodName;
    NSDecimalNumber * _originalThreshold;
    NSString * _paymentMethodTitle;
    bool  _thresholdIsExpanded;
    NSArray * _thresholdSuggestions;
    NSString * _thresholdTitle;
    long long  _viewStyle;
}

@property (nonatomic, retain) NSString *amountTitle;
@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (nonatomic, readonly) NSDecimalNumber *currentAmount;
@property (nonatomic, readonly) NSDecimalNumber *currentThreshold;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editing;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *identifiers;
@property (nonatomic, retain) NSString *paymentMethodTitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *thresholdTitle;
@property (nonatomic, readonly) bool valuesEdited;

- (void).cxx_destruct;
- (id)_buttonAccessoryForItem:(id)arg1;
- (id)amountTitle;
- (void)applyUpdate;
- (id)cellRegistrationForItem:(id)arg1;
- (id)currentAmount;
- (id)currentThreshold;
- (void)didSelectItem:(id)arg1;
- (bool)editing;
- (bool)enabled;
- (id)identifiers;
- (id)initWithAmountSuggestions:(id)arg1 selectedAmount:(id)arg2 thresholdSuggestions:(id)arg3 selectedThreshold:(id)arg4 currencyCode:(id)arg5 paymentMethodName:(id)arg6 paymentMethodIdentifier:(id)arg7 viewStyle:(long long)arg8 delegate:(id)arg9;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)paymentMethodTitle;
- (void)setAmountTitle:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setPaymentMethodTitle:(id)arg1;
- (void)setThresholdTitle:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)thresholdTitle;
- (void)updatePaymentMethod:(id)arg1;
- (bool)valuesEdited;

@end

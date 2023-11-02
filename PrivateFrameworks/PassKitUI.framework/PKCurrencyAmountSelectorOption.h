
@interface PKCurrencyAmountSelectorOption : NSObject <PKSpendNotificationLimitViewControllerItem> {
    PKCurrencyAmount * _currencyAmount;
    NSString * _displayValue;
    bool  _isCustomOption;
    bool  _selected;
}

@property (nonatomic, readonly) PKCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayValue;
@property (nonatomic, readonly) long long editingStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCustomOption;
@property (nonatomic, readonly) bool selected;
@property (readonly) Class superclass;

+ (id)cellReuseIdentifier;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)currencyAmount;
- (id)displayValue;
- (long long)editingStyle;
- (unsigned long long)hash;
- (id)initWithCurrencyAmount:(id)arg1 displayValue:(id)arg2 customOption:(bool)arg3 selected:(bool)arg4;
- (bool)isCustomOption;
- (bool)isEqual:(id)arg1;
- (bool)selected;
- (bool)shouldHighlight;
- (id)tableViewCellForTableView:(id)arg1 atIndexPath:(id)arg2;

@end

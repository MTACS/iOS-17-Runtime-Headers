
@interface PKCurrencyAmountSelectorOptionProvider : NSObject {
    PKAccountUser * _accountUser;
    NSDecimalNumber * _amount;
    NSString * _currencyCode;
    NSArray * _customAmounts;
    NSArray * _defaultAmounts;
    NSArray * _options;
    id /* block */  _optionsUpdateHandler;
    PKCurrencyAmountSelectorOption * _selectedOption;
    long long  _type;
}

@property (nonatomic, readonly) NSDecimalNumber *amount;
@property (nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, readonly) NSArray *options;
@property (nonatomic, copy) id /* block */ optionsUpdateHandler;
@property (nonatomic, readonly) PKCurrencyAmountSelectorOption *selectedOption;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)_optionWithAmount:(id)arg1 isCustom:(bool)arg2 selected:(bool)arg3;
- (void)_updateOptions;
- (id)amount;
- (id)currencyCode;
- (id)initWithType:(long long)arg1 accountUser:(id)arg2 currencyCode:(id)arg3;
- (void)insertCustomAmount:(id)arg1;
- (id)options;
- (id /* block */)optionsUpdateHandler;
- (void)removeCustomAmount:(id)arg1;
- (void)selectAmount:(id)arg1;
- (id)selectedOption;
- (void)setOptionsUpdateHandler:(id /* block */)arg1;
- (long long)type;

@end


@interface PKEnteredValueActionItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _currency;
    NSArray * _defaultSuggestions;
    NSArray * _lowBalanceReminderOptions;
    bool  _maxAmountIncludesLocalBalance;
    NSDecimalNumber * _maxLoadAmount;
    NSDecimalNumber * _maxLoadedBalance;
    NSDecimalNumber * _minLoadAmount;
    NSDecimalNumber * _minLoadedBalance;
    NSDictionary * _serviceProviderData;
}

@property (nonatomic, readonly, copy) NSString *currency;
@property (nonatomic, readonly, copy) NSArray *defaultSuggestions;
@property (nonatomic, readonly, copy) NSArray *lowBalanceReminderOptions;
@property (nonatomic, readonly, copy) NSDecimalNumber *maxAmount;
@property (nonatomic, readonly) bool maxAmountIncludesLocalBalance;
@property (nonatomic, readonly, copy) NSDecimalNumber *maxLoadAmount;
@property (nonatomic, readonly, copy) NSDecimalNumber *maxLoadedBalance;
@property (nonatomic, readonly, copy) NSDecimalNumber *minAmount;
@property (nonatomic, readonly, copy) NSDecimalNumber *minLoadAmount;
@property (nonatomic, readonly, copy) NSDecimalNumber *minLoadedBalance;
@property (nonatomic, readonly, copy) NSDictionary *serviceProviderData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_processLocalizableStrings:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currency;
- (id)defaultSuggestions;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)lowBalanceReminderOptions;
- (id)maxAmount;
- (bool)maxAmountIncludesLocalBalance;
- (id)maxLoadAmount;
- (id)maxLoadedBalance;
- (id)minAmount;
- (id)minLoadAmount;
- (id)minLoadedBalance;
- (id)serviceProviderData;

@end

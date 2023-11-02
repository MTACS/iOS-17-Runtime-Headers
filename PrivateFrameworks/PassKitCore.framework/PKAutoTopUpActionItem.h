
@interface PKAutoTopUpActionItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _currency;
    NSArray * _defaultAmountSuggestions;
    NSArray * _defaultThresholdSuggestions;
    NSArray * _lowBalanceReminderOptions;
    NSDictionary * _serviceProviderData;
}

@property (nonatomic, readonly, copy) NSString *currency;
@property (nonatomic, readonly, copy) NSArray *defaultAmountSuggestions;
@property (nonatomic, readonly, copy) NSArray *defaultThresholdSuggestions;
@property (nonatomic, readonly, copy) NSArray *lowBalanceReminderOptions;
@property (nonatomic, readonly, copy) NSDictionary *serviceProviderData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_processLocalizableStrings:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currency;
- (id)defaultAmountSuggestions;
- (id)defaultThresholdSuggestions;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)lowBalanceReminderOptions;
- (id)serviceProviderData;

@end

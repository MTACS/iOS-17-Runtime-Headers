
@interface PKPaymentPreferenceShippingMethod : PKPaymentPreference {
    NSString * _currency;
}

@property (nonatomic, copy) NSString *currency;

- (void).cxx_destruct;
- (id)currency;
- (void)setCurrency:(id)arg1;
- (bool)supportsDeletion;

@end

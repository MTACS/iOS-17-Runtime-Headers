
@interface PKPeerPaymentRecurringPaymentAmountDetailRowItem : PKPeerPaymentRecurringPaymentDetailRowItem {
    NSDecimalNumber * _amount;
    NSString * _currency;
    NSString * _title;
}

@property (nonatomic, retain) NSDecimalNumber *amount;
@property (nonatomic, retain) NSString *currency;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)amount;
- (id)currency;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setAmount:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

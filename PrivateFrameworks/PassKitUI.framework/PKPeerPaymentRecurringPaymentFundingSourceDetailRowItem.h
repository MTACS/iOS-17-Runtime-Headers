
@interface PKPeerPaymentRecurringPaymentFundingSourceDetailRowItem : PKPeerPaymentRecurringPaymentDetailRowItem {
    NSString * _name;
    NSString * _title;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

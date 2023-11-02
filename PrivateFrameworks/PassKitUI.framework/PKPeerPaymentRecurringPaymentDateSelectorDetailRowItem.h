
@interface PKPeerPaymentRecurringPaymentDateSelectorDetailRowItem : PKPeerPaymentRecurringPaymentDetailRowItem {
    NSDate * _date;
    NSDate * _maximumDate;
    NSDate * _minimumDate;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSDate *maximumDate;
@property (nonatomic, retain) NSDate *minimumDate;

- (void).cxx_destruct;
- (id)date;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)maximumDate;
- (id)minimumDate;
- (void)setDate:(id)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;

@end

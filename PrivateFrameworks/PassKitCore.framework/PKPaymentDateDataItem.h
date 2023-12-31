
@interface PKPaymentDateDataItem : PKPaymentDataItem {
    NSDate * _paymentDate;
    long long  _paymentFrequency;
    NSTimeZone * _paymentTimeZone;
}

@property (nonatomic, retain) NSDate *paymentDate;
@property (nonatomic) long long paymentFrequency;
@property (nonatomic, retain) NSTimeZone *paymentTimeZone;

+ (long long)dataType;

- (void).cxx_destruct;
- (long long)context;
- (id)initWithModel:(id)arg1;
- (bool)isValidWithError:(id*)arg1;
- (id)paymentDate;
- (long long)paymentFrequency;
- (id)paymentTimeZone;
- (void)setPaymentDate:(id)arg1;
- (void)setPaymentFrequency:(long long)arg1;
- (void)setPaymentTimeZone:(id)arg1;

@end

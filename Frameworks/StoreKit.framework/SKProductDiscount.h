
@interface SKProductDiscount : NSObject {
    id  _internal;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long numberOfPeriods;
@property (nonatomic, readonly) unsigned long long paymentMode;
@property (nonatomic, readonly) NSDecimalNumber *price;
@property (nonatomic, readonly) NSLocale *priceLocale;
@property (nonatomic, readonly) SKProductSubscriptionPeriod *subscriptionPeriod;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (void)_setIdentifier:(id)arg1;
- (void)_setNumberOfPeriods:(unsigned long long)arg1;
- (void)_setPaymentMode:(unsigned long long)arg1;
- (void)_setPrice:(id)arg1;
- (void)_setPriceLocale:(id)arg1;
- (void)_setSubscriptionPeriod:(id)arg1;
- (void)_setType:(unsigned long long)arg1;
- (id)identifier;
- (id)init;
- (unsigned long long)numberOfPeriods;
- (unsigned long long)paymentMode;
- (id)price;
- (id)priceLocale;
- (id)subscriptionPeriod;
- (unsigned long long)type;

@end

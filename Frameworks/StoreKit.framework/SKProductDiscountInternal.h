
@interface SKProductDiscountInternal : NSObject {
    NSString * _identifier;
    unsigned long long  _numberOfPeriods;
    unsigned long long  _paymentMode;
    NSDecimalNumber * _price;
    NSLocale * _priceLocale;
    SKProductSubscriptionPeriod * _subscriptionPeriod;
    unsigned long long  _type;
}

- (void).cxx_destruct;

@end

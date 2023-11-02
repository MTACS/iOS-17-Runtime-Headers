
@protocol _INPBListRideOptionsIntentResponse <NSObject>

@required

+ (Class)paymentMethodsType;
+ (Class)rideOptionsType;

- (void)addPaymentMethods:(_INPBPaymentMethodValue *)arg1;
- (void)addRideOptions:(_INPBRideOption *)arg1;
- (void)clearPaymentMethods;
- (void)clearRideOptions;
- (_INPBTimestamp *)expirationDate;
- (bool)hasExpirationDate;
- (bool)hasSupportsApplePayForPayment;
- (NSArray *)paymentMethods;
- (_INPBPaymentMethodValue *)paymentMethodsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentMethodsCount;
- (NSArray *)rideOptions;
- (_INPBRideOption *)rideOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)rideOptionsCount;
- (void)setExpirationDate:(_INPBTimestamp *)arg1;
- (void)setHasSupportsApplePayForPayment:(bool)arg1;
- (void)setPaymentMethods:(NSArray *)arg1;
- (void)setRideOptions:(NSArray *)arg1;
- (void)setSupportsApplePayForPayment:(bool)arg1;
- (bool)supportsApplePayForPayment;

@end

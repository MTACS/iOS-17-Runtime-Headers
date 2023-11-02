
@protocol GEOTransitFare <NSObject>

@required

- (bool)cashOnly;
- (NSString *)currencyCode;
- (NSArray *)supportedICCardProviders;
- (unsigned int*)supportedPaymentMethodIndexs;
- (unsigned long long)supportedPaymentMethodIndexsCount;
- (long long)type;
- (NSDecimalNumber *)value;

@end

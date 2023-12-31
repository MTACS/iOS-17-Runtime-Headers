
@protocol INListRideOptionsIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSDate *)expirationDate;
- (NSArray *)paymentMethods;
- (NSArray *)rideOptions;
- (void)setExpirationDate:(NSDate *)arg1;
- (void)setPaymentMethods:(NSArray *)arg1;
- (void)setRideOptions:(NSArray *)arg1;

@end

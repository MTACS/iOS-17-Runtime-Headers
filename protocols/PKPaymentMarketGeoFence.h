
@protocol PKPaymentMarketGeoFence <NSObject, NSSecureCoding>

@required

- (bool)containsLocation:(CLLocation *)arg1;
- (double)distanceFromLocation:(CLLocation *)arg1;
- (id)initWithDictionary:(NSDictionary *)arg1;

@end

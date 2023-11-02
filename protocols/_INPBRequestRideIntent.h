
@protocol _INPBRequestRideIntent <NSObject>

@required

- (_INPBLocation *)dropOffLocation;
- (bool)hasDropOffLocation;
- (bool)hasIntentMetadata;
- (bool)hasPartySize;
- (bool)hasPaymentMethod;
- (bool)hasPaymentMethodName;
- (bool)hasPickupLocation;
- (bool)hasPickupTime;
- (bool)hasRideOptionName;
- (bool)hasScheduledPickupTime;
- (bool)hasUsesApplePayForPayment;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBInteger *)partySize;
- (_INPBPaymentMethod *)paymentMethod;
- (_INPBDataString *)paymentMethodName;
- (_INPBLocation *)pickupLocation;
- (_INPBDateTimeRange *)pickupTime;
- (_INPBDataString *)rideOptionName;
- (_INPBDateTimeRange *)scheduledPickupTime;
- (void)setDropOffLocation:(_INPBLocation *)arg1;
- (void)setHasUsesApplePayForPayment:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setPartySize:(_INPBInteger *)arg1;
- (void)setPaymentMethod:(_INPBPaymentMethod *)arg1;
- (void)setPaymentMethodName:(_INPBDataString *)arg1;
- (void)setPickupLocation:(_INPBLocation *)arg1;
- (void)setPickupTime:(_INPBDateTimeRange *)arg1;
- (void)setRideOptionName:(_INPBDataString *)arg1;
- (void)setScheduledPickupTime:(_INPBDateTimeRange *)arg1;
- (void)setUsesApplePayForPayment:(bool)arg1;
- (bool)usesApplePayForPayment;

@end

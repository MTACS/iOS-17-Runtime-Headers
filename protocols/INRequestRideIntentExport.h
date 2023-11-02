
@protocol INRequestRideIntentExport <NSObject, JSExport>

@required

- (CLPlacemark *)dropOffLocation;
- (id)init;
- (NSNumber *)partySize;
- (INPaymentMethod *)paymentMethod;
- (CLPlacemark *)pickupLocation;
- (INSpeakableString *)rideOptionName;
- (INDateComponentsRange *)scheduledPickupTime;
- (void)setDropOffLocation:(CLPlacemark *)arg1;
- (void)setPartySize:(NSNumber *)arg1;
- (void)setPaymentMethod:(INPaymentMethod *)arg1;
- (void)setPickupLocation:(CLPlacemark *)arg1;
- (void)setRideOptionName:(INSpeakableString *)arg1;
- (void)setScheduledPickupTime:(INDateComponentsRange *)arg1;

@end

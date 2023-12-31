
@protocol INGetAvailableRestaurantReservationBookingsIntentResponseExport <NSObject, JSExport>

@required

- (NSArray *)availableBookings;
- (long long)code;
- (id)init;
- (NSString *)localizedBookingAdvisementText;
- (NSString *)localizedRestaurantDescriptionText;
- (void)setLocalizedBookingAdvisementText:(NSString *)arg1;
- (void)setLocalizedRestaurantDescriptionText:(NSString *)arg1;
- (void)setTermsAndConditions:(INTermsAndConditions *)arg1;
- (INTermsAndConditions *)termsAndConditions;

@end


@protocol INGetUserCurrentRestaurantReservationBookingsIntentExport <NSObject, JSExport>

@required

- (NSDate *)earliestBookingDateForResults;
- (id)init;
- (NSNumber *)maximumNumberOfResults;
- (NSString *)reservationIdentifier;
- (INRestaurant *)restaurant;
- (void)setEarliestBookingDateForResults:(NSDate *)arg1;
- (void)setMaximumNumberOfResults:(NSNumber *)arg1;
- (void)setReservationIdentifier:(NSString *)arg1;
- (void)setRestaurant:(INRestaurant *)arg1;

@end

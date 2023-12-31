
@protocol INGetAvailableRestaurantReservationBookingsIntentExport <NSObject, JSExport>

@required

- (NSDate *)earliestBookingDateForResults;
- (id)init;
- (NSDate *)latestBookingDateForResults;
- (NSNumber *)maximumNumberOfResults;
- (unsigned long long)partySize;
- (NSDateComponents *)preferredBookingDateComponents;
- (INRestaurant *)restaurant;
- (void)setEarliestBookingDateForResults:(NSDate *)arg1;
- (void)setLatestBookingDateForResults:(NSDate *)arg1;
- (void)setMaximumNumberOfResults:(NSNumber *)arg1;
- (void)setPartySize:(unsigned long long)arg1;
- (void)setPreferredBookingDateComponents:(NSDateComponents *)arg1;
- (void)setRestaurant:(INRestaurant *)arg1;

@end

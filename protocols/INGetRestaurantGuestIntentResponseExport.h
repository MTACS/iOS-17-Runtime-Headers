
@protocol INGetRestaurantGuestIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (INRestaurantGuest *)guest;
- (INRestaurantGuestDisplayPreferences *)guestDisplayPreferences;
- (id)init;
- (void)setGuest:(INRestaurantGuest *)arg1;
- (void)setGuestDisplayPreferences:(INRestaurantGuestDisplayPreferences *)arg1;

@end

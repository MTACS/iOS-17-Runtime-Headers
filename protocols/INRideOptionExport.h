
@protocol INRideOptionExport <NSObject, JSExport>

@required

- (NSArray *)availablePartySizeOptions;
- (NSString *)availablePartySizeOptionsSelectionPrompt;
- (NSString *)disclaimerMessage;
- (NSDate *)estimatedPickupDate;
- (NSArray *)fareLineItems;
- (id)init;
- (NSString *)name;
- (INPriceRange *)priceRange;
- (void)setAvailablePartySizeOptions:(NSArray *)arg1;
- (void)setAvailablePartySizeOptionsSelectionPrompt:(NSString *)arg1;
- (void)setDisclaimerMessage:(NSString *)arg1;
- (void)setEstimatedPickupDate:(NSDate *)arg1;
- (void)setFareLineItems:(NSArray *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setPriceRange:(INPriceRange *)arg1;
- (void)setSpecialPricing:(NSString *)arg1;
- (void)setSpecialPricingBadgeImage:(INImage *)arg1;
- (void)setUserActivityForBookingInApplication:(NSUserActivity *)arg1;
- (void)setUsesMeteredFare:(NSNumber *)arg1;
- (NSString *)specialPricing;
- (INImage *)specialPricingBadgeImage;
- (NSUserActivity *)userActivityForBookingInApplication;
- (NSNumber *)usesMeteredFare;

@end

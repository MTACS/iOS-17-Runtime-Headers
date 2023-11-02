
@protocol _INPBRideOption <NSObject>

@required

+ (Class)availablePartySizeOptionsType;
+ (Class)fareLineItemsType;

- (void)addAvailablePartySizeOptions:(_INPBRidePartySizeOption *)arg1;
- (void)addFareLineItems:(_INPBRideFareLineItem *)arg1;
- (NSArray *)availablePartySizeOptions;
- (_INPBRidePartySizeOption *)availablePartySizeOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)availablePartySizeOptionsCount;
- (NSString *)availablePartySizeOptionsSelectionPrompt;
- (void)clearAvailablePartySizeOptions;
- (void)clearFareLineItems;
- (NSString *)disclaimerMessage;
- (_INPBTimestamp *)estimatedPickupDate;
- (NSArray *)fareLineItems;
- (_INPBRideFareLineItem *)fareLineItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fareLineItemsCount;
- (bool)hasAvailablePartySizeOptionsSelectionPrompt;
- (bool)hasDisclaimerMessage;
- (bool)hasEstimatedPickupDate;
- (bool)hasName;
- (bool)hasPriceRange;
- (bool)hasSpecialPricing;
- (bool)hasSpecialPricingBadgeImage;
- (bool)hasSubtitle;
- (bool)hasUserActivityForBookingInApplication;
- (bool)hasUsesMeteredFare;
- (NSString *)name;
- (_INPBPriceRangeValue *)priceRange;
- (void)setAvailablePartySizeOptions:(NSArray *)arg1;
- (void)setAvailablePartySizeOptionsSelectionPrompt:(NSString *)arg1;
- (void)setDisclaimerMessage:(NSString *)arg1;
- (void)setEstimatedPickupDate:(_INPBTimestamp *)arg1;
- (void)setFareLineItems:(NSArray *)arg1;
- (void)setHasUsesMeteredFare:(bool)arg1;
- (void)setName:(NSString *)arg1;
- (void)setPriceRange:(_INPBPriceRangeValue *)arg1;
- (void)setSpecialPricing:(NSString *)arg1;
- (void)setSpecialPricingBadgeImage:(_INPBImageValue *)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setUserActivityForBookingInApplication:(_INPBUserActivity *)arg1;
- (void)setUsesMeteredFare:(bool)arg1;
- (NSString *)specialPricing;
- (_INPBImageValue *)specialPricingBadgeImage;
- (NSString *)subtitle;
- (_INPBUserActivity *)userActivityForBookingInApplication;
- (bool)usesMeteredFare;

@end

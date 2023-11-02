
@protocol AMSDeviceOffersTracking <NSObject>

@required

- (NSArray *)cachedRegistrationGroups;
- (NSArray *)companionSerialNumbers;
- (NSDictionary *)deviceOfferEligibility;
- (NSArray *)deviceOffers;
- (NSArray *)deviceRegistrationDenyList;
- (void)removeCachedRegistrationItem:(AMSDeviceOfferRegistrationItem *)arg1;
- (void)setCachedRegistrationGroups:(NSArray *)arg1;
- (void)setDeviceOfferEligibility:(NSDictionary *)arg1;
- (void)setDeviceOffers:(NSArray *)arg1;
- (void)setDeviceRegistrationDenyList:(NSArray *)arg1;

@end


@interface AMSDeviceOffersStore : NSObject <AMSDeviceOffersTracking>

@property (nonatomic, retain) NSArray *cachedRegistrationGroups;
@property (nonatomic, readonly) NSArray *companionSerialNumbers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *deviceOfferEligibility;
@property (nonatomic, retain) NSArray *deviceOffers;
@property (nonatomic, retain) NSArray *deviceRegistrationDenyList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serialsBySubtractingAGroups:(id)arg1 fromBGroups:(id)arg2;
+ (id)serialsFromGroups:(id)arg1;
+ (id)splitGroups:(id)arg1 byItem:(id)arg2;

- (void)_dbSetNullableValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)cachedRegistrationGroups;
- (id)companionSerialNumbers;
- (id)deviceOfferEligibility;
- (id)deviceOffers;
- (id)deviceRegistrationDenyList;
- (void)removeCachedRegistrationItem:(id)arg1;
- (void)setCachedRegistrationGroups:(id)arg1;
- (void)setDeviceOfferEligibility:(id)arg1;
- (void)setDeviceOffers:(id)arg1;
- (void)setDeviceRegistrationDenyList:(id)arg1;

@end

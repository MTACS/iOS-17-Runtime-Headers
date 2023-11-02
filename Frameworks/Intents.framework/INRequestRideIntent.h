
@interface INRequestRideIntent : INIntent <INRequestRideIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) CLPlacemark *dropOffLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *partySize;
@property (nonatomic, readonly, copy) INPaymentMethod *paymentMethod;
@property (nonatomic, readonly, copy) CLPlacemark *pickupLocation;
@property (nonatomic, readonly, copy) INSpeakableString *rideOptionName;
@property (nonatomic, readonly, copy) INDateComponentsRange *scheduledPickupTime;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_ignoredParameters;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (bool)_isUserConfirmationRequired;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)dropOffLocation;
- (id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOptionName:(id)arg3 partySize:(id)arg4 paymentMethod:(id)arg5;
- (id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOptionName:(id)arg3 partySize:(id)arg4 paymentMethod:(id)arg5 scheduledPickupTime:(id)arg6;
- (id)parametersByName;
- (id)partySize;
- (id)paymentMethod;
- (id)pickupLocation;
- (id)rideOptionName;
- (id)scheduledPickupTime;
- (void)setDomain:(id)arg1;
- (void)setDropOffLocation:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPartySize:(id)arg1;
- (void)setPaymentMethod:(id)arg1;
- (void)setPickupLocation:(id)arg1;
- (void)setRideOptionName:(id)arg1;
- (void)setScheduledPickupTime:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)atx_getArgsInto:(id)arg1;

@end

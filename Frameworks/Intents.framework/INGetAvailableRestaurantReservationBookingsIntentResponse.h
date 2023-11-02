
@interface INGetAvailableRestaurantReservationBookingsIntentResponse : INIntentResponse <INGetAvailableRestaurantReservationBookingsIntentResponseExport, INImageProxyInjecting> {
    NSArray * _availableBookings;
    NSString * _localizedBookingAdvisementText;
    NSString * _localizedRestaurantDescriptionText;
    INTermsAndConditions * _termsAndConditions;
}

@property (nonatomic, readonly) NSArray *availableBookings;
@property (nonatomic, readonly) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localizedBookingAdvisementText;
@property (nonatomic, copy) NSString *localizedRestaurantDescriptionText;
@property (readonly) Class superclass;
@property (nonatomic, copy) INTermsAndConditions *termsAndConditions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)availableBookings;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAvailableBookings:(id)arg1 code:(long long)arg2 userActivity:(id)arg3;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedBookingAdvisementText;
- (id)localizedRestaurantDescriptionText;
- (void)setLocalizedBookingAdvisementText:(id)arg1;
- (void)setLocalizedRestaurantDescriptionText:(id)arg1;
- (void)setTermsAndConditions:(id)arg1;
- (id)termsAndConditions;

@end

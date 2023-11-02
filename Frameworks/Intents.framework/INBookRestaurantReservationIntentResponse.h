
@interface INBookRestaurantReservationIntentResponse : INIntentResponse <INBookRestaurantReservationIntentResponseExport, INImageProxyInjecting> {
    INRestaurantReservationUserBooking * _userBooking;
}

@property (nonatomic, readonly) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) INRestaurantReservationUserBooking *userBooking;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setUserBooking:(id)arg1;
- (id)userBooking;

@end

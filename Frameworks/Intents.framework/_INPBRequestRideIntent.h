
@interface _INPBRequestRideIntent : PBCodable <NSCopying, NSSecureCoding, _INPBRequestRideIntent> {
    _INPBLocation * _dropOffLocation;
    struct { 
        unsigned int usesApplePayForPayment : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBInteger * _partySize;
    _INPBPaymentMethod * _paymentMethod;
    _INPBDataString * _paymentMethodName;
    _INPBLocation * _pickupLocation;
    _INPBDateTimeRange * _pickupTime;
    _INPBDataString * _rideOptionName;
    _INPBDateTimeRange * _scheduledPickupTime;
    bool  _usesApplePayForPayment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBLocation *dropOffLocation;
@property (nonatomic, readonly) bool hasDropOffLocation;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasPartySize;
@property (nonatomic, readonly) bool hasPaymentMethod;
@property (nonatomic, readonly) bool hasPaymentMethodName;
@property (nonatomic, readonly) bool hasPickupLocation;
@property (nonatomic, readonly) bool hasPickupTime;
@property (nonatomic, readonly) bool hasRideOptionName;
@property (nonatomic, readonly) bool hasScheduledPickupTime;
@property (nonatomic) bool hasUsesApplePayForPayment;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBInteger *partySize;
@property (nonatomic, retain) _INPBPaymentMethod *paymentMethod;
@property (nonatomic, retain) _INPBDataString *paymentMethodName;
@property (nonatomic, retain) _INPBLocation *pickupLocation;
@property (nonatomic, retain) _INPBDateTimeRange *pickupTime;
@property (nonatomic, retain) _INPBDataString *rideOptionName;
@property (nonatomic, retain) _INPBDateTimeRange *scheduledPickupTime;
@property (readonly) Class superclass;
@property (nonatomic) bool usesApplePayForPayment;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)dropOffLocation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDropOffLocation;
- (bool)hasIntentMetadata;
- (bool)hasPartySize;
- (bool)hasPaymentMethod;
- (bool)hasPaymentMethodName;
- (bool)hasPickupLocation;
- (bool)hasPickupTime;
- (bool)hasRideOptionName;
- (bool)hasScheduledPickupTime;
- (bool)hasUsesApplePayForPayment;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)partySize;
- (id)paymentMethod;
- (id)paymentMethodName;
- (id)pickupLocation;
- (id)pickupTime;
- (bool)readFrom:(id)arg1;
- (id)rideOptionName;
- (id)scheduledPickupTime;
- (void)setDropOffLocation:(id)arg1;
- (void)setHasUsesApplePayForPayment:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPartySize:(id)arg1;
- (void)setPaymentMethod:(id)arg1;
- (void)setPaymentMethodName:(id)arg1;
- (void)setPickupLocation:(id)arg1;
- (void)setPickupTime:(id)arg1;
- (void)setRideOptionName:(id)arg1;
- (void)setScheduledPickupTime:(id)arg1;
- (void)setUsesApplePayForPayment:(bool)arg1;
- (bool)usesApplePayForPayment;
- (void)writeTo:(id)arg1;

@end

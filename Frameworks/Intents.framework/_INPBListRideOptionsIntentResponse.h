
@interface _INPBListRideOptionsIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBListRideOptionsIntentResponse> {
    _INPBTimestamp * _expirationDate;
    struct { 
        unsigned int supportsApplePayForPayment : 1; 
    }  _has;
    NSArray * _paymentMethods;
    NSArray * _rideOptions;
    bool  _supportsApplePayForPayment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBTimestamp *expirationDate;
@property (nonatomic, readonly) bool hasExpirationDate;
@property (nonatomic) bool hasSupportsApplePayForPayment;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *paymentMethods;
@property (nonatomic, readonly) unsigned long long paymentMethodsCount;
@property (nonatomic, copy) NSArray *rideOptions;
@property (nonatomic, readonly) unsigned long long rideOptionsCount;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsApplePayForPayment;

+ (Class)paymentMethodsType;
+ (Class)rideOptionsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addPaymentMethods:(id)arg1;
- (void)addRideOptions:(id)arg1;
- (void)clearPaymentMethods;
- (void)clearRideOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (bool)hasExpirationDate;
- (bool)hasSupportsApplePayForPayment;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)paymentMethods;
- (id)paymentMethodsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentMethodsCount;
- (bool)readFrom:(id)arg1;
- (id)rideOptions;
- (id)rideOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)rideOptionsCount;
- (void)setExpirationDate:(id)arg1;
- (void)setHasSupportsApplePayForPayment:(bool)arg1;
- (void)setPaymentMethods:(id)arg1;
- (void)setRideOptions:(id)arg1;
- (void)setSupportsApplePayForPayment:(bool)arg1;
- (bool)supportsApplePayForPayment;
- (void)writeTo:(id)arg1;

@end

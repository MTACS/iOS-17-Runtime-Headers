
@interface _SFPBFlight : PBCodable <NSSecureCoding, _SFPBFlight> {
    NSString * _carrierCode;
    NSString * _carrierName;
    NSString * _carrierPhoneNumber;
    NSString * _carrierWebsite;
    NSString * _flightID;
    NSString * _flightNumber;
    NSArray * _legs;
    NSString * _operatorCarrierCode;
    NSString * _operatorFlightNumber;
}

@property (nonatomic, copy) NSString *carrierCode;
@property (nonatomic, copy) NSString *carrierName;
@property (nonatomic, copy) NSString *carrierPhoneNumber;
@property (nonatomic, copy) NSString *carrierWebsite;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *flightID;
@property (nonatomic, copy) NSString *flightNumber;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *legs;
@property (nonatomic, copy) NSString *operatorCarrierCode;
@property (nonatomic, copy) NSString *operatorFlightNumber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addLegs:(id)arg1;
- (id)carrierCode;
- (id)carrierName;
- (id)carrierPhoneNumber;
- (id)carrierWebsite;
- (void)clearLegs;
- (id)dictionaryRepresentation;
- (id)flightID;
- (id)flightNumber;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)legs;
- (id)legsAtIndex:(unsigned long long)arg1;
- (unsigned long long)legsCount;
- (id)operatorCarrierCode;
- (id)operatorFlightNumber;
- (bool)readFrom:(id)arg1;
- (void)setCarrierCode:(id)arg1;
- (void)setCarrierName:(id)arg1;
- (void)setCarrierPhoneNumber:(id)arg1;
- (void)setCarrierWebsite:(id)arg1;
- (void)setFlightID:(id)arg1;
- (void)setFlightNumber:(id)arg1;
- (void)setLegs:(id)arg1;
- (void)setOperatorCarrierCode:(id)arg1;
- (void)setOperatorFlightNumber:(id)arg1;
- (void)writeTo:(id)arg1;

@end

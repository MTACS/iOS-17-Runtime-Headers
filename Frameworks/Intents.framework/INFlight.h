
@interface INFlight : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    INAirline * _airline;
    INAirportGate * _arrivalAirportGate;
    INDateComponentsRange * _boardingTime;
    INAirportGate * _departureAirportGate;
    INDateComponentsRange * _flightDuration;
    NSString * _flightNumber;
}

@property (nonatomic, readonly, copy) INAirline *airline;
@property (nonatomic, readonly, copy) INAirportGate *arrivalAirportGate;
@property (nonatomic, readonly, copy) INDateComponentsRange *boardingTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) INAirportGate *departureAirportGate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INDateComponentsRange *flightDuration;
@property (nonatomic, readonly, copy) NSString *flightNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)airline;
- (id)arrivalAirportGate;
- (id)boardingTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departureAirportGate;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)flightDuration;
- (id)flightNumber;
- (unsigned long long)hash;
- (id)initWithAirline:(id)arg1 flightNumber:(id)arg2 boardingTime:(id)arg3 flightDuration:(id)arg4 departureAirportGate:(id)arg5 arrivalAirportGate:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end

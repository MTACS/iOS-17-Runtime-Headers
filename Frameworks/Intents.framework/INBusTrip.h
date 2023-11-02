
@interface INBusTrip : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    CLPlacemark * _arrivalBusStopLocation;
    NSString * _arrivalPlatform;
    NSString * _busName;
    NSString * _busNumber;
    CLPlacemark * _departureBusStopLocation;
    NSString * _departurePlatform;
    NSString * _provider;
    INDateComponentsRange * _tripDuration;
}

@property (nonatomic, readonly, copy) CLPlacemark *arrivalBusStopLocation;
@property (nonatomic, readonly, copy) NSString *arrivalPlatform;
@property (nonatomic, readonly, copy) NSString *busName;
@property (nonatomic, readonly, copy) NSString *busNumber;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) CLPlacemark *departureBusStopLocation;
@property (nonatomic, readonly, copy) NSString *departurePlatform;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *provider;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INDateComponentsRange *tripDuration;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)arrivalBusStopLocation;
- (id)arrivalPlatform;
- (id)busName;
- (id)busNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departureBusStopLocation;
- (id)departurePlatform;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProvider:(id)arg1 busName:(id)arg2 busNumber:(id)arg3 tripDuration:(id)arg4 departureBusStopLocation:(id)arg5 departurePlatform:(id)arg6 arrivalBusStopLocation:(id)arg7 arrivalPlatform:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)provider;
- (id)tripDuration;

@end

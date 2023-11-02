
@interface INBoatTrip : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    CLPlacemark * _arrivalBoatTerminalLocation;
    NSString * _boatName;
    NSString * _boatNumber;
    CLPlacemark * _departureBoatTerminalLocation;
    NSString * _provider;
    INDateComponentsRange * _tripDuration;
}

@property (nonatomic, readonly, copy) CLPlacemark *arrivalBoatTerminalLocation;
@property (nonatomic, readonly, copy) NSString *boatName;
@property (nonatomic, readonly, copy) NSString *boatNumber;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) CLPlacemark *departureBoatTerminalLocation;
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
- (id)arrivalBoatTerminalLocation;
- (id)boatName;
- (id)boatNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departureBoatTerminalLocation;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProvider:(id)arg1 boatName:(id)arg2 boatNumber:(id)arg3 tripDuration:(id)arg4 departureBoatTerminalLocation:(id)arg5 arrivalBoatTerminalLocation:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)provider;
- (id)tripDuration;

@end

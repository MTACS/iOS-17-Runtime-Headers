
@interface INTrainTrip : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _arrivalPlatform;
    CLPlacemark * _arrivalStationLocation;
    NSString * _departurePlatform;
    CLPlacemark * _departureStationLocation;
    NSString * _provider;
    NSString * _trainName;
    NSString * _trainNumber;
    INDateComponentsRange * _tripDuration;
}

@property (nonatomic, readonly, copy) NSString *arrivalPlatform;
@property (nonatomic, readonly, copy) CLPlacemark *arrivalStationLocation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *departurePlatform;
@property (nonatomic, readonly, copy) CLPlacemark *departureStationLocation;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *provider;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *trainName;
@property (nonatomic, readonly, copy) NSString *trainNumber;
@property (nonatomic, readonly, copy) INDateComponentsRange *tripDuration;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)arrivalPlatform;
- (id)arrivalStationLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departurePlatform;
- (id)departureStationLocation;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProvider:(id)arg1 trainName:(id)arg2 trainNumber:(id)arg3 tripDuration:(id)arg4 departureStationLocation:(id)arg5 departurePlatform:(id)arg6 arrivalStationLocation:(id)arg7 arrivalPlatform:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)provider;
- (id)trainName;
- (id)trainNumber;
- (id)tripDuration;

@end

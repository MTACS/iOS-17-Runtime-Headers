
@interface SALocalSearchVehicleEventSearch : SADomainCommand

+ (id)vehicleEventSearch;
+ (id)vehicleEventSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end

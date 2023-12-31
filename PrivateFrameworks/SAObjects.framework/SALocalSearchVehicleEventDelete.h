
@interface SALocalSearchVehicleEventDelete : SADomainCommand

@property (nonatomic, copy) NSArray *eventIds;

+ (id)vehicleEventDelete;
+ (id)vehicleEventDeleteWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)eventIds;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setEventIds:(id)arg1;

@end

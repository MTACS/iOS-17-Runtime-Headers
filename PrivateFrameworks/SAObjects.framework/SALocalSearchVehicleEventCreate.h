
@interface SALocalSearchVehicleEventCreate : SADomainCommand

@property (nonatomic, retain) SALocation *location;
@property (nonatomic, copy) NSString *notes;

+ (id)vehicleEventCreate;
+ (id)vehicleEventCreateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)location;
- (id)notes;
- (bool)requiresResponse;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;

@end

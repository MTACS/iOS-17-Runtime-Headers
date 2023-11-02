
@interface SALocalSearchVehicleEvent : SADomainObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, retain) SALocation *location;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, copy) NSNumber *userSetLocation;
@property (nonatomic, copy) NSString *vehicleIdentifier;

+ (id)vehicleEvent;
+ (id)vehicleEventWithDictionary:(id)arg1 context:(id)arg2;

- (id)date;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)location;
- (id)notes;
- (void)setDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setUserSetLocation:(id)arg1;
- (void)setVehicleIdentifier:(id)arg1;
- (id)userSetLocation;
- (id)vehicleIdentifier;

@end

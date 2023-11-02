
@protocol _INPBHomeAutomationEntityProvider <NSObject>

@required

+ (Class)accessoryNamesType;
+ (Class)intentFromEntitiesType;
+ (Class)roomNamesType;
+ (Class)serviceGroupsType;
+ (Class)serviceNamesType;
+ (Class)zoneNamesType;

- (NSArray *)accessoryNames;
- (_INPBString *)accessoryNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)accessoryNamesCount;
- (void)addAccessoryNames:(_INPBString *)arg1;
- (void)addIntentFromEntities:(_INPBHomeAutomationFromEntity *)arg1;
- (void)addRoomNames:(_INPBString *)arg1;
- (void)addServiceGroups:(_INPBString *)arg1;
- (void)addServiceNames:(_INPBString *)arg1;
- (void)addZoneNames:(_INPBString *)arg1;
- (void)clearAccessoryNames;
- (void)clearIntentFromEntities;
- (void)clearRoomNames;
- (void)clearServiceGroups;
- (void)clearServiceNames;
- (void)clearZoneNames;
- (_INPBString *)destinationDeviceId;
- (bool)hasDestinationDeviceId;
- (bool)hasHomeName;
- (bool)hasIntentDeviceQuantifier;
- (bool)hasIntentDeviceType;
- (bool)hasIntentPlaceHint;
- (bool)hasIntentReference;
- (_INPBString *)homeName;
- (_INPBString *)intentDeviceQuantifier;
- (_INPBString *)intentDeviceType;
- (NSArray *)intentFromEntities;
- (_INPBHomeAutomationFromEntity *)intentFromEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentFromEntitiesCount;
- (_INPBString *)intentPlaceHint;
- (_INPBString *)intentReference;
- (NSArray *)roomNames;
- (_INPBString *)roomNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)roomNamesCount;
- (NSArray *)serviceGroups;
- (_INPBString *)serviceGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceGroupsCount;
- (NSArray *)serviceNames;
- (_INPBString *)serviceNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceNamesCount;
- (void)setAccessoryNames:(NSArray *)arg1;
- (void)setDestinationDeviceId:(_INPBString *)arg1;
- (void)setHomeName:(_INPBString *)arg1;
- (void)setIntentDeviceQuantifier:(_INPBString *)arg1;
- (void)setIntentDeviceType:(_INPBString *)arg1;
- (void)setIntentFromEntities:(NSArray *)arg1;
- (void)setIntentPlaceHint:(_INPBString *)arg1;
- (void)setIntentReference:(_INPBString *)arg1;
- (void)setRoomNames:(NSArray *)arg1;
- (void)setServiceGroups:(NSArray *)arg1;
- (void)setServiceNames:(NSArray *)arg1;
- (void)setZoneNames:(NSArray *)arg1;
- (NSArray *)zoneNames;
- (_INPBString *)zoneNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)zoneNamesCount;

@end

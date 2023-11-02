
@protocol _INPBHomeEntity <NSObject>

@required

+ (Class)zonesType;

- (int)StringAsDeviceType:(NSString *)arg1;
- (int)StringAsDeviceTypes:(NSString *)arg1;
- (int)StringAsEntityType:(NSString *)arg1;
- (int)StringAsSceneType:(NSString *)arg1;
- (void)addDeviceTypes:(int)arg1;
- (void)addZones:(_INPBDataString *)arg1;
- (void)clearDeviceTypes;
- (void)clearZones;
- (int)deviceType;
- (NSString *)deviceTypeAsString:(int)arg1;
- (int*)deviceTypes;
- (NSString *)deviceTypesAsString:(int)arg1;
- (int)deviceTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)deviceTypesCount;
- (NSString *)entityIdentifier;
- (_INPBDataString *)entityName;
- (int)entityType;
- (NSString *)entityTypeAsString:(int)arg1;
- (_INPBDataString *)group;
- (bool)hasDeviceType;
- (bool)hasEntityIdentifier;
- (bool)hasEntityName;
- (bool)hasEntityType;
- (bool)hasGroup;
- (bool)hasHome;
- (bool)hasName;
- (bool)hasRoom;
- (bool)hasSceneType;
- (bool)hasZone;
- (_INPBDataString *)home;
- (_INPBString *)name;
- (_INPBDataString *)room;
- (int)sceneType;
- (NSString *)sceneTypeAsString:(int)arg1;
- (void)setDeviceType:(int)arg1;
- (void)setDeviceTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setEntityIdentifier:(NSString *)arg1;
- (void)setEntityName:(_INPBDataString *)arg1;
- (void)setEntityType:(int)arg1;
- (void)setGroup:(_INPBDataString *)arg1;
- (void)setHasDeviceType:(bool)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setHasSceneType:(bool)arg1;
- (void)setHome:(_INPBDataString *)arg1;
- (void)setName:(_INPBString *)arg1;
- (void)setRoom:(_INPBDataString *)arg1;
- (void)setSceneType:(int)arg1;
- (void)setZone:(_INPBDataString *)arg1;
- (void)setZones:(NSArray *)arg1;
- (_INPBDataString *)zone;
- (NSArray *)zones;
- (_INPBDataString *)zonesAtIndex:(unsigned long long)arg1;
- (unsigned long long)zonesCount;

@end

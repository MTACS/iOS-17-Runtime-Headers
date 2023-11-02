
@interface BMPBHomeKitClientMediaAccessoryControlEvent : PBCodable <NSCopying> {
    NSString * _accessoryMediaRouteIdentifier;
    NSString * _accessoryName;
    NSMutableArray * _accessoryStates;
    NSString * _accessoryUniqueIdentifier;
    BMPBHomeKitClientBase * _base;
    NSString * _homeName;
    NSString * _roomName;
    NSString * _roomUniqueIdentifier;
    NSMutableArray * _zoneNames;
    NSMutableArray * _zoneUniqueIdentifiers;
}

@property (nonatomic, retain) NSString *accessoryMediaRouteIdentifier;
@property (nonatomic, retain) NSString *accessoryName;
@property (nonatomic, retain) NSMutableArray *accessoryStates;
@property (nonatomic, retain) NSString *accessoryUniqueIdentifier;
@property (nonatomic, retain) BMPBHomeKitClientBase *base;
@property (nonatomic, readonly) bool hasAccessoryMediaRouteIdentifier;
@property (nonatomic, readonly) bool hasAccessoryName;
@property (nonatomic, readonly) bool hasAccessoryUniqueIdentifier;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic, readonly) bool hasHomeName;
@property (nonatomic, readonly) bool hasRoomName;
@property (nonatomic, readonly) bool hasRoomUniqueIdentifier;
@property (nonatomic, retain) NSString *homeName;
@property (nonatomic, retain) NSString *roomName;
@property (nonatomic, retain) NSString *roomUniqueIdentifier;
@property (nonatomic, retain) NSMutableArray *zoneNames;
@property (nonatomic, retain) NSMutableArray *zoneUniqueIdentifiers;

+ (Class)accessoryStateType;
+ (Class)zoneNamesType;
+ (Class)zoneUniqueIdentifiersType;

- (void).cxx_destruct;
- (id)accessoryMediaRouteIdentifier;
- (id)accessoryName;
- (id)accessoryStateAtIndex:(unsigned long long)arg1;
- (id)accessoryStates;
- (unsigned long long)accessoryStatesCount;
- (id)accessoryUniqueIdentifier;
- (void)addAccessoryState:(id)arg1;
- (void)addZoneNames:(id)arg1;
- (void)addZoneUniqueIdentifiers:(id)arg1;
- (id)base;
- (void)clearAccessoryStates;
- (void)clearZoneNames;
- (void)clearZoneUniqueIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessoryMediaRouteIdentifier;
- (bool)hasAccessoryName;
- (bool)hasAccessoryUniqueIdentifier;
- (bool)hasBase;
- (bool)hasHomeName;
- (bool)hasRoomName;
- (bool)hasRoomUniqueIdentifier;
- (unsigned long long)hash;
- (id)homeName;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)roomName;
- (id)roomUniqueIdentifier;
- (void)setAccessoryMediaRouteIdentifier:(id)arg1;
- (void)setAccessoryName:(id)arg1;
- (void)setAccessoryStates:(id)arg1;
- (void)setAccessoryUniqueIdentifier:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setHomeName:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setRoomUniqueIdentifier:(id)arg1;
- (void)setZoneNames:(id)arg1;
- (void)setZoneUniqueIdentifiers:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneNames;
- (id)zoneNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)zoneNamesCount;
- (id)zoneUniqueIdentifiers;
- (id)zoneUniqueIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)zoneUniqueIdentifiersCount;

@end

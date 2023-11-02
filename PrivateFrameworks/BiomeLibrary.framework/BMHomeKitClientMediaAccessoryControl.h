
@interface BMHomeKitClientMediaAccessoryControl : BMEventBase <BMStoreData> {
    NSString * _accessoryMediaRouteIdentifier;
    NSString * _accessoryName;
    NSArray * _accessoryState;
    NSString * _accessoryUniqueIdentifier;
    BMHomeKitBase * _base;
    NSString * _homeName;
    NSString * _roomName;
    NSString * _roomUniqueIdentifier;
    NSArray * _zoneNames;
    NSArray * _zoneUniqueIdentifiers;
}

@property (nonatomic, readonly) NSString *accessoryMediaRouteIdentifier;
@property (nonatomic, readonly) NSString *accessoryName;
@property (nonatomic, readonly) NSArray *accessoryState;
@property (nonatomic, readonly) NSString *accessoryUniqueIdentifier;
@property (nonatomic, readonly) BMHomeKitBase *base;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *homeName;
@property (nonatomic, readonly) NSString *roomName;
@property (nonatomic, readonly) NSString *roomUniqueIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *zoneNames;
@property (nonatomic, readonly) NSArray *zoneUniqueIdentifiers;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_accessoryStateJSONArray;
- (id)_zoneNamesJSONArray;
- (id)_zoneUniqueIdentifiersJSONArray;
- (id)accessoryMediaRouteIdentifier;
- (id)accessoryName;
- (id)accessoryState;
- (id)accessoryUniqueIdentifier;
- (id)base;
- (unsigned int)dataVersion;
- (id)description;
- (id)homeName;
- (id)initByReadFrom:(id)arg1;
- (id)initWithBase:(id)arg1 accessoryUniqueIdentifier:(id)arg2 accessoryState:(id)arg3 accessoryMediaRouteIdentifier:(id)arg4 zoneUniqueIdentifiers:(id)arg5 roomUniqueIdentifier:(id)arg6 accessoryName:(id)arg7 roomName:(id)arg8 zoneNames:(id)arg9 homeName:(id)arg10;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)roomName;
- (id)roomUniqueIdentifier;
- (id)serialize;
- (void)writeTo:(id)arg1;
- (id)zoneNames;
- (id)zoneUniqueIdentifiers;

@end

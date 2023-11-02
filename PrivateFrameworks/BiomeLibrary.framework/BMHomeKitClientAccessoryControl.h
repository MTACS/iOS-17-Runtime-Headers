
@interface BMHomeKitClientAccessoryControl : BMEventBase <BMStoreData> {
    NSString * _accessoryName;
    BMHomeKitAccessoryState * _accessoryState;
    NSString * _accessoryUniqueIdentifier;
    BMHomeKitBase * _base;
    NSString * _characteristicType;
    NSString * _homeName;
    NSString * _roomName;
    NSString * _roomUniqueIdentifier;
    NSString * _serviceGroupName;
    NSString * _serviceGroupUniqueIdentifier;
    NSString * _serviceName;
    NSString * _serviceType;
    NSString * _serviceUniqueIdentifier;
    NSArray * _zoneNames;
    NSArray * _zoneUniqueIdentifiers;
}

@property (nonatomic, readonly) NSString *accessoryName;
@property (nonatomic, readonly) BMHomeKitAccessoryState *accessoryState;
@property (nonatomic, readonly) NSString *accessoryUniqueIdentifier;
@property (nonatomic, readonly) BMHomeKitBase *base;
@property (nonatomic, readonly) NSString *characteristicType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *homeName;
@property (nonatomic, readonly) NSString *roomName;
@property (nonatomic, readonly) NSString *roomUniqueIdentifier;
@property (nonatomic, readonly) NSString *serviceGroupName;
@property (nonatomic, readonly) NSString *serviceGroupUniqueIdentifier;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSString *serviceType;
@property (nonatomic, readonly) NSString *serviceUniqueIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *zoneNames;
@property (nonatomic, readonly) NSArray *zoneUniqueIdentifiers;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_zoneNamesJSONArray;
- (id)_zoneUniqueIdentifiersJSONArray;
- (id)accessoryName;
- (id)accessoryState;
- (id)accessoryUniqueIdentifier;
- (id)base;
- (id)characteristicType;
- (unsigned int)dataVersion;
- (id)description;
- (id)homeName;
- (id)initByReadFrom:(id)arg1;
- (id)initWithBase:(id)arg1 accessoryUniqueIdentifier:(id)arg2 accessoryState:(id)arg3 serviceUniqueIdentifier:(id)arg4 serviceType:(id)arg5 characteristicType:(id)arg6 serviceGroupUniqueIdentifier:(id)arg7 zoneUniqueIdentifiers:(id)arg8 roomUniqueIdentifier:(id)arg9 accessoryName:(id)arg10 serviceName:(id)arg11 roomName:(id)arg12 serviceGroupName:(id)arg13 zoneNames:(id)arg14 homeName:(id)arg15;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)roomName;
- (id)roomUniqueIdentifier;
- (id)serialize;
- (id)serviceGroupName;
- (id)serviceGroupUniqueIdentifier;
- (id)serviceName;
- (id)serviceType;
- (id)serviceUniqueIdentifier;
- (void)writeTo:(id)arg1;
- (id)zoneNames;
- (id)zoneUniqueIdentifiers;

@end

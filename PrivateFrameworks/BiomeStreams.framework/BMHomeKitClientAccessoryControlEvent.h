
@interface BMHomeKitClientAccessoryControlEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _accessoryName;
    NSData * _accessoryStateData;
    NSNumber * _accessoryStateNumber;
    NSString * _accessoryStateString;
    NSString * _accessoryUniqueIdentifier;
    BMHomeKitClientBase * _base;
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

@property (nonatomic, readonly, copy) NSString *accessoryName;
@property (nonatomic, readonly, copy) NSData *accessoryStateData;
@property (nonatomic, readonly, copy) NSNumber *accessoryStateNumber;
@property (nonatomic, readonly, copy) NSString *accessoryStateString;
@property (nonatomic, readonly, copy) NSString *accessoryUniqueIdentifier;
@property (nonatomic, readonly, copy) BMHomeKitClientBase *base;
@property (nonatomic, readonly, copy) NSString *characteristicType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *homeName;
@property (nonatomic, readonly, copy) NSString *roomName;
@property (nonatomic, readonly, copy) NSString *roomUniqueIdentifier;
@property (nonatomic, readonly, copy) NSString *serviceGroupName;
@property (nonatomic, readonly, copy) NSString *serviceGroupUniqueIdentifier;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (nonatomic, readonly, copy) NSString *serviceType;
@property (nonatomic, readonly, copy) NSString *serviceUniqueIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *zoneNames;
@property (nonatomic, readonly, copy) NSArray *zoneUniqueIdentifiers;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)accessoryName;
- (id)accessoryStateData;
- (id)accessoryStateNumber;
- (id)accessoryStateString;
- (id)accessoryUniqueIdentifier;
- (id)base;
- (id)characteristicType;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)homeName;
- (id)initWithBase:(id)arg1 dataAccessoryState:(id)arg2 accessoryUniqueIdentifier:(id)arg3 serviceUniqueIdentifier:(id)arg4 serviceType:(id)arg5 characteristicType:(id)arg6 serviceGroupUniqueIdentifier:(id)arg7 zoneUniqueIdentifiers:(id)arg8 roomUniqueIdentifier:(id)arg9 accessoryName:(id)arg10 serviceName:(id)arg11 roomName:(id)arg12 serviceGroupName:(id)arg13 zoneNames:(id)arg14 homeName:(id)arg15;
- (id)initWithBase:(id)arg1 numberAccessoryState:(id)arg2 accessoryUniqueIdentifier:(id)arg3 serviceUniqueIdentifier:(id)arg4 serviceType:(id)arg5 characteristicType:(id)arg6 serviceGroupUniqueIdentifier:(id)arg7 zoneUniqueIdentifiers:(id)arg8 roomUniqueIdentifier:(id)arg9 accessoryName:(id)arg10 serviceName:(id)arg11 roomName:(id)arg12 serviceGroupName:(id)arg13 zoneNames:(id)arg14 homeName:(id)arg15;
- (id)initWithBase:(id)arg1 stringAccessoryState:(id)arg2 accessoryUniqueIdentifier:(id)arg3 serviceUniqueIdentifier:(id)arg4 serviceType:(id)arg5 characteristicType:(id)arg6 serviceGroupUniqueIdentifier:(id)arg7 zoneUniqueIdentifiers:(id)arg8 roomUniqueIdentifier:(id)arg9 accessoryName:(id)arg10 serviceName:(id)arg11 roomName:(id)arg12 serviceGroupName:(id)arg13 zoneNames:(id)arg14 homeName:(id)arg15;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)roomName;
- (id)roomUniqueIdentifier;
- (id)serialize;
- (id)serviceGroupName;
- (id)serviceGroupUniqueIdentifier;
- (id)serviceName;
- (id)serviceType;
- (id)serviceUniqueIdentifier;
- (id)zoneNames;
- (id)zoneUniqueIdentifiers;

@end

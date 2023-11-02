
@interface BMHomeKitClientMediaAccessoryControlEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _accessoryMediaRouteIdentifier;
    NSString * _accessoryName;
    NSDictionary * _accessoryStateData;
    NSDictionary * _accessoryStateNumber;
    NSDictionary * _accessoryStateString;
    NSString * _accessoryUniqueIdentifier;
    BMHomeKitClientBase * _base;
    NSString * _homeName;
    NSString * _roomName;
    NSString * _roomUniqueIdentifier;
    NSArray * _zoneNames;
    NSArray * _zoneUniqueIdentifiers;
}

@property (nonatomic, readonly, copy) NSString *accessoryMediaRouteIdentifier;
@property (nonatomic, readonly, copy) NSString *accessoryName;
@property (nonatomic, readonly, copy) NSDictionary *accessoryStateData;
@property (nonatomic, readonly, copy) NSDictionary *accessoryStateNumber;
@property (nonatomic, readonly, copy) NSDictionary *accessoryStateString;
@property (nonatomic, readonly, copy) NSString *accessoryUniqueIdentifier;
@property (nonatomic, readonly, copy) BMHomeKitClientBase *base;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *homeName;
@property (nonatomic, readonly, copy) NSString *roomName;
@property (nonatomic, readonly, copy) NSString *roomUniqueIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *zoneNames;
@property (nonatomic, readonly, copy) NSArray *zoneUniqueIdentifiers;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)accessoryMediaRouteIdentifier;
- (id)accessoryName;
- (id)accessoryStateData;
- (id)accessoryStateNumber;
- (id)accessoryStateString;
- (id)accessoryUniqueIdentifier;
- (id)base;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)homeName;
- (id)initWithBase:(id)arg1 accessoryUniqueIdentifier:(id)arg2 accessoryStateString:(id)arg3 accessoryStateNumber:(id)arg4 accessoryStateData:(id)arg5 accessoryMediaRouteIdentifier:(id)arg6 zoneUniqueIdentifiers:(id)arg7 roomUniqueIdentifier:(id)arg8 accessoryName:(id)arg9 roomName:(id)arg10 zoneNames:(id)arg11 homeName:(id)arg12;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)roomName;
- (id)roomUniqueIdentifier;
- (id)serialize;
- (id)zoneNames;
- (id)zoneUniqueIdentifiers;

@end


@interface INHomeAutomationEntityProvider : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSArray * _accessoryNames;
    NSString * _destinationDeviceId;
    NSString * _homeName;
    NSString * _intentDeviceQuantifier;
    NSString * _intentDeviceType;
    NSArray * _intentFromEntities;
    NSString * _intentPlaceHint;
    NSString * _intentReference;
    NSArray * _roomNames;
    NSArray * _serviceGroups;
    NSArray * _serviceNames;
    NSArray * _zoneNames;
}

@property (nonatomic, readonly, copy) NSArray *accessoryNames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *destinationDeviceId;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *homeName;
@property (nonatomic, readonly, copy) NSString *intentDeviceQuantifier;
@property (nonatomic, readonly, copy) NSString *intentDeviceType;
@property (nonatomic, readonly, copy) NSArray *intentFromEntities;
@property (nonatomic, readonly, copy) NSString *intentPlaceHint;
@property (nonatomic, readonly, copy) NSString *intentReference;
@property (nonatomic, readonly, copy) NSArray *roomNames;
@property (nonatomic, readonly, copy) NSArray *serviceGroups;
@property (nonatomic, readonly, copy) NSArray *serviceNames;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *zoneNames;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)accessoryNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)destinationDeviceId;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeName;
- (id)initWithCoder:(id)arg1;
- (id)initWithRoomNames:(id)arg1 homeName:(id)arg2 zoneNames:(id)arg3 accessoryNames:(id)arg4 serviceNames:(id)arg5 serviceGroups:(id)arg6 intentFromEntities:(id)arg7 intentDeviceQuantifier:(id)arg8 destinationDeviceId:(id)arg9 intentDeviceType:(id)arg10 intentPlaceHint:(id)arg11 intentReference:(id)arg12;
- (id)intentDeviceQuantifier;
- (id)intentDeviceType;
- (id)intentFromEntities;
- (id)intentPlaceHint;
- (id)intentReference;
- (bool)isEqual:(id)arg1;
- (id)roomNames;
- (id)serviceGroups;
- (id)serviceNames;
- (id)zoneNames;

@end

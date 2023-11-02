
@interface INHomeFilter : NSObject <INJSONSerializable, NSCopying, NSSecureCoding, REDonatedActionIdentifierProviding> {
    INSpeakableString * _accessory;
    long long  _deviceType;
    NSArray * _entityIdentifiers;
    INSpeakableString * _entityName;
    long long  _entityType;
    INSpeakableString * _group;
    bool  _hasAllQuantifier;
    INSpeakableString * _home;
    bool  _isExcludeFilter;
    INSpeakableString * _outerDeviceName;
    long long  _outerDeviceType;
    INSpeakableString * _room;
    long long  _subServiceType;
    INSpeakableString * _zone;
}

@property (nonatomic, readonly, copy) INSpeakableString *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly, copy) NSArray *entityIdentifiers;
@property (nonatomic, readonly, copy) INSpeakableString *entityName;
@property (nonatomic, readonly) long long entityType;
@property (nonatomic, readonly, copy) INSpeakableString *group;
@property (nonatomic, readonly) bool hasAllQuantifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly, copy) INSpeakableString *home;
@property (nonatomic, readonly) bool isExcludeFilter;
@property (nonatomic, readonly, copy) INSpeakableString *outerDeviceName;
@property (nonatomic, readonly) long long outerDeviceType;
@property (nonatomic, readonly, copy) INSpeakableString *room;
@property (nonatomic, readonly, copy) INSpeakableString *scene;
@property (nonatomic, readonly, copy) INSpeakableString *service;
@property (nonatomic, readonly) long long serviceType;
@property (nonatomic, readonly) long long subServiceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INSpeakableString *zone;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (id)accessory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)entityIdentifiers;
- (id)entityName;
- (long long)entityType;
- (id)group;
- (bool)hasAllQuantifier;
- (unsigned long long)hash;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityIdentifiers:(id)arg1 entityName:(id)arg2 entityType:(long long)arg3 outerDeviceType:(long long)arg4 innerDeviceName:(id)arg5 innerDeviceType:(long long)arg6 home:(id)arg7 zone:(id)arg8 group:(id)arg9 room:(id)arg10 isExcludeFilter:(bool)arg11;
- (id)initWithEntityIdentifiers:(id)arg1 entityName:(id)arg2 entityType:(long long)arg3 outerDeviceType:(long long)arg4 outerDeviceName:(id)arg5 deviceType:(long long)arg6 home:(id)arg7 zone:(id)arg8 group:(id)arg9 room:(id)arg10 isExcludeFilter:(bool)arg11;
- (id)initWithEntityIdentifiers:(id)arg1 entityName:(id)arg2 entityType:(long long)arg3 outerDeviceType:(long long)arg4 outerDeviceName:(id)arg5 deviceType:(long long)arg6 home:(id)arg7 zone:(id)arg8 group:(id)arg9 room:(id)arg10 isExcludeFilter:(bool)arg11 hasAllQuantifier:(bool)arg12;
- (id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 entityType:(long long)arg8 serviceType:(long long)arg9 subServiceType:(long long)arg10 isExcludeFilter:(bool)arg11 entityName:(id)arg12;
- (id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 service:(id)arg8 entityType:(long long)arg9 serviceType:(long long)arg10 subServiceType:(long long)arg11;
- (id)initWithEntityIdentifiers:(id)arg1 home:(id)arg2 scene:(id)arg3 homeZone:(id)arg4 group:(id)arg5 room:(id)arg6 accessory:(id)arg7 service:(id)arg8 entityType:(long long)arg9 serviceType:(long long)arg10 subServiceType:(long long)arg11 isExcludeFilter:(bool)arg12;
- (bool)isEqual:(id)arg1;
- (bool)isExcludeFilter;
- (id)outerDeviceName;
- (long long)outerDeviceType;
- (id)room;
- (id)scene;
- (id)service;
- (long long)serviceType;
- (long long)subServiceType;
- (id)zone;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;
- (long long)hash;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

@end

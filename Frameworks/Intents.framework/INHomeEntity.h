
@interface INHomeEntity : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSArray * _deviceTypes;
    NSString * _entityIdentifier;
    INSpeakableString * _entityName;
    INSpeakableString * _group;
    INSpeakableString * _home;
    INSpeakableString * _room;
    long long  _sceneType;
    long long  _type;
    INSpeakableString * _zone;
    NSArray * _zones;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly, copy) NSArray *deviceTypes;
@property (nonatomic, readonly, copy) NSString *entityIdentifier;
@property (nonatomic, readonly, copy) INSpeakableString *entityName;
@property (nonatomic, readonly, copy) INSpeakableString *group;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INSpeakableString *home;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) INSpeakableString *room;
@property (nonatomic, readonly) long long sceneType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) INSpeakableString *zone;
@property (nonatomic, readonly, copy) NSArray *zones;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (long long)deviceType;
- (id)deviceTypes;
- (void)encodeWithCoder:(id)arg1;
- (id)entityIdentifier;
- (id)entityName;
- (id)group;
- (unsigned long long)hash;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityName:(id)arg1 type:(long long)arg2 entityIdentifier:(id)arg3 deviceTypes:(id)arg4 sceneType:(long long)arg5 room:(id)arg6 home:(id)arg7 group:(id)arg8 zones:(id)arg9;
- (id)initWithEntityName:(id)arg1 type:(long long)arg2 entityIdentifier:(id)arg3 deviceTypes:(id)arg4 sceneType:(long long)arg5 room:(id)arg6 zone:(id)arg7 home:(id)arg8 group:(id)arg9;
- (id)initWithName:(id)arg1 type:(long long)arg2 deviceType:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)room;
- (long long)sceneType;
- (long long)type;
- (id)zone;
- (id)zones;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;

@end

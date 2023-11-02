
@interface PLJournalEntryPayloadProperty : NSObject {
    id  _defaultValue;
    bool  _isToManySubRelationship;
    bool  _isUUIDKey;
    NSString * _key;
    bool  _optional;
    PLJournalEntryPayloadProperty * _parentProperty;
    NSSet * _relatedEntityPropertyNames;
    bool  _requiresConversion;
    bool  _shouldPrefetchRelationship;
    NSString * _subRelationshipEntityName;
    NSDictionary * _subRelationshipProperties;
    unsigned long long  _type;
}

@property (nonatomic, retain) id defaultValue;
@property (nonatomic, readonly) bool isToManySubRelationship;
@property (nonatomic, readonly) bool isUUIDKey;
@property (nonatomic, readonly) NSString *key;
@property (getter=isOptional, nonatomic) bool optional;
@property (nonatomic, retain) PLJournalEntryPayloadProperty *parentProperty;
@property (nonatomic, readonly) NSSet *relatedEntityPropertyNames;
@property (nonatomic, readonly) bool requiresConversion;
@property (nonatomic, readonly) bool shouldPrefetchRelationship;
@property (nonatomic, readonly) NSString *subRelationshipEntityName;
@property (nonatomic, readonly) NSDictionary *subRelationshipProperties;
@property (nonatomic, readonly) unsigned long long type;

+ (id)payloadPropertyForUUID;
+ (id)payloadPropertyWithKey:(id)arg1 andType:(unsigned long long)arg2;
+ (id)payloadPropertyWithKey:(id)arg1 andType:(unsigned long long)arg2 requiresConversion:(bool)arg3;
+ (id)payloadPropertyWithKey:(id)arg1 relatedEntityPropertyNames:(id)arg2 shouldPrefetchRelationship:(bool)arg3;
+ (id)payloadPropertyWithKey:(id)arg1 subRelationshipProperties:(id)arg2 subRelationshipEntityName:(id)arg3 isToMany:(bool)arg4;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)description;
- (id)initWithKey:(id)arg1 andType:(unsigned long long)arg2 subRelationshipProperties:(id)arg3 subRelationshipEntityName:(id)arg4 requiresConversion:(bool)arg5 relatedEntityPropertyNames:(id)arg6 isUUIDKey:(bool)arg7 isToManySubRelationship:(bool)arg8 shouldPrefetchRelationship:(bool)arg9;
- (bool)isEqualToKey:(id)arg1;
- (bool)isOptional;
- (bool)isToManySubRelationship;
- (bool)isUUIDKey;
- (id)key;
- (id)parentProperty;
- (id)relatedEntityPropertyNames;
- (bool)requiresConversion;
- (void)setDefaultValue:(id)arg1;
- (void)setOptional:(bool)arg1;
- (void)setParentProperty:(id)arg1;
- (bool)shouldPrefetchRelationship;
- (id)subRelationshipEntityName;
- (id)subRelationshipProperties;
- (unsigned long long)type;

@end

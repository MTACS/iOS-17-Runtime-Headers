
@interface INTask : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {
    INContactEventTrigger * _contactEventTrigger;
    NSDateComponents * _createdDateComponents;
    NSString * _identifier;
    NSDateComponents * _modifiedDateComponents;
    NSString * _parentIdentifier;
    long long  _priority;
    INSpatialEventTrigger * _spatialEventTrigger;
    long long  _status;
    long long  _taskReference;
    long long  _taskType;
    INTemporalEventTrigger * _temporalEventTrigger;
    INSpeakableString * _title;
}

@property (nonatomic, readonly, copy) INContactEventTrigger *contactEventTrigger;
@property (nonatomic, readonly, copy) NSDateComponents *createdDateComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDateComponents *modifiedDateComponents;
@property (nonatomic, readonly, copy) NSString *parentIdentifier;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly, copy) INSpatialEventTrigger *spatialEventTrigger;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long taskReference;
@property (nonatomic, readonly) long long taskType;
@property (nonatomic, readonly, copy) INTemporalEventTrigger *temporalEventTrigger;
@property (nonatomic, readonly, copy) INSpeakableString *title;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)contactEventTrigger;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdDateComponents;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8;
- (id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8 contactEventTrigger:(id)arg9 taskReference:(long long)arg10;
- (id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8 priority:(long long)arg9;
- (id)initWithTitle:(id)arg1 status:(long long)arg2 taskType:(long long)arg3 spatialEventTrigger:(id)arg4 temporalEventTrigger:(id)arg5 createdDateComponents:(id)arg6 modifiedDateComponents:(id)arg7 identifier:(id)arg8 priority:(long long)arg9 contactEventTrigger:(id)arg10 taskReference:(long long)arg11 parentIdentifier:(id)arg12;
- (bool)isEqual:(id)arg1;
- (id)modifiedDateComponents;
- (id)parentIdentifier;
- (long long)priority;
- (id)spatialEventTrigger;
- (long long)status;
- (long long)taskReference;
- (long long)taskType;
- (id)temporalEventTrigger;
- (id)title;

@end

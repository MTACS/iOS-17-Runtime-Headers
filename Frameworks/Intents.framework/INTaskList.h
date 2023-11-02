
@interface INTaskList : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {
    NSDateComponents * _createdDateComponents;
    INSpeakableString * _groupName;
    NSString * _identifier;
    NSDateComponents * _modifiedDateComponents;
    NSArray * _tasks;
    INSpeakableString * _title;
}

@property (nonatomic, readonly, copy) NSDateComponents *createdDateComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INSpeakableString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDateComponents *modifiedDateComponents;
@property (readonly) Class superclass;
@property (readonly) long long taskListType;
@property (nonatomic, readonly, copy) NSArray *tasks;
@property (nonatomic, readonly, copy) INSpeakableString *title;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdDateComponents;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 tasks:(id)arg2 groupName:(id)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6;
- (id)initWithTitle:(id)arg1 tasks:(id)arg2 groupName:(id)arg3 taskListType:(long long)arg4 createdDateComponents:(id)arg5 modifiedDateComponents:(id)arg6 identifier:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)modifiedDateComponents;
- (long long)taskListType;
- (id)tasks;
- (id)title;

@end

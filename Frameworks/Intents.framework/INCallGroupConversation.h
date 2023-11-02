
@interface INCallGroupConversation : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {
    INCallGroup * _callGroup;
    INPerson * _caller;
    NSString * _conversationId;
    NSArray * _otherParticipants;
}

@property (nonatomic, readonly, copy) INCallGroup *callGroup;
@property (nonatomic, readonly, copy) INPerson *caller;
@property (nonatomic, readonly, copy) NSString *conversationId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *otherParticipants;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)callGroup;
- (id)caller;
- (id)conversationId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationId:(id)arg1 caller:(id)arg2 otherParticipants:(id)arg3 callGroup:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)otherParticipants;

@end

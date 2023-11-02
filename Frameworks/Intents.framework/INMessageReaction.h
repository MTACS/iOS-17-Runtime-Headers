
@interface INMessageReaction : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _reactionDescription;
    long long  _reactionType;
    INMessage * _referencedMessage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *reactionDescription;
@property (nonatomic, readonly) long long reactionType;
@property (nonatomic, readonly, copy) INMessage *referencedMessage;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithReactionType:(long long)arg1 reactionDescription:(id)arg2 referencedMessage:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)reactionDescription;
- (long long)reactionType;
- (id)referencedMessage;

@end

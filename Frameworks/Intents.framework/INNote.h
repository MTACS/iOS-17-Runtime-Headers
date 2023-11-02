
@interface INNote : NSObject <INCacheableContainer, INImageProxyInjecting, INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _accountIdentifier;
    NSArray * _contents;
    NSDateComponents * _createdDateComponents;
    INSpeakableString * _groupName;
    NSString * _identifier;
    NSDateComponents * _modifiedDateComponents;
    INSpeakableString * _title;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (setter=_setContents:, nonatomic, copy) NSArray *contents;
@property (nonatomic, readonly, copy) NSDateComponents *createdDateComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INSpeakableString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDateComponents *modifiedDateComponents;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INSpeakableString *title;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (void)_setContents:(id)arg1;
- (id)accountIdentifier;
- (id)contents;
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
- (id)initWithTitle:(id)arg1 contents:(id)arg2 groupName:(id)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6;
- (id)initWithTitle:(id)arg1 contents:(id)arg2 groupName:(id)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6 accountIdentifier:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)modifiedDateComponents;
- (id)title;

@end


@interface INBillPayee : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _accountNumber;
    INSpeakableString * _nickname;
    INSpeakableString * _organizationName;
}

@property (nonatomic, readonly, copy) NSString *accountNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INSpeakableString *nickname;
@property (nonatomic, readonly, copy) INSpeakableString *organizationName;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (id)accountNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNickname:(id)arg1 number:(id)arg2 organizationName:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)nickname;
- (id)organizationName;

@end

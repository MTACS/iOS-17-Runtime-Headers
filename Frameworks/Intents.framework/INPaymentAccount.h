
@interface INPaymentAccount : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _accountNumber;
    long long  _accountType;
    INBalanceAmount * _balance;
    INSpeakableString * _nickname;
    INSpeakableString * _organizationName;
    INBalanceAmount * _secondaryBalance;
}

@property (nonatomic, readonly, copy) NSString *accountNumber;
@property (nonatomic, readonly) long long accountType;
@property (nonatomic, readonly, copy) INBalanceAmount *balance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INSpeakableString *nickname;
@property (nonatomic, readonly, copy) INSpeakableString *organizationName;
@property (nonatomic, readonly, copy) INBalanceAmount *secondaryBalance;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (id)accountNumber;
- (long long)accountType;
- (id)balance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNickname:(id)arg1 number:(id)arg2 accountType:(long long)arg3 organizationName:(id)arg4;
- (id)initWithNickname:(id)arg1 number:(id)arg2 accountType:(long long)arg3 organizationName:(id)arg4 balance:(id)arg5 secondaryBalance:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)nickname;
- (id)organizationName;
- (id)secondaryBalance;

// Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport

- (id)acs_formattedAccountName;

@end


@interface SAIntentGroupPrivacyPolicy : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *privacyCategory;
@property (nonatomic, copy) NSString *redactionTarget;
@property (readonly) Class superclass;

+ (id)privacyPolicy;
+ (id)privacyPolicyWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)privacyCategory;
- (id)redactionTarget;
- (void)setPrivacyCategory:(id)arg1;
- (void)setRedactionTarget:(id)arg1;

@end

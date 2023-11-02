
@interface SAIntentGroupAceAppIntentPolicyAndVocab : SADomainObject

@property (nonatomic, retain) SAIntentGroupProtobufMessage *aceAppBundleInfo;

+ (id)aceAppIntentPolicyAndVocab;
+ (id)aceAppIntentPolicyAndVocabWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceAppBundleInfo;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAceAppBundleInfo:(id)arg1;

@end

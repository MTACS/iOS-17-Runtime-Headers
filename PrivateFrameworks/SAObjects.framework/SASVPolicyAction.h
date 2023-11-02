
@interface SASVPolicyAction : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) SASVPolicyActionNode *policyActionRoot;
@property (readonly) Class superclass;

+ (id)policyAction;
+ (id)policyActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)name;
- (id)policyActionRoot;
- (void)setName:(id)arg1;
- (void)setPolicyActionRoot:(id)arg1;

@end

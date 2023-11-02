
@interface HMFMessageFilter : HMFObject <HMFLogging, HMFObject> {
    HMFMessage * _message;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HMFMessage *message;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (bool)canInitWithMessage:(id)arg1;
+ (long long)filterMessage:(id)arg1 withPolicies:(id)arg2 error:(id*)arg3;
+ (id)logCategory;
+ (id)policyClasses;
+ (id)policyOfClass:(Class)arg1 fromPolicies:(id)arg2;
+ (id)requiredPolicyOfClass:(Class)arg1 fromPolicies:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)acceptWithPolicies:(id)arg1 error:(id*)arg2;
- (id)attributeDescriptions;
- (id)init;
- (id)initWithMessage:(id)arg1;
- (id)logIdentifier;
- (id)message;

@end

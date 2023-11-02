
@interface HMDXPCiCloudSwitchMessageFilter : HMFMessageFilter <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)filterMessage:(id)arg1 withPolicies:(id)arg2 error:(id*)arg3;
+ (bool)isThisClientAllowed:(id)arg1;
+ (bool)isThisMessageAllowed:(id)arg1;
+ (id)logCategory;

@end

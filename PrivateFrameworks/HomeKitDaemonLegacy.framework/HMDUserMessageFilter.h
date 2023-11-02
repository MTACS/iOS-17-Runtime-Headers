
@interface HMDUserMessageFilter : HMFMessageFilter <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)filterMessage:(id)arg1 withPolicies:(id)arg2 error:(id*)arg3;
+ (id)logCategory;

@end

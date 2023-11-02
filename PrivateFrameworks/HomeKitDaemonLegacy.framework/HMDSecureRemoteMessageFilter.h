
@interface HMDSecureRemoteMessageFilter : HMDMessageFilter

+ (bool)isAllowedMessage:(id)arg1;
+ (id)logCategory;

- (bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (id)logIdentifier;

@end

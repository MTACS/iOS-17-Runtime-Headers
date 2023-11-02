
@interface TransparencySettings : NSObject <TransparencySettingsProtocol>

+ (bool)allowsInternalSecurityPolicies;
+ (id)automatedDeviceGroup;
+ (double)backgroundNetworkTimeout;
+ (double)defaultFollowupTicketLifetime;
+ (double)defaultNetworkTimeout;
+ (double)defaultQueryCacheTimeout;
+ (id)deviceUserAgent;
+ (double)dismissFailureAfterSeenPeriod;
+ (double)failureIgnorePeriod;
+ (bool)getBool:(id)arg1;
+ (bool)getBool:(id)arg1 defaultValue:(bool)arg2;
+ (unsigned long long)getEnvironment;
+ (id)getIMEnvironmentName;
+ (id)getOverride:(id)arg1;
+ (bool)isAccountsInQA;
+ (double)queryCacheHardTimeout;
+ (double)uiBlockingNetworkTimeout;

- (unsigned long long)getEnvironment;

@end

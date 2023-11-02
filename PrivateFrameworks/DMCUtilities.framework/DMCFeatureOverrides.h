
@interface DMCFeatureOverrides : NSObject

+ (bool)_isUnknownProduct;
+ (double)accountSignInTimeoutThresholdWithDefaultValue:(double)arg1;
+ (id)activationRecordFlagsWithFlags:(id)arg1;
+ (bool)allowAnyESSOApplicationEntitlements;
+ (bool)allowAnyMAIDToSignIn;
+ (id)appleMDMWellKnownURLWithDefaultValue:(id)arg1;
+ (id)attestationRateLimitOverrideMinutes;
+ (bool)boolForDefaultsKey:(id)arg1;
+ (bool)bypassMDMTLSClientAuthentication;
+ (bool)bypassWatchUnpairWhenUnenrolling;
+ (id)deviceNameWithDefaultValue:(id)arg1;
+ (id)dictForDefaultsKey:(id)arg1;
+ (id)enrollmentProfileWithDefaultValue:(id)arg1;
+ (double)enrollmentStepTimeoutThresholdWithDefaultValue:(double)arg1;
+ (id)gestaltOverrideForKey:(struct __CFString { }*)arg1 withDefaultValue:(id)arg2;
+ (bool)ignoreEnrollmentMode;
+ (id)modelNameWithDefaultValue:(id)arg1;
+ (id)modelNumberWithDefaultValue:(id)arg1;
+ (id)numberForDefaultsKey:(id)arg1;
+ (id)objectForDefaultsKey:(id)arg1;
+ (id)productNameWithDefaultValue:(id)arg1;
+ (bool)sentinelExistsAtPath:(id)arg1;
+ (id)serviceDiscoveryDefaultPortWithValue:(id)arg1;
+ (id)serviceDiscoveryDomainWithValue:(id)arg1;
+ (id)serviceDiscoveryFallbackServerVersion;
+ (id)serviceDiscoveryFallbackURLWithValue:(id)arg1;
+ (bool)shouldSimulateMDMAccountDrivenEnrollment;
+ (bool)shouldSimulateMDMCommunication;
+ (id)simulatedMDMAccountDrivenEnrollmentAuthMethod;
+ (id)simulatedMDMAccountDrivenEnrollmentDefaultUsername;
+ (id)simulatedMDMAccountDrivenEnrollmentProfile;
+ (id)simulatedMDMEnrollmentMode;
+ (id)softwareUpdateDeviceIDWithDefaultValue:(id)arg1;
+ (id)stringForDefaultsKey:(id)arg1;
+ (bool)useHTTPLogging;
+ (bool)useNonEphemeralWebAuthSession;
+ (bool)watchEnrollmentAllowLocalProfile;

@end

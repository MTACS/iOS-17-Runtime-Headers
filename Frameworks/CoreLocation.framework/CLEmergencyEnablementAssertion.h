
@interface CLEmergencyEnablementAssertion : CLAssertion

+ (id)newAssertionForBundle:(id)arg1 withReason:(id)arg2;
+ (id)newAssertionForBundleIdentifier:(id)arg1 withReason:(id)arg2;
+ (id)newAssertionWithBundleId:(id)arg1 bundlePath:(id)arg2 reason:(id)arg3 overrideDeauthorizationForBeneficiary:(bool)arg4;
+ (id)newAssertionWithReason:(id)arg1;

@end

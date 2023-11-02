
@interface ATTrackingManager : NSObject

+ (bool)_applicationHasDisqualifyingEntitlement;
+ (bool)_isCrossAppTrackingAllowed;
+ (bool)_restrictionProfileInstalled;
+ (void)_sendRequestTrackingAnalytic:(unsigned long long)arg1 prompted:(bool)arg2 deniedReason:(unsigned long long)arg3;
+ (void)_sendTrackingStatusAnalytic:(unsigned long long)arg1 prompted:(bool)arg2 deniedReason:(unsigned long long)arg3;
+ (unsigned long long)_trackingAuthorizationStatus;
+ (bool)_userAllowedToChangeSettings;
+ (bool)applicationStateActive;
+ (bool)isApplicationExtension;
+ (void)requestTrackingAuthorizationWithCompletionHandler:(id /* block */)arg1;
+ (unsigned long long)trackingAuthorizationStatus;

@end

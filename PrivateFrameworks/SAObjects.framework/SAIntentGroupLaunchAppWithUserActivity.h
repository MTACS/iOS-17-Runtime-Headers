
@interface SAIntentGroupLaunchAppWithUserActivity : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *userActivityIdentifier;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)launchAppWithUserActivity;
+ (id)launchAppWithUserActivityWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setUserActivityIdentifier:(id)arg1;
- (id)userActivityIdentifier;

// Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices

- (long long)ins_analyticsBeginEventType;
- (long long)ins_analyticsEndEventType;
- (void)ins_launchAppWithConnection:(id)arg1 userActivityIdentifier:(id)arg2 delegate:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)ins_shouldUseExtendedFlowTimeout;

@end

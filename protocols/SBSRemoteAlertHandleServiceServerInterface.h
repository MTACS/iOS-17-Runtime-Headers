
@protocol SBSRemoteAlertHandleServiceServerInterface

@required

- (oneway void)activateRemoteAlertHandleWithID:(NSString *)arg1 activationContext:(SBSRemoteAlertActivationContext *)arg2;
- (SBSRemoteAlertHandleContext *)createRemoteAlertHandleContextWithDefinition:(SBSRemoteAlertDefinition *)arg1 configurationContext:(SBSRemoteAlertConfigurationContext *)arg2;
- (oneway void)invalidateRemoteAlertHandleWithID:(NSString *)arg1;
- (NSArray<__SBSRemoteAlertHandleContext__> *)remoteAlertHandleContextsForDefinition:(SBSRemoteAlertDefinition *)arg1 allowsCreationValue:(NSNumber *)arg2 configurationContext:(SBSRemoteAlertConfigurationContext *)arg3;

@end

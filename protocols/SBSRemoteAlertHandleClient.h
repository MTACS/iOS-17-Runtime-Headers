
@protocol SBSRemoteAlertHandleClient <NSObject>

@required

- (void)activateRemoteAlertHandle:(SBSRemoteAlertHandle *)arg1 withContext:(SBSRemoteAlertActivationContext *)arg2;
- (SBSRemoteAlertHandle *)createRemoteAlertHandleWithDefinition:(SBSRemoteAlertDefinition *)arg1 configurationContext:(SBSRemoteAlertConfigurationContext *)arg2;
- (void)invalidateRemoteAlertHandle:(SBSRemoteAlertHandle *)arg1;
- (NSArray *)remoteAlertHandlesForDefinition:(SBSRemoteAlertDefinition *)arg1 allowsCreation:(bool)arg2 configurationContext:(SBSRemoteAlertConfigurationContext *)arg3;

@end


@interface MX_DeviceManagementPolicyDidChangeObserver : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)deviceManagementPolicyDidChange:(id)arg1;

@end

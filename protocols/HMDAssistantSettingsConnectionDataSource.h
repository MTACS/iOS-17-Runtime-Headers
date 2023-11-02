
@protocol HMDAssistantSettingsConnectionDataSource <NSObject>

@required

- (AFSettingsConnection *)connectionForEndpointUUID:(NSUUID *)arg1;
- (HMFOperation *)deleteSiriHistoryOperationWithConnection:(AFSettingsConnection *)arg1;

@end

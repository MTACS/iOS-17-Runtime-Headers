
@protocol PBBridgeCompanionProtocol <NSObject>

@required

- (void)enableSiriForGizmo:(IDSProtobuf *)arg1;
- (void)getCompanionLanguage:(IDSProtobuf *)arg1;
- (void)getCompanionRegion:(IDSProtobuf *)arg1;
- (void)getSiriState:(IDSProtobuf *)arg1;
- (void)gizmoDidBeginActivating:(IDSProtobuf *)arg1;
- (void)gizmoDidEndPasscodeCreation:(IDSProtobuf *)arg1;
- (void)gizmoDidFinishActivating:(IDSProtobuf *)arg1;
- (void)handleWarrantySentinelResponse:(IDSProtobuf *)arg1;
- (void)sendProxyActivationRequest:(IDSProtobuf *)arg1;

@optional

- (void)gizmoBecameAvailableWantsConfirmation:(IDSProtobuf *)arg1;

@end

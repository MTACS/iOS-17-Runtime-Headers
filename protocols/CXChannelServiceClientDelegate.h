
@protocol CXChannelServiceClientDelegate <CXServiceClientDelegate>

@required

- (void)serviceClient:(CXServiceClient *)arg1 actionCompleted:(CXAction *)arg2;
- (void)serviceClient:(CXServiceClient *)arg1 registeredWithConfiguration:(CXChannelProviderConfiguration *)arg2;
- (void)serviceClient:(CXServiceClient *)arg1 reportedAudioFinishedForChannelWithUUID:(NSUUID *)arg2;
- (void)serviceClient:(CXServiceClient *)arg1 reportedChannelWithUUID:(NSUUID *)arg2 connectedAtDate:(NSDate *)arg3;
- (void)serviceClient:(CXServiceClient *)arg1 reportedChannelWithUUID:(NSUUID *)arg2 disconnectedAtDate:(NSDate *)arg3 disconnectedReason:(long long)arg4;
- (void)serviceClient:(CXServiceClient *)arg1 reportedChannelWithUUID:(NSUUID *)arg2 startedConnectingAtDate:(NSDate *)arg3;
- (void)serviceClient:(CXServiceClient *)arg1 reportedChannelWithUUID:(NSUUID *)arg2 updated:(CXChannelUpdate *)arg3;
- (void)serviceClient:(void *)arg1 reportedIncomingTransmissionEndedForChannelWithUUID:(void *)arg2 reason:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: CXServiceClient *, NSUUID *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)serviceClient:(void *)arg1 reportedIncomingTransmissionStartedForChannelWithUUID:(void *)arg2 update:(void *)arg3 shouldReplaceOutgoingTransmission:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: CXServiceClient *, NSUUID *, CXChannelUpdate *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)serviceClient:(void *)arg1 requestedTransaction:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: CXServiceClient *, CXTransaction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

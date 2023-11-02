
@protocol CXChannelServiceServerDelegate <NSObject>

@required

- (void)serviceServer:(CXChannelServiceServer *)arg1 client:(CXServiceClient *)arg2 actionCompleted:(CXAction *)arg3;
- (void)serviceServer:(CXChannelServiceServer *)arg1 client:(CXServiceClient *)arg2 registeredWithConfiguration:(CXChannelProviderConfiguration *)arg3;
- (void)serviceServer:(CXChannelServiceServer *)arg1 client:(CXServiceClient *)arg2 reportedAudioFinishedForChannelWithUUID:(NSUUID *)arg3;
- (void)serviceServer:(CXChannelServiceServer *)arg1 client:(CXServiceClient *)arg2 reportedChannelWithUUID:(NSUUID *)arg3 connectedAtDate:(NSDate *)arg4;
- (void)serviceServer:(CXChannelServiceServer *)arg1 client:(CXServiceClient *)arg2 reportedChannelWithUUID:(NSUUID *)arg3 disconnectedAtDate:(NSDate *)arg4 disconnectedReason:(long long)arg5;
- (void)serviceServer:(CXChannelServiceServer *)arg1 client:(CXServiceClient *)arg2 reportedChannelWithUUID:(NSUUID *)arg3 startedConnectingAtDate:(NSDate *)arg4;
- (void)serviceServer:(CXChannelServiceServer *)arg1 client:(CXServiceClient *)arg2 reportedChannelWithUUID:(NSUUID *)arg3 updated:(CXChannelUpdate *)arg4;
- (void)serviceServer:(void *)arg1 client:(void *)arg2 reportedIncomingTransmissionEndedForChannelWithUUID:(void *)arg3 reason:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: CXChannelServiceServer *, CXServiceClient *, NSUUID *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)serviceServer:(void *)arg1 client:(void *)arg2 reportedIncomingTransmissionStartedForChannelWithUUID:(void *)arg3 update:(void *)arg4 shouldReplaceOutgoingTransmission:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 11: CXChannelServiceServer *, CXServiceClient *, NSUUID *, CXChannelUpdate *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)serviceServer:(void *)arg1 client:(void *)arg2 requestedTransaction:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: CXChannelServiceServer *, CXServiceClient *, CXTransaction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)serviceServer:(CXChannelServiceServer *)arg1 didAddClient:(CXServiceClient *)arg2;
- (void)serviceServer:(CXChannelServiceServer *)arg1 didRemoveClient:(CXServiceClient *)arg2;

@end

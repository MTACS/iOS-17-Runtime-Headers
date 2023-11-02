
@protocol TUMomentsControllerDelegate <NSObject>

@optional

- (void)momentsController:(TUMomentsController *)arg1 didFinishProcessingRawVideoMessage:(TUMomentsRawVideoMessageDescriptor *)arg2;
- (void)momentsController:(TUMomentsController *)arg1 didReceiveLocallyRequestedMomentDescriptor:(TUMomentDescriptor *)arg2;
- (void)momentsController:(TUMomentsController *)arg1 didReceiveMessageRecordingError:(NSError *)arg2;
- (void)momentsController:(TUMomentsController *)arg1 didUpdateCapabilities:(TUMomentsCapabilities *)arg2 forProvider:(TUMomentsProvider *)arg3;
- (void)momentsController:(TUMomentsController *)arg1 willCaptureRemoteRequestFromIdentifier:(NSString *)arg2;

@end

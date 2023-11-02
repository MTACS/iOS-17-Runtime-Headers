
@protocol MRUMirroringControllerDelegate <NSObject>

@required

- (void)mirroringController:(MRUMirroringController *)arg1 didChangeOutputDevice:(AVOutputDevice *)arg2;

@optional

- (void)mirroringController:(MRUMirroringController *)arg1 didChangeAudioOutputDevice:(AVOutputDevice *)arg2;
- (void)mirroringController:(MRUMirroringController *)arg1 didChangeAvailableAudioOutputDevices:(AVOutputDevice *)arg2;
- (void)mirroringController:(MRUMirroringController *)arg1 didChangeAvailableOutputDevices:(NSArray *)arg2;
- (void)mirroringController:(MRUMirroringController *)arg1 didReceiveAuthorizationRequest:(MRUMirroringAuthorizationRequest *)arg2;
- (void)mirroringController:(MRUMirroringController *)arg1 didUpdateBusyIdenifiers:(NSSet *)arg2;

@end

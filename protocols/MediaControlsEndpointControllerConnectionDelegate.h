
@protocol MediaControlsEndpointControllerConnectionDelegate <NSObject>

@required

- (void)endpointController:(MediaControlsEndpointController *)arg1 willAttemptToConnectToRoute:(MPAVEndpointRoute *)arg2;

@end


@protocol MediaControlsEndpointControllerDelegate <NSObject>

@required

- (void)endpointController:(MediaControlsEndpointController *)arg1 didLoadNewResponse:(MPCPlayerResponse *)arg2;
- (void)endpointControllerDidChangeState:(MediaControlsEndpointController *)arg1;
- (void)endpointControllerRouteDidUpdate:(MediaControlsEndpointController *)arg1;

@optional

- (void)endpointControllerDidUpdateRoutingAvailability:(MediaControlsEndpointController *)arg1;

@end

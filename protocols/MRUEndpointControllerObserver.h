
@protocol MRUEndpointControllerObserver <NSObject>

@optional

- (void)endpointController:(MRUEndpointController *)arg1 didChangeResponse:(MPCPlayerResponse *)arg2;
- (void)endpointController:(MRUEndpointController *)arg1 didChangeRoute:(MPAVEndpointRoute *)arg2;
- (void)endpointController:(MRUEndpointController *)arg1 didChangeState:(long long)arg2;

@end

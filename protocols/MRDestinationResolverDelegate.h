
@protocol MRDestinationResolverDelegate <NSObject>

@optional

- (void)destinationResolver:(MRDestinationResolver *)arg1 didFailWithError:(NSError *)arg2;
- (void)destinationResolver:(MRDestinationResolver *)arg1 endpointDidChange:(MRAVEndpoint *)arg2;
- (void)destinationResolver:(MRDestinationResolver *)arg1 originDidChange:(MROrigin *)arg2;
- (void)destinationResolver:(MRDestinationResolver *)arg1 playerPathDidChange:(MRPlayerPath *)arg2;
- (void)destinationResolverDestinationDidInvalidate:(MRDestinationResolver *)arg1;

@end

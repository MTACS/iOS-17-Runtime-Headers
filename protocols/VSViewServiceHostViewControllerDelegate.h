
@protocol VSViewServiceHostViewControllerDelegate <NSObject>

@required

- (void)dismissViewServiceHostViewController:(VSViewServiceHostViewController *)arg1;
- (void)presentViewServiceHostViewController:(VSViewServiceHostViewController *)arg1;
- (void)viewServiceHostViewController:(VSViewServiceHostViewController *)arg1 didCancelRequest:(VSViewServiceRequest *)arg2;
- (void)viewServiceHostViewController:(VSViewServiceHostViewController *)arg1 didChooseAdditionalProvidersForRequest:(VSViewServiceRequest *)arg2;
- (void)viewServiceHostViewController:(VSViewServiceHostViewController *)arg1 request:(VSViewServiceRequest *)arg2 didFailWithError:(NSError *)arg3;
- (void)viewServiceHostViewController:(VSViewServiceHostViewController *)arg1 request:(VSViewServiceRequest *)arg2 didFinishWithResponse:(VSViewServiceResponse *)arg3;
- (bool)viewServiceHostViewController:(VSViewServiceHostViewController *)arg1 shouldAuthenticateAccountProviderWithIdentifier:(NSString *)arg2;

@end

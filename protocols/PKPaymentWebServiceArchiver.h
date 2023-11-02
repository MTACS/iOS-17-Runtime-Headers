
@protocol PKPaymentWebServiceArchiver <PKWebServiceArchiver>

@required

- (void)archiveBackgroundContext:(PKPaymentWebServiceBackgroundContext *)arg1;
- (void)archiveContext:(PKPaymentWebServiceContext *)arg1;

@end

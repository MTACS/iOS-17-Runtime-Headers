
@protocol PKDataReleaseContentViewControllerDelegate <NSObject>

@required

- (void)dataReleaseContentViewController:(PKDataReleaseContentViewController *)arg1 didAuthorizeWithExternalAuthorizationData:(NSData *)arg2 dataToRelease:(PKTransactionReleasedData *)arg3;
- (void)dataReleaseContentViewController:(PKDataReleaseContentViewController *)arg1 didFinishWithError:(NSError *)arg2;
- (void)dataReleaseContentViewController:(PKDataReleaseContentViewController *)arg1 didResolveToMerchant:(PKMerchant *)arg2;
- (void)dataReleaseContentViewControllerDidChangePhysicalButtonState:(PKDataReleaseContentViewController *)arg1;

@end

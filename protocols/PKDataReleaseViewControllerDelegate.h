
@protocol PKDataReleaseViewControllerDelegate <NSObject>

@required

- (void)dataReleaseViewController:(PKDataReleaseViewController *)arg1 didAuthorizeWithExternalAuthorizationData:(NSData *)arg2 dataToRelease:(PKTransactionReleasedData *)arg3;
- (void)dataReleaseViewController:(PKDataReleaseViewController *)arg1 didFinishWithError:(NSError *)arg2;

@optional

- (void)dataReleaseViewController:(PKDataReleaseViewController *)arg1 didResolveToMerchant:(PKMerchant *)arg2;

@end

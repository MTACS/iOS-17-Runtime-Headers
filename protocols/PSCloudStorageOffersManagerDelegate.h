
@protocol PSCloudStorageOffersManagerDelegate <NSObject>

@optional

- (void)manager:(PSCloudStorageOffersManager *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)manager:(PSCloudStorageOffersManager *)arg1 loadDidFailWithError:(NSError *)arg2;
- (void)manager:(PSCloudStorageOffersManager *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)managerDidCancel:(PSCloudStorageOffersManager *)arg1;

@end

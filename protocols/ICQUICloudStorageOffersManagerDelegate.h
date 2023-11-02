
@protocol ICQUICloudStorageOffersManagerDelegate <NSObject>

@optional

- (void)manager:(ICQUICloudStorageOffersManager *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)manager:(ICQUICloudStorageOffersManager *)arg1 loadDidFailWithError:(NSError *)arg2;
- (void)manager:(ICQUICloudStorageOffersManager *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)managerDidCancel:(ICQUICloudStorageOffersManager *)arg1;

@end

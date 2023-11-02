
@protocol UICloudSharingControllerDelegate <NSObject>

@required

- (void)cloudSharingController:(UICloudSharingController *)arg1 failedToSaveShareWithError:(NSError *)arg2;
- (NSString *)itemTitleForCloudSharingController:(UICloudSharingController *)arg1;

@optional

- (void)cloudSharingControllerDidSaveShare:(UICloudSharingController *)arg1;
- (void)cloudSharingControllerDidStopSharing:(UICloudSharingController *)arg1;
- (NSData *)itemThumbnailDataForCloudSharingController:(UICloudSharingController *)arg1;
- (NSString *)itemTypeForCloudSharingController:(UICloudSharingController *)arg1;

@end

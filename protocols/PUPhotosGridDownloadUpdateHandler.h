
@protocol PUPhotosGridDownloadUpdateHandler <NSObject>

@required

- (NSString *)beginShowingProgressForAsset:(PHAsset *)arg1 inCollection:(PHAssetCollection *)arg2;
- (void)endShowingProgressWithIdentifier:(NSString *)arg1 succeeded:(bool)arg2 canceled:(bool)arg3 error:(NSError *)arg4;
- (void)presentAlertController:(UIAlertController *)arg1;
- (void)updateProgressWithIdentifier:(NSString *)arg1 withValue:(double)arg2;

@end

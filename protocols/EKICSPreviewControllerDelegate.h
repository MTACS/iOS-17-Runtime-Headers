
@protocol EKICSPreviewControllerDelegate <NSObject, EKUIAppReviewPrompter>

@optional

- (void)icsPreviewControllerImportDidFail:(EKICSPreviewController *)arg1;
- (void)icsPreviewControllerImportDidImportEvents:(EKICSPreviewController *)arg1;
- (void)icsPreviewControllerImportDidStart:(EKICSPreviewController *)arg1;
- (void)icsPreviewControllerWantsDismissal:(EKICSPreviewController *)arg1;

@end

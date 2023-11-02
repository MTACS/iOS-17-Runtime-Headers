
@protocol PXActivitySharingControllerDelegate <NSObject>

@required

- (void)activitySharingController:(id <PXActivitySharingController>)arg1 didCompleteWithActivityType:(NSString *)arg2 success:(bool)arg3;
- (void)activitySharingControllerDidCancel:(id <PXActivitySharingController>)arg1;

@optional

- (void)activitySharingControllerWillDismissActivityViewController:(id <PXActivitySharingController>)arg1;

@end

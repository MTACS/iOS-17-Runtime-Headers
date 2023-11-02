
@protocol FAActivityViewControllerDelegate <NSObject>

@required

- (void)activityViewController:(FAActivityViewController *)arg1 didCompleteActivityType:(NSString *)arg2;
- (void)activityViewController:(FAActivityViewController *)arg1 willStartAsyncActivity:(UIActivity *)arg2;
- (FAInviteLinkMetadata *)linkMetadataForActivityViewController:(FAActivityViewController *)arg1;

@end


@protocol PXActivitySharingController <NSObject>

@required

- (<PXActivityViewController> *)activityViewController;
- (<PXActivitySharingControllerDelegate> *)delegate;
- (void)selectAllAssets;
- (void)setDelegate:(id <PXActivitySharingControllerDelegate>)arg1;

@end

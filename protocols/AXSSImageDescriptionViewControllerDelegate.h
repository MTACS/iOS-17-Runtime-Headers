
@protocol AXSSImageDescriptionViewControllerDelegate <NSObject>

@required

- (void)imageDescriptionViewControllerDidCancel:(AXSSImageDescriptionViewController *)arg1;
- (void)imageDescriptionViewControllerDidSave:(AXSSImageDescriptionViewController *)arg1;

@optional

- (void)imageDescriptionViewControllerDidDismiss:(AXSSImageDescriptionViewController *)arg1;

@end

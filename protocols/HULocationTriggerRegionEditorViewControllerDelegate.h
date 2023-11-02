
@protocol HULocationTriggerRegionEditorViewControllerDelegate <NSObject>

@required

- (void)regionEditor:(HULocationTriggerRegionEditorViewController *)arg1 didFinishWithRegion:(HULocationTriggerRegion *)arg2;
- (void)regionEditorDidCancel:(HULocationTriggerRegionEditorViewController *)arg1;

@end

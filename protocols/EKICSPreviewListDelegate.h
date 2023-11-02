
@protocol EKICSPreviewListDelegate <NSObject>

@required

- (void)icsPreviewListController:(EKICSPreviewListController *)arg1 didSelectEvent:(EKEvent *)arg2;
- (void)icsPreviewListControllerDidRequestImportAll:(EKICSPreviewListController *)arg1;

@end

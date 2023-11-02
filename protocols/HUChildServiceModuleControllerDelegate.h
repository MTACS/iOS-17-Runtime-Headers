
@protocol HUChildServiceModuleControllerDelegate <HUItemModuleControllerHosting>

@required

- (NAFuture *)childServiceEditorModuleController:(HUChildServiceItemModuleController *)arg1 didSelectItem:(HFServiceItem *)arg2;

@end

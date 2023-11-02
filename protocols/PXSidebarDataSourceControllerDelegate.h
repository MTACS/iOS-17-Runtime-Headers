
@protocol PXSidebarDataSourceControllerDelegate <NSObject>

@required

- (void)sidebarDataSourceController:(PXSidebarDataController *)arg1 didChangeChildrenOfItem:(id)arg2 changeDetails:(PXSidebarItemChangeDetails *)arg3;

@end

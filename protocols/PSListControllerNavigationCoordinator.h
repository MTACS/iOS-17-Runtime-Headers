
@protocol PSListControllerNavigationCoordinator <NSObject>

@required

- (void)listController:(void *)arg1 pushViewController:(void *)arg2 givenRootController:(void *)arg3 withModalStylePopupStateApplicator:(void *)arg4 animated:(void *)arg5; // needs 5 arg types, found 10: PSListController *, UIViewController<PSController> *, PSRootController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*, bool
- (bool)listControllerIsOnTopOfNavigationStack:(PSListController *)arg1 searchTopMostViewControllerChildren:(bool)arg2;
- (bool)listControllerShouldDeselectAfterFormSheetDisappearance:(PSListController *)arg1 givenRootController:(PSRootController *)arg2;
- (bool)listControllerShouldNotDeselectAfterAppearing:(PSListController *)arg1;

@end

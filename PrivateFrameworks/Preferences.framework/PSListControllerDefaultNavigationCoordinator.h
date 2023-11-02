
@interface PSListControllerDefaultNavigationCoordinator : NSObject <PSListControllerNavigationCoordinator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)listController:(id)arg1 pushViewController:(id)arg2 givenRootController:(id)arg3 withModalStylePopupStateApplicator:(id /* block */)arg4 animated:(bool)arg5;
- (bool)listControllerIsOnTopOfNavigationStack:(id)arg1 searchTopMostViewControllerChildren:(bool)arg2;
- (bool)listControllerShouldDeselectAfterFormSheetDisappearance:(id)arg1 givenRootController:(id)arg2;
- (bool)listControllerShouldNotDeselectAfterAppearing:(id)arg1;

@end

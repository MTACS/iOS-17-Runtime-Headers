
@interface PSListControllerDefaultAppearanceProvider : NSObject <PSListControllerAppearanceProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)cellForSpecifier:(id)arg1 inController:(id)arg2;
- (void)customizeTableView:(id)arg1 inContainerView:(id)arg2 hostedInSetupController:(bool)arg3 forListController:(id)arg4;
- (double)estimatedHeightOfRowForCellWithIndexPath:(id)arg1 inController:(id)arg2;
- (void)listController:(id)arg1 updateSectionContentInsetAnimated:(bool)arg2 isRegularWidth:(bool)arg3 contentInsetInitialized:(bool)arg4 contentInsetInitializedApplicator:(id /* block */)arg5;
- (long long)tableViewStyleForListController:(id)arg1;

@end

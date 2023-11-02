
@interface PSUsageBundleDetailController : PSEditableListController

+ (id)mediaGroups;
+ (void)setupSpecifier:(id)arg1 forMediaGroups:(id)arg2;

- (bool)canBeShownFromSuspendedState;
- (void)loadView;
- (id)size:(id)arg1;
- (id)sizeForSpecifier:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)updateSizesAfterDeletingSize:(float)arg1 shouldPop:(bool)arg2;

@end

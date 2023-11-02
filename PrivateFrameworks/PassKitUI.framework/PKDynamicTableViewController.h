
@interface PKDynamicTableViewController : UITableViewController {
    NSArray * _orderOfSectionIdentifiers;
    NSMutableDictionary * _sectionControllerMap;
    NSArray * _sectionControllers;
    NSMutableArray * _sectionItems;
}

@property (nonatomic, retain) NSArray *sectionControllers;

- (void).cxx_destruct;
- (id)_computeSectionControllerMap:(id)arg1;
- (void)_reloadData:(bool)arg1;
- (id)_sectionControllerForSectionIdentifier:(id)arg1;
- (void)_sortMappedSectionIdentifiers:(id)arg1;
- (id)cellForRowAtIndexPath:(id)arg1;
- (bool)hasSectionForSectionIdentifier:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (id)init;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)recomputeMappedSectionsAndReloadSections:(id)arg1 sectionIdentifiers:(id)arg2;
- (void)reloadRow:(long long)arg1 inSectionWithSectionIdentifier:(id)arg2;
- (void)reloadRows:(id)arg1 inSectionWithSectionIdentifier:(id)arg2;
- (void)reloadSectionIdentifier:(id)arg1;
- (void)reloadSectionIdentifiers:(id)arg1;
- (long long)rowAnimationForDeletingSection:(unsigned long long)arg1;
- (long long)rowAnimationForInsertingSection:(unsigned long long)arg1;
- (long long)rowAnimationForReloadingSection:(unsigned long long)arg1;
- (id)sectionControllers;
- (void)setSectionControllers:(id)arg1;
- (void)setSectionControllers:(id)arg1 sectionIdentifiers:(id)arg2;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end

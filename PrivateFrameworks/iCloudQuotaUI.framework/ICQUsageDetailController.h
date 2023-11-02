
@interface ICQUsageDetailController : PSEditableListController {
    NSMutableArray * _documentsGroup;
    NSMutableDictionary * _media;
    bool  _showingAll;
    ICQUsageStorageController * _storageController;
}

@property (nonatomic, readonly) NSDictionary *mediaCache;
@property (nonatomic) ICQUsageStorageController *storageController;

+ (bool)hasMediaForGroups:(id)arg1;
+ (id)mediaGroups;
+ (id)mpKeyTranslations;
+ (void)setupSpecifier:(id)arg1 forMediaGroups:(id)arg2;
+ (float)totalSizeForGroups:(id)arg1;

- (void).cxx_destruct;
- (bool)canBeShownFromSuspendedState;
- (void)confirmAppDeletion;
- (id)copyMediaSpecifiers;
- (void)deleteApp;
- (id)documentsAndDataSpecifiers;
- (id)dynamicSize:(id)arg1;
- (bool)hasMedia;
- (bool)isAppController;
- (void)loadView;
- (id)mediaCache;
- (bool)needsToShowToolbarInPrefsAppRoot;
- (bool)removeMediaEntry:(id)arg1 inSection:(long long)arg2;
- (void)setStorageController:(id)arg1;
- (void)showMore:(id)arg1;
- (id)size:(id)arg1;
- (id)specifiers;
- (id)storageController;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (bool)updateSizesAfterDeletingMediaKind:(id)arg1 deletedSection:(bool)arg2 shouldPop:(bool)arg3;
- (void)viewDidDisappear:(bool)arg1;

@end

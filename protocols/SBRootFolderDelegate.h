
@protocol SBRootFolderDelegate <NSObject>

@required

- (bool)rootFolder:(SBRootFolder *)arg1 canBounceIcon:(SBIcon *)arg2;
- (bool)rootFolder:(SBRootFolder *)arg1 shouldAllowBadgingForIcon:(SBIcon *)arg2;

@optional

- (unsigned long long)allowedGridSizeClassesForDockForRootFolder:(SBRootFolder *)arg1;
- (unsigned long long)allowedGridSizeClassesForTodayListForRootFolder:(SBRootFolder *)arg1;
- (unsigned long long)columnCountForTodayListForRootFolder:(SBRootFolder *)arg1;
- (unsigned long long)maxIconCountForDockForRootFolder:(SBRootFolder *)arg1;
- (bool)rootFolder:(SBRootFolder *)arg1 canAddIcon:(SBIcon *)arg2 toIconList:(SBIconListModel *)arg3 inFolder:(SBFolder *)arg4;
- (bool)rootFolder:(SBRootFolder *)arg1 isGridLayoutValid:(SBIconListGridCellInfo *)arg2 forIconList:(SBIconListModel *)arg3 inFolder:(SBFolder *)arg4;
- (SBIcon *)rootFolder:(SBRootFolder *)arg1 shouldBounceIcon:(SBIcon *)arg2 afterInsertingIcons:(NSArray *)arg3 forIconList:(SBIconListModel *)arg4 inFolder:(SBFolder *)arg5;
- (void)rootFolder:(void *)arg1 wantsToDoPageHidingEducationWithCompletion:(void *)arg2; // needs 2 arg types, found 7: SBRootFolder *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end

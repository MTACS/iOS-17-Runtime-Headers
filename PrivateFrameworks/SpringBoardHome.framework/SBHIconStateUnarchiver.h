
@interface SBHIconStateUnarchiver : NSObject {
    id  _archive;
    <SBHIconStateUnarchiverDelegate> * _delegate;
    SBHIconModel * _iconModel;
    <SBHIconStateUnarchiverIconSource> * _iconSource;
    bool  _postNewsWidgetMigration;
    bool  _removesEmptyFolders;
}

@property (nonatomic, readonly) id archive;
@property (nonatomic, retain) <SBHIconStateUnarchiverDelegate> *delegate;
@property (nonatomic, retain) SBHIconModel *iconModel;
@property (nonatomic, retain) <SBHIconStateUnarchiverIconSource> *iconSource;
@property (nonatomic, readonly) bool postNewsWidgetMigration;
@property (nonatomic) bool removesEmptyFolders;

+ (void)_getFolderDisplayName:(id*)arg1 defaultDisplayName:(id*)arg2 uniqueIdentifier:(id*)arg3 forRepresentation:(id)arg4 iconSource:(id)arg5;

- (void).cxx_destruct;
- (unsigned long long)_allowedGridSizeClassesForDock;
- (unsigned long long)_allowedGridSizeClassesForFolderClass:(Class)arg1;
- (unsigned long long)_allowedGridSizeClassesForTodayList;
- (id)_applicationIconFromRepresentation:(id)arg1 context:(id)arg2;
- (id)_batteryElementWithIdentifier:(id)arg1;
- (bool)_canAddIconDataSource:(id)arg1 toIcon:(id)arg2;
- (id)_customIconElementFromRepresentation:(id)arg1 context:(id)arg2;
- (Class)_folderClassForFolderType:(id)arg1 context:(id)arg2;
- (id)_folderFromRepresentation:(id)arg1 withContext:(id)arg2;
- (void)_getFolderDisplayName:(id*)arg1 defaultDisplayName:(id*)arg2 uniqueIdentifier:(id*)arg3 forRepresentation:(id)arg4;
- (struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; struct SBHIconGridSize { unsigned short x_5_1_1; unsigned short x_5_1_2; } x5; })_gridSizeClassSizes;
- (id)_iconFromRepresentation:(id)arg1 withContext:(id)arg2;
- (id)_listFromRepresentation:(id)arg1 properties:(const struct SBHIconStateArchiverListProperties { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_2_1; unsigned short x_1_2_2; } x_3_1_1; struct SBHIconGridSize { unsigned short x_2_2_1; unsigned short x_2_2_2; } x_3_1_2; struct SBHIconGridSize { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_3_1_3; struct SBHIconGridSize { unsigned short x_4_2_1; unsigned short x_4_2_2; } x_3_1_4; struct SBHIconGridSize { unsigned short x_5_2_1; unsigned short x_5_2_2; } x_3_1_5; } x3; unsigned long long x4; unsigned long long x5; bool x6; long long x7; unsigned long long x8; unsigned long long x9; }*)arg2 identifier:(id)arg3 context:(id)arg4 overflow:(id)arg5;
- (struct SBHIconGridSize { unsigned short x1; unsigned short x2; })_listGridSizeForFolderClass:(Class)arg1;
- (unsigned long long)_listRotatedLayoutClusterGridSizeClass;
- (id)_listWithIcons:(id)arg1 properties:(const struct SBHIconStateArchiverListProperties { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_2_1; unsigned short x_1_2_2; } x_3_1_1; struct SBHIconGridSize { unsigned short x_2_2_1; unsigned short x_2_2_2; } x_3_1_2; struct SBHIconGridSize { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_3_1_3; struct SBHIconGridSize { unsigned short x_4_2_1; unsigned short x_4_2_2; } x_3_1_4; struct SBHIconGridSize { unsigned short x_5_2_1; unsigned short x_5_2_2; } x_3_1_5; } x3; unsigned long long x4; unsigned long long x5; bool x6; long long x7; unsigned long long x8; unsigned long long x9; }*)arg2 identifier:(id)arg3 folder:(id)arg4 overflow:(id)arg5;
- (struct SBHIconGridSize { unsigned short x1; unsigned short x2; })_listWithNonDefaultSizedIconsGridSizeForFolderClass:(Class)arg1;
- (bool)_listsAllowRotatedLayoutForFolderClass:(Class)arg1;
- (long long)_listsFixedIconLocationBehaviorForFolderClass:(Class)arg1;
- (unsigned long long)_listsIconLayoutBehaviorForFolderClass:(Class)arg1;
- (unsigned long long)_maxIconCountForDock;
- (unsigned long long)_maxListCountForFolders;
- (id)_newFolderIconForFolder:(id)arg1;
- (id)_nodeFromRepresentation:(id)arg1 context:(id)arg2;
- (id)_sanitizedFixedIconLocationsFromDictionary:(id)arg1;
- (long long)_suggestionSourceFromRepresentation:(id)arg1;
- (id)_widgetIconFromRepresentation:(id)arg1 context:(id)arg2;
- (void)applyProperties:(const struct SBHIconStateArchiverListProperties { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_2_1; unsigned short x_1_2_2; } x_3_1_1; struct SBHIconGridSize { unsigned short x_2_2_1; unsigned short x_2_2_2; } x_3_1_2; struct SBHIconGridSize { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_3_1_3; struct SBHIconGridSize { unsigned short x_4_2_1; unsigned short x_4_2_2; } x_3_1_4; struct SBHIconGridSize { unsigned short x_5_2_1; unsigned short x_5_2_2; } x_3_1_5; } x3; unsigned long long x4; unsigned long long x5; bool x6; long long x7; unsigned long long x8; unsigned long long x9; }*)arg1 asDefaultPropertiesToFolder:(id)arg2;
- (id)archive;
- (id)delegate;
- (id)effectiveDelegate;
- (void)getDockListProperties:(struct SBHIconStateArchiverListProperties { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_2_1; unsigned short x_1_2_2; } x_3_1_1; struct SBHIconGridSize { unsigned short x_2_2_1; unsigned short x_2_2_2; } x_3_1_2; struct SBHIconGridSize { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_3_1_3; struct SBHIconGridSize { unsigned short x_4_2_1; unsigned short x_4_2_2; } x_3_1_4; struct SBHIconGridSize { unsigned short x_5_2_1; unsigned short x_5_2_2; } x_3_1_5; } x3; unsigned long long x4; unsigned long long x5; bool x6; long long x7; unsigned long long x8; unsigned long long x9; }*)arg1;
- (void)getFavoriteTodayListProperties:(struct SBHIconStateArchiverListProperties { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_2_1; unsigned short x_1_2_2; } x_3_1_1; struct SBHIconGridSize { unsigned short x_2_2_1; unsigned short x_2_2_2; } x_3_1_2; struct SBHIconGridSize { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_3_1_3; struct SBHIconGridSize { unsigned short x_4_2_1; unsigned short x_4_2_2; } x_3_1_4; struct SBHIconGridSize { unsigned short x_5_2_1; unsigned short x_5_2_2; } x_3_1_5; } x3; unsigned long long x4; unsigned long long x5; bool x6; long long x7; unsigned long long x8; unsigned long long x9; }*)arg1;
- (void)getIgnoredListProperties:(struct SBHIconStateArchiverListProperties { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_2_1; unsigned short x_1_2_2; } x_3_1_1; struct SBHIconGridSize { unsigned short x_2_2_1; unsigned short x_2_2_2; } x_3_1_2; struct SBHIconGridSize { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_3_1_3; struct SBHIconGridSize { unsigned short x_4_2_1; unsigned short x_4_2_2; } x_3_1_4; struct SBHIconGridSize { unsigned short x_5_2_1; unsigned short x_5_2_2; } x_3_1_5; } x3; unsigned long long x4; unsigned long long x5; bool x6; long long x7; unsigned long long x8; unsigned long long x9; }*)arg1;
- (void)getProperties:(struct SBHIconStateArchiverListProperties { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_2_1; unsigned short x_1_2_2; } x_3_1_1; struct SBHIconGridSize { unsigned short x_2_2_1; unsigned short x_2_2_2; } x_3_1_2; struct SBHIconGridSize { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_3_1_3; struct SBHIconGridSize { unsigned short x_4_2_1; unsigned short x_4_2_2; } x_3_1_4; struct SBHIconGridSize { unsigned short x_5_2_1; unsigned short x_5_2_2; } x_3_1_5; } x3; unsigned long long x4; unsigned long long x5; bool x6; long long x7; unsigned long long x8; unsigned long long x9; }*)arg1 forFolderClass:(Class)arg2;
- (void)getTodayListProperties:(struct SBHIconStateArchiverListProperties { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_2_1; unsigned short x_1_2_2; } x_3_1_1; struct SBHIconGridSize { unsigned short x_2_2_1; unsigned short x_2_2_2; } x_3_1_2; struct SBHIconGridSize { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_3_1_3; struct SBHIconGridSize { unsigned short x_4_2_1; unsigned short x_4_2_2; } x_3_1_4; struct SBHIconGridSize { unsigned short x_5_2_1; unsigned short x_5_2_2; } x_3_1_5; } x3; unsigned long long x4; unsigned long long x5; bool x6; long long x7; unsigned long long x8; unsigned long long x9; }*)arg1;
- (id)iconModel;
- (id)iconSource;
- (id)init;
- (id)initWithArchive:(id)arg1;
- (id)initWithArchive:(id)arg1 iconModel:(id)arg2;
- (bool)postNewsWidgetMigration;
- (bool)removesEmptyFolders;
- (void)setDelegate:(id)arg1;
- (void)setIconModel:(id)arg1;
- (void)setIconSource:(id)arg1;
- (void)setRemovesEmptyFolders:(bool)arg1;
- (id)unarchive;

@end

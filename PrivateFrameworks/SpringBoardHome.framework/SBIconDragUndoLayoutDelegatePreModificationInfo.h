
@interface SBIconDragUndoLayoutDelegatePreModificationInfo : NSObject {
    NSMapTable * _originalIconsPerListView;
    NSMapTable * _originalScreenLocationsPerIcon;
    SBRootFolderController * _rootFolderController;
    NSArray * _visibleListViews;
}

@property (nonatomic, readonly) NSMapTable *originalIconsPerListView;
@property (nonatomic, readonly) NSMapTable *originalScreenLocationsPerIcon;
@property (nonatomic, readonly) SBRootFolderController *rootFolderController;
@property (nonatomic, readonly, copy) NSArray *visibleListViews;

- (void).cxx_destruct;
- (id)initWithRootFolderController:(id)arg1;
- (id)originalIconsPerListView;
- (id)originalScreenLocationsPerIcon;
- (id)rootFolderController;
- (id)visibleListViews;

@end

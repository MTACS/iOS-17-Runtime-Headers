
@interface SBFolderIcon : SBIcon <SBFolderObserver, SBIconIndexNodeObserver, SBIconObserver> {
    bool  _delayedIconUpdates;
    SBFolder * _folder;
    NSHashTable * _nodeObservers;
    double  _progressPercent;
    long long  _progressState;
    struct __CFRunLoopObserver { } * _updateIconRunLoopObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBFolder *folder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)hasIconImage;

- (void).cxx_destruct;
- (void)_adjustForIconsAdded:(id)arg1 removed:(id)arg2;
- (void)_containedIconAccessoriesDidUpdate:(id)arg1;
- (void)_containedIconImageChanged:(id)arg1;
- (void)_containedIconLaunchEnabledDidUpdate:(id)arg1;
- (void)_performDelayedIconUpdates;
- (void)_updateBadgeValue;
- (void)_updateProgress;
- (void)addNodeObserver:(id)arg1;
- (id)badgeNumberOrString;
- (bool)canBeAddedToMultiItemDrag;
- (bool)canBeAddedToSubfolder;
- (id)containedNodeIdentifiers;
- (bool)containsNodeIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)displayNameForLocation:(id)arg1;
- (id)folder;
- (void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (id)genericIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (unsigned long long)gridCellIndexForIconIndex:(unsigned long long)arg1;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (id)iconAtListIndex:(unsigned long long)arg1 iconIndex:(unsigned long long)arg2;
- (void)iconImageDidUpdate:(id)arg1;
- (Class)iconImageViewClassForLocation:(id)arg1;
- (void)iconLaunchEnabledDidChange:(id)arg1;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)initWithFolder:(id)arg1;
- (id)initWithFolderIcon:(id)arg1 copyFolder:(bool)arg2;
- (void)invalidateUpdateIconRunLoopObserver;
- (bool)isFolderIcon;
- (bool)isProgressPaused;
- (id)leafIconsWithBadgesSortedByImportance;
- (unsigned long long)listIndexForContainedIcon:(id)arg1;
- (void)localeChanged;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (void)nodeDidMoveContainedNodes:(id)arg1;
- (id)nodeIdentifier;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (void)noteContainedIcon:(id)arg1 replacedIcon:(id)arg2;
- (void)noteContainedIconsAdded:(id)arg1 removed:(id)arg2;
- (double)progressPercent;
- (long long)progressState;
- (void)removeNodeObserver:(id)arg1;
- (id)rootFolder;
- (void)rootFolderDelegateDidChange:(id)arg1;
- (void)scheduleUpdateIconRunLoopObserver;
- (void)updateLabel;

@end

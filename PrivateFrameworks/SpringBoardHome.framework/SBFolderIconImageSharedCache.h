
@interface SBFolderIconImageSharedCache : NSObject <SBFolderIconGridCellImageProvider, SBFolderIconObserver, SBFolderObserver, SBHIconImageCacheObserver> {
    NSMapTable * _cachedFolderImages;
    NSMapTable * _cachedMiniGridImages;
    UIImage * _cachingPlaceholderMiniGridImage;
    NSMapTable * _folderIconObservers;
    UIImage * _genericMiniGridImage;
    SBHIconImageCache * _iconImageCache;
    <SBIconListLayout> * _listLayout;
    bool  _miniGridImageLoadingAsynchronous;
    CPMemoryPool * _miniGridImagePool;
    CPMemoryPool * _pool;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHIconImageCache *iconImageCache;
@property (nonatomic, readonly) <SBIconListLayout> *listLayout;
@property (getter=isMiniGridImageLoadingAsynchronous, nonatomic) bool miniGridImageLoadingAsynchronous;
@property (nonatomic, readonly) CPMemoryPool *miniGridImagePool;
@property (nonatomic, readonly) unsigned long long numberOfCacheHits;
@property (nonatomic, readonly) unsigned long long numberOfCacheMisses;
@property (nonatomic, readonly) unsigned long long numberOfCachedImages;
@property (nonatomic, readonly) CPMemoryPool *pool;
@property (readonly) Class superclass;

+ (bool)isMiniGridImageLoadingAsynchronous;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forFolderIcon:(id)arg2;
- (void)cacheGridCellImagesForIcons:(id)arg1;
- (id)cachingPlaceholderMiniGridImage;
- (void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)folder:(id)arg1 didMoveIcon:(id)arg2;
- (void)folder:(id)arg1 didMoveList:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)folderIcon:(id)arg1 containedIconAccessoriesDidUpdate:(id)arg2;
- (void)folderIcon:(id)arg1 containedIconImageDidUpdate:(id)arg2;
- (void)folderIcon:(id)arg1 containedIconLaunchEnabledDidChange:(id)arg2;
- (id)genericMiniGridImage;
- (id)gridCellImageForIcon:(id)arg1;
- (id)gridCellImageOfSize:(struct CGSize { double x1; double x2; })arg1 forIcon:(id)arg2 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg3;
- (id)iconImageCache;
- (void)iconImageCache:(id)arg1 didUpdateImageForIcon:(id)arg2;
- (id)imageForPageAtIndex:(unsigned long long)arg1 inFolderIcon:(id)arg2;
- (void)informObserversOfUpdateForFolderIcon:(id)arg1;
- (id)init;
- (id)initWithListLayout:(id)arg1;
- (bool)isMiniGridImageLoadingAsynchronous;
- (id)listLayout;
- (id)miniGridImagePool;
- (unsigned long long)numberOfCacheHits;
- (unsigned long long)numberOfCacheMisses;
- (unsigned long long)numberOfCachedImages;
- (id)pool;
- (void)rebuildImagesForFolderIcon:(id)arg1;
- (void)rebuildImagesReferencingIcons:(id)arg1;
- (void)removeObserver:(id)arg1 forFolderIcon:(id)arg2;
- (void)setIconImageCache:(id)arg1;
- (void)setMiniGridImageLoadingAsynchronous:(bool)arg1;
- (void)updateCachedImagesForFolderIcon:(id)arg1 afterChangeToContainedForIcon:(id)arg2 imageUpdated:(bool)arg3 treatmentsOnly:(bool)arg4;

@end


@interface SBFolderIconImageCache : NSObject <SBFolderIconGridCellImageProvider, SBFolderIconImageSharedCacheObserver, SBHIconLayoutHiding, SBHIconLayoutHidingAssertionDelegate> {
    NSMapTable * _folderIconObservers;
    SBHIconImageCache * _iconImageCache;
    NSHashTable * _layoutHidingAssertions;
    <SBIconListLayout> * _listLayout;
    SBFolderIconImageSharedCache * _sharedCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHIconImageCache *iconImageCache;
@property (nonatomic, readonly) <SBIconListLayout> *listLayout;
@property (nonatomic, readonly) unsigned long long numberOfCacheHits;
@property (nonatomic, readonly) unsigned long long numberOfCacheMisses;
@property (nonatomic, readonly) unsigned long long numberOfCachedImages;
@property (nonatomic, readonly) SBFolderIconImageSharedCache *sharedCache;
@property (readonly) Class superclass;

+ (id)defaultListLayout;
+ (bool)drawTreatmentForIcon:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)gridCellImageOfSize:(struct CGSize { double x1; double x2; })arg1 forIcon:(id)arg2 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg3;
+ (id)gridCellImageOfSize:(struct CGSize { double x1; double x2; })arg1 forIconImage:(id)arg2;
+ (id)imageForPageAtIndex:(unsigned long long)arg1 inFolderIcon:(id)arg2 listLayout:(id)arg3 gridCellImageProvider:(id)arg4 pool:(id)arg5;
+ (bool)needsTreatmentForIcon:(id)arg1;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forFolderIcon:(id)arg2;
- (id)beginHidingIconsFromLayout:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3;
- (void)cacheGridCellImagesForIcons:(id)arg1;
- (void)folderIconImageSharedCache:(id)arg1 didUpdateImagesForFolderIcon:(id)arg2;
- (id)gridCellImageForIcon:(id)arg1;
- (id)gridCellImageOfSize:(struct CGSize { double x1; double x2; })arg1 forIcon:(id)arg2 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg3;
- (id)iconImageCache;
- (id)imageForPageAtIndex:(unsigned long long)arg1 inFolderIcon:(id)arg2;
- (void)informObserversOfUpdateForAllFolderIcons;
- (void)informObserversOfUpdateForFolderIcon:(id)arg1;
- (id)init;
- (id)initWithListLayout:(id)arg1;
- (id)initWithListLayout:(id)arg1 sharedCache:(id)arg2;
- (void)layoutHidingAssertionDidChange:(id)arg1;
- (void)layoutHidingAssertionDidInvalidate:(id)arg1;
- (id)listLayout;
- (unsigned long long)numberOfCacheHits;
- (unsigned long long)numberOfCacheMisses;
- (unsigned long long)numberOfCachedImages;
- (void)rebuildImagesForFolderIcon:(id)arg1;
- (void)rebuildImagesReferencingIcons:(id)arg1;
- (void)removeObserver:(id)arg1 forFolderIcon:(id)arg2;
- (void)setIconImageCache:(id)arg1;
- (id)sharedCache;
- (bool)shouldSkipGridCellImageForIcon:(id)arg1;

@end

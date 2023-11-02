
@protocol PXMutablePhotosLibraryViewModel <NSObject>

@required

- (void)addPresenter:(id <PXCuratedLibraryViewModelPresenter>)arg1;
- (void)addView:(PXGView *)arg1;
- (Class)cplActionManagerClass;
- (double)daysMarginScale;
- (NSSet *)draggedAssetReferences;
- (bool)isAppearing;
- (bool)isSelecting;
- (void)removePresenter:(id <PXCuratedLibraryViewModelPresenter>)arg1;
- (void)removeView:(PXGView *)arg1;
- (void)resetAllPhotosContentFilterState;
- (void)setCplActionManagerClass:(Class)arg1;
- (void)setDaysMarginScale:(double)arg1;
- (void)setDraggedAssetReferences:(NSSet *)arg1;
- (void)setIsAppearing:(bool)arg1;
- (void)setIsSelecting:(bool)arg1;
- (void)setSidebarCanBecomeVisible:(bool)arg1;
- (void)setSkimmingInfo:(PXCuratedLibraryAssetCollectionSkimmingInfo *)arg1;
- (void)setUserWantsAspectFitContent:(NSNumber *)arg1;
- (void)setViewBasedDecorationsEnabled:(bool)arg1;
- (void)setWantsDarkStatusBar:(bool)arg1;
- (void)setWantsOptionalChromeVisible:(bool)arg1;
- (void)setWantsOptionalChromeVisible:(bool)arg1 changeReason:(long long)arg2;
- (void)setWantsSidebarVisible:(bool)arg1;
- (void)setZoomLevel:(long long)arg1;
- (void)setZoomLevelTransitionPhase:(long long)arg1;
- (bool)sidebarCanBecomeVisible;
- (PXCuratedLibraryAssetCollectionSkimmingInfo *)skimmingInfo;
- (void)toggleSelectionForAssetCollectionReference:(PXAssetCollectionReference *)arg1;
- (void)toggleSelectionForAssetReference:(PXAssetReference *)arg1;
- (void)toggleSelectionForAssetReference:(PXAssetReference *)arg1 updateCursorIndexPath:(bool)arg2;
- (void)toggleSelectionForIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)userDidSetAllPhotosContentFilterState:(PXContentFilterState *)arg1;
- (NSNumber *)userWantsAspectFitContent;
- (bool)viewBasedDecorationsEnabled;
- (NSMutableSet *)visibleAssetCollections;
- (bool)wantsDarkStatusBar;
- (bool)wantsOptionalChromeVisible;
- (bool)wantsSidebarVisible;
- (long long)zoomLevel;
- (long long)zoomLevelTransitionPhase;

@end

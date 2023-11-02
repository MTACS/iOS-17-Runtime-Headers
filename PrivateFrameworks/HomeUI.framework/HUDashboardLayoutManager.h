
@interface HUDashboardLayoutManager : HUCollectionLayoutManager {
    void adaptiveTileDragInteractionLayouts;
    void hoveringGridPosition;
}

- (void).cxx_destruct;
- (id)buildCamerasMosaicSectionFor:(id)arg1 layoutEnvironment:(id)arg2 cameraLayoutOptions:(id)arg3;
- (id)buildNowPlayingSectionFor:(id)arg1 sectionIdentifier:(id)arg2 :(id)arg3;
- (id)buildResponsiveGridCamerasSectionFor:(id)arg1 layoutEnvironment:(id)arg2 cameraLayoutOptions:(id)arg3;
- (id)buildSectionWithIdentifier:(id)arg1 context:(id)arg2 layoutEnvironment:(id)arg3;
- (id)configurationWithContext:(id)arg1 traitCollection:(id)arg2;
- (struct HUGridSize { long long x1; long long x2; })favoritesSectionGridSize;
- (id)generateCameraLayoutOptionsFor:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (bool)isAdaptiveTileStyleInSectionIdentifier:(id)arg1 context:(id)arg2;
- (void)registerSectionDecorationViewsWithLayout:(id)arg1;

@end

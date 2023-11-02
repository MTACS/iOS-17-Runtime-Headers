
@interface HUCollectionLayoutManager : NSObject {
    void adaptiveTilesUsesPrefixes;
    void delegate;
    void layoutOptions;
}

+ (id)defaultInsetGroupedFooter;
+ (id)defaultProminentInsetGroupedHeader;
+ (struct HUGridSize { long long x1; long long x2; })gridSizeForItem:(id)arg1;

- (void).cxx_destruct;
- (id)buildAdaptiveTileSectionFor:(id)arg1 layoutEnvironment:(id)arg2;
- (id)init;
- (void)registerSectionDecorationViewsWithLayout:(id)arg1;

@end

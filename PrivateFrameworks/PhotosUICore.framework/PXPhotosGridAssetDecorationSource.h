
@interface PXPhotosGridAssetDecorationSource : NSObject <PXGAssetBackgroundDecorationSource, PXGAssetBadgeDecorationSource, PXGCaptionDecorationSource, PXGDebugDecorationSource, PXGDisplayAssetRequestObserver, PXGDisplayAssetSource, PXGDragDecorationSource, PXGSelectionDecorationSource, PXGShadowSource, PXGTapbackDecorationSource, PXGViewDecorationSource, PXLoadingStatusManagerObserver, PXPreferencesObserver> {
    <PXAssetImportStatusManager> * _assetImportStatusManager;
    NSMutableSet * _assetUUIDsInCloud;
    NSShadow * _backgroundShadow;
    <PXGDisplayAssetAdjustment> * _backgroundSpriteAdjustment;
    PXAssetBadgeManager * _badgeManager;
    id /* block */  _badgesModifier;
    NSNumber * _cachedSharedLibraryBadgeEnabledSettingValue;
    PXAssetsDataSource * _dataSource;
    PXGGridLayout * _decoratedGridLayout;
    PXGLayout * _decoratedLayout;
    Class  _decorationViewClass;
    NSSet * _draggedAssetReferences;
    NSIndexSet * _draggedItems;
    bool  _durationAlwaysHidden;
    bool  _enableDebugBadgeColors;
    bool  _enableDebugDecoration;
    bool  _enableSpatialBadges;
    bool  _enableSyndicatedAssetVisualTreatment;
    unsigned long long  _forbiddenBadges;
    bool  _forceBadgesOnAllAssets;
    bool  _forceSyndicatedAssetVisualTreatment;
    bool  _hidesInteractiveFavoriteBadges;
    long long  _interItemSpacingThresholdForExteriorFocusRingSelection;
    bool  _isGettingLoadStatus;
    bool  _isInSelectMode;
    NSIndexSet * _itemsWithCoveredBottomTrailingCorner;
    PXLoadingStatusManager * _loadingStatusManager;
    long long  _section;
    bool  _selectionLimitReached;
    PXSelectionSnapshot * _selectionSnapshot;
    struct { 
        union { 
            struct { 
                float topLeft; 
                float topRight; 
                float bottomLeft; 
                float bottomRight; 
            } ; 
            float byIndex[4]; 
        } ; 
    }  _syndicatedAssetBackgroundCornerRadius;
    <PXTapbackStatusManager> * _tapbackStatusManager;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    bool  _wantsDimmedSelectionStyle;
    bool  _wantsFileSizeBadge;
    bool  _wantsNumberedSelectionStyle;
    bool  _wantsSharedLibraryDecorations;
}

@property (nonatomic, retain) <PXAssetImportStatusManager> *assetImportStatusManager;
@property (nonatomic, copy) id /* block */ badgesModifier;
@property (nonatomic, readonly) PXAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) PXGGridLayout *decoratedGridLayout;
@property (nonatomic, readonly) PXGItemsLayout *decoratedItemsLayout;
@property (nonatomic) PXGLayout *decoratedLayout;
@property (nonatomic, retain) Class decorationViewClass;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSSet *draggedAssetReferences;
@property (nonatomic) bool durationAlwaysHidden;
@property (nonatomic) bool enableDebugBadgeColors;
@property (nonatomic) bool enableDebugDecoration;
@property (nonatomic) bool enableSpatialBadges;
@property (nonatomic) bool enableSyndicatedAssetVisualTreatment;
@property (nonatomic) unsigned long long forbiddenBadges;
@property (nonatomic) bool forceSyndicatedAssetVisualTreatment;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesInteractiveFavoriteBadges;
@property (nonatomic) long long interItemSpacingThresholdForExteriorFocusRingSelection;
@property (nonatomic) bool isInSelectMode;
@property (nonatomic, readonly) bool isSharedLibraryBadgeEnabled;
@property (nonatomic, copy) NSIndexSet *itemsWithCoveredBottomTrailingCorner;
@property (nonatomic, retain) PXLoadingStatusManager *loadingStatusManager;
@property (nonatomic, readonly) long long section;
@property (getter=isSelectionLimitReached, nonatomic) bool selectionLimitReached;
@property (nonatomic, retain) PXSelectionSnapshot *selectionSnapshot;
@property (readonly) Class superclass;
@property (nonatomic) struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; } syndicatedAssetBackgroundCornerRadius;
@property (nonatomic, retain) <PXTapbackStatusManager> *tapbackStatusManager;
@property (nonatomic) bool wantsDimmedSelectionStyle;
@property (nonatomic) bool wantsFileSizeBadge;
@property (nonatomic) bool wantsNumberedSelectionStyle;
@property (nonatomic) bool wantsSharedLibraryDecorations;

- (void).cxx_destruct;
- (id)_displayAssetForItem:(long long)arg1;
- (void)_invalidateDragDecoration;
- (void)_invalidateProgressDecoration;
- (void)_invalidateSharedLibraryDecoration;
- (void)_invalidateTapbackDecoration;
- (bool)_isSyndicatedAndUnsavedAssetForItem:(long long)arg1;
- (bool)_isSyndicationCustomTreatmentEnabled;
- (id)_spriteIndexesForItems:(id)arg1 inLayout:(id)arg2;
- (void)_updateDragDecoration;
- (id)adjustmentForDisplayAsset:(id)arg1 spriteIndex:(unsigned int)arg2 inLayout:(id)arg3;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })assetBackgroundCornerRadiusForSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (unsigned long long)assetBackgroundStyleForSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })assetBadgeInfoForAsset:(id)arg1 atSpriteIndex:(unsigned int)arg2 inLayout:(id)arg3;
- (id)assetImportStatusManager;
- (id)backgroundSpriteAdjustment;
- (id /* block */)badgesModifier;
- (double)cornerRadiusForShadowSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)debugDecorationAtSpriteIndex:(unsigned int)arg1 asset:(id)arg2 inLayout:(id)arg3;
- (id)decoratedGridLayout;
- (id)decoratedItemsLayout;
- (id)decoratedLayout;
- (Class)decorationViewClass;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 inLayout:(id)arg2;
- (id)draggedAssetReferences;
- (id)draggingSpriteIndexesInLayout:(id)arg1;
- (bool)durationAlwaysHidden;
- (bool)enableDebugBadgeColors;
- (bool)enableDebugDecoration;
- (bool)enableSpatialBadges;
- (bool)enableSyndicatedAssetVisualTreatment;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })expectedCornerRadiusForItem:(long long)arg1;
- (struct CGSize { double x1; double x2; })expectedInsetsForItem:(long long)arg1;
- (long long)focusRingTypeInLayout:(id)arg1;
- (unsigned long long)forbiddenBadges;
- (bool)forceSyndicatedAssetVisualTreatment;
- (bool)hasTapbacksForSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (bool)hidesInteractiveFavoriteBadges;
- (id)init;
- (long long)interItemSpacingThresholdForExteriorFocusRingSelection;
- (bool)isInSelectMode;
- (bool)isSelectionLimitReached;
- (bool)isSharedLibraryBadgeEnabled;
- (id)itemsWithCoveredBottomTrailingCorner;
- (id)loadStatusForAsset:(id)arg1 atSpriteIndex:(unsigned int)arg2 inLayout:(id)arg3;
- (id)loadingStatusManager;
- (void)loadingStatusManager:(id)arg1 didUpdateLoadingStatus:(id)arg2 forItemIdentifier:(id)arg3;
- (void)observeIsInCloud:(bool)arg1 forDisplayAsset:(id)arg2;
- (long long)overallSelectionOrderAtSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (struct { float x1; float x2; float x3; float x4; })overlayInsetsForSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)preferencesDidChange;
- (long long)section;
- (id)selectedSpriteIndexesInLayout:(id)arg1;
- (unsigned long long)selectionDecorationAdditionsInLayout:(id)arg1;
- (long long)selectionDecorationStyleInLayout:(id)arg1;
- (id)selectionSnapshot;
- (void)setAssetImportStatusManager:(id)arg1;
- (void)setBadgesModifier:(id /* block */)arg1;
- (void)setDataSource:(id)arg1 section:(long long)arg2;
- (void)setDecoratedLayout:(id)arg1;
- (void)setDecorationViewClass:(Class)arg1;
- (void)setDraggedAssetReferences:(id)arg1;
- (void)setDurationAlwaysHidden:(bool)arg1;
- (void)setEnableDebugBadgeColors:(bool)arg1;
- (void)setEnableDebugDecoration:(bool)arg1;
- (void)setEnableSpatialBadges:(bool)arg1;
- (void)setEnableSyndicatedAssetVisualTreatment:(bool)arg1;
- (void)setForbiddenBadges:(unsigned long long)arg1;
- (void)setForceSyndicatedAssetVisualTreatment:(bool)arg1;
- (void)setHidesInteractiveFavoriteBadges:(bool)arg1;
- (void)setInterItemSpacingThresholdForExteriorFocusRingSelection:(long long)arg1;
- (void)setIsInSelectMode:(bool)arg1;
- (void)setItemsWithCoveredBottomTrailingCorner:(id)arg1;
- (void)setLoadingStatusManager:(id)arg1;
- (void)setSelectionLimitReached:(bool)arg1;
- (void)setSelectionSnapshot:(id)arg1;
- (void)setSyndicatedAssetBackgroundCornerRadius:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg1;
- (void)setTapbackStatusManager:(id)arg1;
- (void)setWantsDimmedSelectionStyle:(bool)arg1;
- (void)setWantsFileSizeBadge:(bool)arg1;
- (void)setWantsNumberedSelectionStyle:(bool)arg1;
- (void)setWantsSharedLibraryDecorations:(bool)arg1;
- (id)shadowForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (bool)shouldShowSavedToLibraryBadgeForAsset:(id)arg1 inLayout:(id)arg2;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })syndicatedAssetBackgroundCornerRadius;
- (struct { double x1; double x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; })tapbackConfigurationForProposedConfiguration:(struct { double x1; double x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; })arg1 spriteIndex:(unsigned int)arg2 inLayout:(id)arg3;
- (id)tapbackStatusManager;
- (void)update;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (bool)wantsAssetBadgeDecorationsInLayout:(id)arg1;
- (bool)wantsBackgroundForZeroInset;
- (bool)wantsCaptionDecorationsInLayout:(id)arg1;
- (bool)wantsDebugDecorationInLayout:(id)arg1;
- (bool)wantsDimmedSelectionStyle;
- (bool)wantsFileSizeBadge;
- (bool)wantsFileSizeBadgesInLayout:(id)arg1;
- (bool)wantsInteractiveFavoriteBadgesInLayout:(id)arg1;
- (bool)wantsNumberedSelectionStyle;
- (bool)wantsSharedLibraryDecorations;
- (bool)wantsTapbackDecorationInLayout:(id)arg1;

@end

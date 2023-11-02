
@interface PXStoryLayout : PXGAbsoluteCompositeLayout <PXChangeObserver, PXGItemPlacementController, PXGShadowSource, PXTapToRadarDiagnosticProvider> {
    PXGLayout * _accessoryItemPlacementLayout;
    PXGLayout * _diagnosticOverlayLayout;
    long long  _diagnosticOverlayLayoutIndex;
    PXStoryFadeOverlayLayout * _fadeOverlayLayout;
    long long  _fadeOverlayLayoutIndex;
    PXGItemPlacement * _fullsizeContentPlacementOverride;
    PXGLayout * _fullsizeLayout;
    long long  _fullsizeLayoutIndex;
    PXStoryModel * _model;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _presentedContentFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _presentedContentFrameVelocity;
    double  _relativeZPositionAboveLegibilityGradients;
    PXStoryScrollLayout * _scrollLayout;
    long long  _scrollLayoutIndex;
    NSShadow * _shadow;
    unsigned int  _shadowSpriteIndex;
    PXStoryStyleSwitchingFullsizeLayout * _styleSwitchingFullsizeLayout;
    PXStoryThumbnailChromeLayout * _thumbnailChromeLayout;
    long long  _thumbnailChromeLayoutIndex;
    PXStoryFullsizeLayout * _thumbnailFullsizeLayout;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic) PXGLayout *accessoryItemPlacementLayout;
@property (nonatomic, readonly) PXStoryFullsizeLayout *currentFullsizePlayerLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGLayout *diagnosticOverlayLayout;
@property (nonatomic, readonly) long long diagnosticOverlayLayoutIndex;
@property (nonatomic, readonly) PXStoryFadeOverlayLayout *fadeOverlayLayout;
@property (nonatomic, readonly) long long fadeOverlayLayoutIndex;
@property (nonatomic, retain) PXGItemPlacement *fullsizeContentPlacementOverride;
@property (nonatomic, readonly) PXGLayout *fullsizeLayout;
@property (nonatomic, readonly) long long fullsizeLayoutIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id itemReference;
@property (nonatomic, readonly) PXStoryModel *model;
@property (nonatomic) double relativeZPositionAboveLegibilityGradients;
@property (nonatomic, readonly) unsigned int representingSpriteIndex;
@property (nonatomic, readonly) PXStoryScrollLayout *scrollLayout;
@property (nonatomic, readonly) long long scrollLayoutIndex;
@property (nonatomic, retain) NSShadow *shadow;
@property (nonatomic, readonly) unsigned int shadowSpriteIndex;
@property (nonatomic, readonly) PXStoryStyleSwitchingFullsizeLayout *styleSwitchingFullsizeLayout;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXStoryThumbnailChromeLayout *thumbnailChromeLayout;
@property (nonatomic, readonly) long long thumbnailChromeLayoutIndex;
@property (nonatomic, readonly) PXStoryFullsizeLayout *thumbnailFullsizeLayout;

- (void).cxx_destruct;
- (void)_invalidateAXGroupRole;
- (void)_invalidateContent;
- (void)_invalidateShadow;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 relativeZPosition:(double)arg2 depth:(double)arg3 forSublayoutAtIndex:(long long)arg4;
- (void)_updateAXGroupRole;
- (void)_updateContent;
- (void)_updateShadow;
- (id)accessoryItemPlacementLayout;
- (bool)allowsRepeatedSublayoutsUpdates;
- (void)alphaDidChange;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (unsigned long long)contentChangeTrend;
- (double)cornerRadiusForShadowSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)currentFullsizePlayerLayout;
- (id)diagnosticOverlayLayout;
- (long long)diagnosticOverlayLayoutIndex;
- (id)diagnosticsItemProvidersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)didUpdate;
- (void)enumerateSublayoutsForDetailedPlacement:(id)arg1 ofItemWithReference:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)fadeOverlayLayout;
- (long long)fadeOverlayLayoutIndex;
- (id)fullsizeContentPlacementOverride;
- (id)fullsizeLayout;
- (long long)fullsizeLayoutIndex;
- (id)init;
- (id)initWithModel:(id)arg1;
- (id)itemPlacementControllerForItemReference:(id)arg1;
- (id)itemReference;
- (id)model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)placementInContext:(id)arg1 forItemReference:(id)arg2;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (double)relativeZPositionAboveLegibilityGradients;
- (unsigned int)representingSpriteIndex;
- (id)scrollLayout;
- (long long)scrollLayoutIndex;
- (long long)scrollableAxis;
- (void)setAccessoryItemPlacementLayout:(id)arg1;
- (void)setDiagnosticOverlayLayout:(id)arg1;
- (void)setFullsizeContentPlacementOverride:(id)arg1;
- (void)setPlacementOverride:(id)arg1 forItemReference:(id)arg2;
- (void)setRelativeZPositionAboveLegibilityGradients:(double)arg1;
- (void)setShadow:(id)arg1;
- (id)shadow;
- (id)shadowForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (unsigned int)shadowSpriteIndex;
- (id)styleSwitchingFullsizeLayout;
- (id)thumbnailChromeLayout;
- (long long)thumbnailChromeLayoutIndex;
- (id)thumbnailFullsizeLayout;
- (void)update;
- (void)willUpdate;

@end

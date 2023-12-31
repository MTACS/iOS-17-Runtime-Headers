
@interface SBSwitcherChamoisLayoutAttributes : NSObject <BSDescriptionProviding, NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _containerBounds;
    double  _containerPerspective;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultWindowSize;
    NSArray * _gridHeights;
    NSArray * _gridWidths;
    double  _maximumWindowHeightWithDock;
    double  _maximumWindowWidthForOverlapping;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumDefaultWindowSize;
    double  _minimumWindowWidth;
    unsigned long long  _numberOfRowsWhileInApp;
    bool  _prefersDockHidden;
    bool  _prefersStripHidden;
    bool  _requiresFullScreen;
    double  _screenEdgePadding;
    SBSwitcherChamoisSettings * _settings;
    SBSwitcherChamoisSnapPaddingSettings * _snapPaddingSettings;
    double  _stageCornerRaddii;
    double  _stageInterItemSpacing;
    double  _stageOccludedAppScale;
    double  _stageOcclusionDodgingPeekLength;
    double  _stageOcclusionDodgingPeekScale;
    double  _stageStatusBarClearingAppScale;
    double  _stripCardScale;
    double  _stripCornerRaddii;
    double  _stripIconLength;
    double  _stripInterItemSpacing;
    double  _stripStackDistance;
    double  _stripTiltAngle;
    double  _stripVerticalEdgeSpacing;
    double  _stripWidth;
    double  _switcherHeightForIconAndLabelsUnderEachPile;
    double  _switcherHorizontalEdgeSpacing;
    double  _switcherHorizontalInterItemSpacing;
    double  _switcherPileCardMinimumPeekAmount;
    double  _switcherPileCompactingFactor;
    double  _switcherVerticalEdgeSpacing;
    double  _switcherVerticalInterItemSpacing;
    bool  _usesStripAreaForOverlapping;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containerBounds;
@property (nonatomic) double containerPerspective;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double x1; double x2; } defaultWindowSize;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *gridHeights;
@property (nonatomic, copy) NSArray *gridWidths;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumWindowHeightWithDock;
@property (nonatomic) double maximumWindowWidthForOverlapping;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumDefaultWindowSize;
@property (nonatomic) double minimumWindowWidth;
@property (nonatomic) unsigned long long numberOfRowsWhileInApp;
@property (nonatomic) bool prefersDockHidden;
@property (nonatomic) bool prefersStripHidden;
@property (nonatomic) bool requiresFullScreen;
@property (nonatomic) double screenEdgePadding;
@property (nonatomic) SBSwitcherChamoisSettings *settings;
@property (nonatomic) SBSwitcherChamoisSnapPaddingSettings *snapPaddingSettings;
@property (nonatomic) double stageCornerRaddii;
@property (nonatomic) double stageInterItemSpacing;
@property (nonatomic) double stageOccludedAppScale;
@property (nonatomic) double stageOcclusionDodgingPeekLength;
@property (nonatomic) double stageOcclusionDodgingPeekScale;
@property (nonatomic) double stageStatusBarClearingAppScale;
@property (nonatomic) double stripCardScale;
@property (nonatomic) double stripCornerRaddii;
@property (nonatomic) double stripIconLength;
@property (nonatomic) double stripInterItemSpacing;
@property (nonatomic) double stripStackDistance;
@property (nonatomic) double stripTiltAngle;
@property (nonatomic) double stripVerticalEdgeSpacing;
@property (nonatomic) double stripWidth;
@property (readonly) Class superclass;
@property (nonatomic) double switcherHeightForIconAndLabelsUnderEachPile;
@property (nonatomic) double switcherHorizontalEdgeSpacing;
@property (nonatomic) double switcherHorizontalInterItemSpacing;
@property (nonatomic) double switcherPileCardMinimumPeekAmount;
@property (nonatomic) double switcherPileCompactingFactor;
@property (nonatomic) double switcherVerticalEdgeSpacing;
@property (nonatomic) double switcherVerticalInterItemSpacing;
@property (nonatomic) bool usesStripAreaForOverlapping;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerBounds;
- (double)containerPerspective;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })defaultWindowSize;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)gridHeights;
- (id)gridWidths;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)maximumWindowHeightWithDock;
- (double)maximumWindowWidthForOverlapping;
- (struct CGSize { double x1; double x2; })minimumDefaultWindowSize;
- (double)minimumWindowWidth;
- (unsigned long long)numberOfRowsWhileInApp;
- (double)partiallyOccludedStageScaleForItemWithSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)prefersDockHidden;
- (bool)prefersStripHidden;
- (bool)requiresFullScreen;
- (double)screenEdgePadding;
- (void)setContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContainerPerspective:(double)arg1;
- (void)setDefaultWindowSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGridHeights:(id)arg1;
- (void)setGridWidths:(id)arg1;
- (void)setMaximumWindowHeightWithDock:(double)arg1;
- (void)setMaximumWindowWidthForOverlapping:(double)arg1;
- (void)setMinimumDefaultWindowSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumWindowWidth:(double)arg1;
- (void)setNumberOfRowsWhileInApp:(unsigned long long)arg1;
- (void)setPrefersDockHidden:(bool)arg1;
- (void)setPrefersStripHidden:(bool)arg1;
- (void)setRequiresFullScreen:(bool)arg1;
- (void)setScreenEdgePadding:(double)arg1;
- (void)setSettings:(id)arg1;
- (void)setSnapPaddingSettings:(id)arg1;
- (void)setStageCornerRaddii:(double)arg1;
- (void)setStageInterItemSpacing:(double)arg1;
- (void)setStageOccludedAppScale:(double)arg1;
- (void)setStageOcclusionDodgingPeekLength:(double)arg1;
- (void)setStageOcclusionDodgingPeekScale:(double)arg1;
- (void)setStageStatusBarClearingAppScale:(double)arg1;
- (void)setStripCardScale:(double)arg1;
- (void)setStripCornerRaddii:(double)arg1;
- (void)setStripIconLength:(double)arg1;
- (void)setStripInterItemSpacing:(double)arg1;
- (void)setStripStackDistance:(double)arg1;
- (void)setStripTiltAngle:(double)arg1;
- (void)setStripVerticalEdgeSpacing:(double)arg1;
- (void)setStripWidth:(double)arg1;
- (void)setSwitcherHeightForIconAndLabelsUnderEachPile:(double)arg1;
- (void)setSwitcherHorizontalEdgeSpacing:(double)arg1;
- (void)setSwitcherHorizontalInterItemSpacing:(double)arg1;
- (void)setSwitcherPileCardMinimumPeekAmount:(double)arg1;
- (void)setSwitcherPileCompactingFactor:(double)arg1;
- (void)setSwitcherVerticalEdgeSpacing:(double)arg1;
- (void)setSwitcherVerticalInterItemSpacing:(double)arg1;
- (void)setUsesStripAreaForOverlapping:(bool)arg1;
- (id)settings;
- (id)snapPaddingSettings;
- (double)stageCornerRaddii;
- (double)stageInterItemSpacing;
- (double)stageOccludedAppScale;
- (double)stageOcclusionDodgingPeekLength;
- (double)stageOcclusionDodgingPeekScale;
- (double)stageStatusBarClearingAppScale;
- (double)stripCardScale;
- (double)stripCornerRaddii;
- (double)stripIconLength;
- (double)stripInterItemSpacing;
- (double)stripStackDistance;
- (double)stripTiltAngle;
- (double)stripVerticalEdgeSpacing;
- (double)stripWidth;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (double)switcherHeightForIconAndLabelsUnderEachPile;
- (double)switcherHorizontalEdgeSpacing;
- (double)switcherHorizontalInterItemSpacing;
- (double)switcherPileCardMinimumPeekAmount;
- (double)switcherPileCompactingFactor;
- (double)switcherVerticalEdgeSpacing;
- (double)switcherVerticalInterItemSpacing;
- (bool)usesStripAreaForOverlapping;

@end

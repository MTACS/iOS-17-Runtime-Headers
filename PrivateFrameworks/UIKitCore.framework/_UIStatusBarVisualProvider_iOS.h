
@interface _UIStatusBarVisualProvider_iOS : NSObject <_UIStatusBarVisualProvider> {
    bool  _expanded;
    NSArray * _expandedCellularPlacementsAffectedByAirplaneMode;
    NSArray * _expandedLeadingPlacements;
    _UIStatusBarDisplayItemPlacementNetworkGroup * _expandedNetworkGroup;
    _UIStatusBarDisplayItemPlacement * _expandedPillPlacement;
    NSArray * _expandedTrailingPlacements;
    double  _leadingItemSpacing;
    bool  _onLockScreen;
    _UIStatusBarDisplayItemPlacementGroup * _secondaryWifiGroup;
    _UIStatusBar * _statusBar;
    bool  _wantsPillInExpandedTrailingPlacements;
}

@property (nonatomic, readonly) double airplaneObstacleFadeInDuration;
@property (nonatomic, readonly) double airplaneObstacleFadeOutDuration;
@property (nonatomic, readonly) _UIStatusBarAnimation *animationForAirplaneMode;
@property (nonatomic, readonly) _UIStatusBarAnimation *animationForProminentLocation;
@property (readonly) double bluetoothPaddingInset;
@property (nonatomic, readonly) bool canFixupDisplayItemAttributes;
@property (nonatomic, readonly) UIFont *clockFont;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expanded;
@property (nonatomic, readonly) NSArray *expandedCellularPlacementsAffectedByAirplaneMode;
@property (readonly) double expandedItemSpacing;
@property (nonatomic, readonly) NSArray *expandedLeadingPlacements;
@property (nonatomic, readonly) _UIStatusBarDisplayItemPlacementNetworkGroup *expandedNetworkGroup;
@property (nonatomic, readonly) _UIStatusBarDisplayItemPlacement *expandedPillPlacement;
@property (nonatomic, readonly) NSArray *expandedTrailingPlacements;
@property (readonly) bool hasCellularCapability;
@property (readonly) unsigned long long hash;
@property (readonly) double itemSpacing;
@property (readonly) double leadingItemSpacing;
@property (nonatomic) bool onLockScreen;
@property (readonly) double regionSpacing;
@property (nonatomic, retain) _UIStatusBarDisplayItemPlacementGroup *secondaryWifiGroup;
@property (nonatomic) _UIStatusBar *statusBar;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsIndirectPointerTouchActions;
@property (readonly) bool wantsExpandedLeadingPlacements;
@property (readonly) bool wantsPillInExpandedTrailingPlacements;

+ (double)cornerRadius;
+ (double)height;
+ (struct CGSize { double x1; double x2; })intrinsicContentSizeForOrientation:(long long)arg1;
+ (bool)requiresIterativeOverflowLayout;
+ (bool)scalesWithScreenNativeScale;
+ (Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2;

- (void).cxx_destruct;
- (void)_applyToAppearingRegions:(bool)arg1 block:(id /* block */)arg2;
- (void)_createExpandedPlacements;
- (void)actionable:(id)arg1 highlighted:(bool)arg2 initialPress:(bool)arg3;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (double)airplaneObstacleFadeInDuration;
- (double)airplaneObstacleFadeOutDuration;
- (double)airplaneShouldFadeForAnimationType:(long long)arg1;
- (double)airplaneSpeedForAnimationType:(long long)arg1;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id*)arg1 animationType:(long long)arg2;
- (id)animationForAirplaneMode;
- (id)animationForProminentLocation;
- (double)bluetoothPaddingInset;
- (id)clockFont;
- (id)defaultAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (bool)expanded;
- (id)expandedCellularPlacementsAffectedByAirplaneMode;
- (double)expandedItemSpacing;
- (id)expandedLeadingPlacements;
- (id)expandedNetworkGroup;
- (id)expandedPillPlacement;
- (id)expandedTrailingPlacements;
- (bool)hasCellularCapability;
- (bool)hasCustomAnimationForDisplayItemWithIdentifier:(id)arg1 removal:(bool)arg2;
- (id)init;
- (double)itemSpacing;
- (double)leadingItemSpacing;
- (void)modeUpdatedFromMode:(long long)arg1;
- (bool)onLockScreen;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (double)regionSpacing;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)secondaryWifiGroup;
- (void)setExpanded:(bool)arg1;
- (void)setOnLockScreen:(bool)arg1;
- (void)setSecondaryWifiGroup:(id)arg1;
- (void)setStatusBar:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (id)statusBar;
- (id)styleAttributesForStyle:(long long)arg1;
- (bool)supportsIndirectPointerTouchActions;
- (void)updateDataForService:(id)arg1;
- (void)updateDataForSystemNavigation:(id)arg1;
- (bool)wantsBackgroundActivityPillInExpandedTrailingPlacements;
- (bool)wantsExpandedLeadingPlacements;
- (bool)wantsPillInExpandedTrailingPlacements;
- (id)willUpdateWithData:(id)arg1;

@end
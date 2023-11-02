
@interface STUIStatusBarVisualProvider_Test : NSObject <STUIStatusBarVisualProvider> {
    NSSet * _allRegionIdentifiers;
    NSMutableDictionary * _orderedDisplayItemPlacements;
    NSMutableDictionary * _overriddenStyleAttributes;
    STUIStatusBar * _statusBar;
}

@property (nonatomic, readonly) NSSet *allRegionIdentifiers;
@property (nonatomic, readonly) bool canFixupDisplayItemAttributes;
@property (nonatomic, readonly) UIFont *clockFont;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *orderedDisplayItemPlacements;
@property (nonatomic, retain) NSMutableDictionary *overriddenStyleAttributes;
@property (nonatomic) STUIStatusBar *statusBar;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsIndirectPointerTouchActions;

+ (struct CGSize { double x1; double x2; })intrinsicContentSizeForOrientation:(long long)arg1;
+ (bool)requiresIterativeOverflowLayout;
+ (bool)scalesWithScreenNativeScale;

- (void).cxx_destruct;
- (id)allRegionIdentifiers;
- (id)clockFont;
- (id)init;
- (id)orderedDisplayItemPlacements;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)overriddenStyleAttributes;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (void)setOrderedDisplayItemPlacements:(id)arg1;
- (void)setOrderedDisplayItemPlacements:(id)arg1 inRegionWithIdentifier:(id)arg2;
- (void)setOverriddenStyleAttributes:(id)arg1;
- (void)setOverriddenStyleAttributes:(id)arg1 forDisplayItemWithIdentifier:(id)arg2;
- (void)setStatusBar:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (id)statusBar;
- (id)styleAttributesForStyle:(long long)arg1;
- (bool)supportsIndirectPointerTouchActions;

@end

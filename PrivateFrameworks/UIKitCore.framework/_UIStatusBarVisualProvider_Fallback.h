
@interface _UIStatusBarVisualProvider_Fallback : NSObject <_UIStatusBarVisualProvider> {
    NSArray * _placements;
    _UIStatusBar * _statusBar;
}

@property (nonatomic, readonly) bool canFixupDisplayItemAttributes;
@property (nonatomic, readonly) UIFont *clockFont;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *placements;
@property (nonatomic) _UIStatusBar *statusBar;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsIndirectPointerTouchActions;

+ (struct CGSize { double x1; double x2; })intrinsicContentSizeForOrientation:(long long)arg1;
+ (bool)requiresIterativeOverflowLayout;
+ (bool)scalesWithScreenNativeScale;

- (void).cxx_destruct;
- (id)clockFont;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)placements;
- (void)setPlacements:(id)arg1;
- (void)setStatusBar:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (id)statusBar;
- (id)styleAttributesForStyle:(long long)arg1;
- (bool)supportsIndirectPointerTouchActions;

@end

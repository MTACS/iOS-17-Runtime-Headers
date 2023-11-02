
@protocol SBIconViewCustomImageViewControlling <SBCrossfadingIconImageSource>

@required

- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;

@optional

- (void)addCustomImageViewControllerObserver:(id <SBIconViewCustomImageViewControllerObserving>)arg1;
- (NSArray *)applicationShortcutItems;
- (struct SBIconApproximateLayoutPosition { unsigned long long x1; unsigned long long x2; })approximateLayoutPosition;
- (bool)automaticallyUpdatesVisiblySettled;
- (id /* block */)backgroundViewConfigurator:(void *)arg1; // needs 1 arg types, found 6: id /* block */, UIView *, <SBLeafIconDataSource> *, void*, id, SEL
- (id /* block */)backgroundViewProvider:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (double)brightness;
- (<BSInvalidatable> *)cancelTouchesForCurrentEventInHostedContent;
- (void)didSelectApplicationShortcutItem:(SBSApplicationShortcutItem *)arg1;
- (<BSInvalidatable> *)disableImageUpdatesForReason:(NSString *)arg1;
- (void)evaluateBackground;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusEffectBounds;
- (struct CGPoint { double x1; double x2; })focusEffectCenter;
- (bool)forcesEdgeAntialiasing;
- (SBIcon *)icon;
- (unsigned long long)imageViewAlignment;
- (bool)isDropping;
- (bool)isEditing;
- (bool)isOverlapping;
- (bool)isShowingContextMenu;
- (bool)isUserInteractionEnabled;
- (_UILegibilitySettings *)legibilitySettings;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumPreferredEdgeInsetsForContextMenu;
- (unsigned long long)pauseReasons;
- (unsigned long long)presentationMode;
- (void)removeCustomImageViewControllerObserver:(id <SBIconViewCustomImageViewControllerObserving>)arg1;
- (void)setApproximateLayoutPosition:(struct SBIconApproximateLayoutPosition { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAutomaticallyUpdatesVisiblySettled:(bool)arg1;
- (void)setBackgroundViewConfigurator:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIView *, <SBLeafIconDataSource> *, void*
- (void)setBackgroundViewProvider:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, UIView *, id /* block */, void*
- (void)setBrightness:(double)arg1;
- (void)setDropping:(bool)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setForcesEdgeAntialiasing:(bool)arg1;
- (void)setImageViewAlignment:(unsigned long long)arg1;
- (void)setLegibilitySettings:(_UILegibilitySettings *)arg1;
- (void)setOverlapping:(bool)arg1;
- (void)setPauseReasons:(unsigned long long)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setShowingContextMenu:(bool)arg1;
- (void)setShowsSnapshotWhenDeactivated:(bool)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setUserVisibilityStatus:(unsigned long long)arg1;
- (void)setWantsEditingDisplayStyle:(bool)arg1;
- (bool)showsSnapshotWhenDeactivated;
- (UIView *)snapshotView;
- (struct CGPoint { double x1; double x2; })snapshotViewCenter;
- (double)snapshotViewScaleFactor;
- (UIView *)springLoadingEffectTargetView;
- (unsigned long long)userVisibilityStatus;
- (<SBLeafIconDataSource> *)visiblyActiveDataSource;
- (bool)wantsCaptureOnlyBackgroundView;
- (bool)wantsEditingDisplayStyle;
- (bool)wantsLabelHidden;
- (void)willShowContextMenuAtLocation:(struct CGPoint { double x1; double x2; })arg1;

@end

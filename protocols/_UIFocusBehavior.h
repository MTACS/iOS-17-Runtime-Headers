
@protocol _UIFocusBehavior <NSObject>

@required

+ (<_UIFocusBehavior> *)sharedInstance;

- (bool)autoDismissesPopoverControllersOnFocusIntersection;
- (long long)buttonSelectionMode;
- (long long)cellFocusability;
- (bool)controlCanBecomeFocused:(UIControl *)arg1;
- (unsigned long long)defaultFocusScrollOffsetResolver;
- (bool)defaultValueForSelectionFollowsFocusInCollectionView:(UICollectionView *)arg1;
- (bool)defaultValueForSelectionFollowsFocusInTableView:(UITableView *)arg1;
- (long long)deliverKeyEventsToFocusEngine;
- (bool)enforcesStrictTargetContentOffsetAdjustmentBehavior;
- (long long)focusCastingMode;
- (long long)focusDeferral;
- (unsigned long long)focusGroupContainmentBehavior;
- (unsigned long long)focusGroupMovementBehavior;
- (long long)focusRingVisibility;
- (long long)focusSystemDeactivationMode;
- (bool)honorsFocusSystemEnabledInfoPlistKey;
- (bool)ignoresKeyWindowStatusWhenRestoringFocus;
- (bool)includesContentScrollViewInPreferredFocusEnvironments;
- (long long)indirectMovementPriority;
- (bool)isContainerEligibleForFocusUpdateSearchRoot:(_UIFocusEnvironmentContainerTuple *)arg1;
- (long long)pageButtonScrollingStyle;
- (bool)preventsCellFocusabilityWhileEditing;
- (bool)refinesIndexBarTargetContentOffset;
- (long long)requiredInputDevices;
- (long long)scrollingMode;
- (bool)searchBarTextFieldCanBecomeFocused;
- (bool)shouldCallAccessibilityOverrides;
- (bool)shouldConvertIndirectTapsIntoArrowKeys;
- (bool)shouldEnableFocusOnSelect;
- (bool)shouldSupressIndirectMovementOnSelect;
- (bool)shouldUseAccessibilityCompareForFocusGroupsInExternallyPlacedWindows;
- (bool)shouldUseAccessibilityCompareForItemGeometry;
- (bool)showsFocusRingForItem:(id <UIFocusItem>)arg1;
- (long long)skipKeyCommandsForKeyEvents;
- (double)stabilizedLinearFocusMovementTimeout;
- (bool)supportViewTransparencyAndMultipleWindows;
- (bool)supportsArrowKeys;
- (bool)supportsClipToBounds;
- (bool)supportsGameControllers;
- (bool)supportsIndirectPanningMovement;
- (bool)supportsIndirectRotaryMovement;
- (bool)supportsLinearMovementDebugOverlay;
- (bool)supportsParentFocusRings;
- (bool)supportsTabKey;
- (bool)syncsFocusAndResponder;
- (bool)tabBarButtonCanBecomeFocused;
- (bool)tabBarCanBecomeFocused;
- (bool)tabBasedMovementLoops;
- (bool)textViewCanBecomeFocused:(UITextView *)arg1;
- (bool)throttlesProgrammaticFocusUpdates;
- (bool)treatFirstAndLastHeadingsAsGlobal;
- (bool)wantsFocusSystemForScene:(UIScene *)arg1;
- (bool)wantsTreeLocking;

@end

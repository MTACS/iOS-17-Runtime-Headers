
@interface SBSwitcherModifier : SBChainableModifier <SBSwitcherContextProviding, SBSwitcherMultitaskingQueryProviding> {
    bool  _verifyModifierStackCoherencyCheckAfterHandlingEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contextProtocol;
+ (id)newEventResponse;
+ (id)queryProtocol;

- (id)_handleEvent:(id)arg1;
- (id)appLayoutsToCacheSnapshotsWithVisibleRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 numberOfSnapshotsToCache:(unsigned long long)arg2 biasForward:(bool)arg3;
- (id)autoLayoutSpaceForAppLayout:(id)arg1;
- (id)defaultAppLayoutsToCacheSnapshots;
- (id)displayName;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1 numberOfRows:(unsigned long long)arg2 padding:(double)arg3 layoutDirection:(unsigned long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForContinuousExposePeekingDisplayItem:(id)arg1 inAppLayout:(id)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 defaultFrameForLayoutRole:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)handleAnimatablePropertyChangedEvent:(id)arg1;
- (id)handleBlurProgressEvent:(id)arg1;
- (id)handleContinuousExposeIdentifiersChangedEvent:(id)arg1;
- (id)handleContinuousExposeStripEdgeProtectTongueEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleHideMorphToPIPAppLayoutEvent:(id)arg1;
- (id)handleHighlightEvent:(id)arg1;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (id)handleHomeGrabberSettingsChangedEvent:(id)arg1;
- (id)handleHoverEvent:(id)arg1;
- (id)handleInitialSetupEvent:(id)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)handleMedusaSettingsChangedEvent:(id)arg1;
- (id)handlePointerCrossedDisplayBoundaryEvent:(id)arg1;
- (id)handlePrepareForSceneUpdateEvent:(id)arg1;
- (id)handleReduceMotionChangedEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleRepositionProgressEvent:(id)arg1;
- (id)handleResizeProgressEvent:(id)arg1;
- (id)handleSceneReadyEvent:(id)arg1;
- (id)handleScrollEvent:(id)arg1;
- (id)handleShelfFocusedDisplayItemsChangedEvent:(id)arg1;
- (id)handleSlideOverEdgeProtectTongueEvent:(id)arg1;
- (id)handleSwipeToKillEvent:(id)arg1;
- (id)handleSwitcherDropEvent:(id)arg1;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleTapAppLayoutHeaderEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (id)handleTapSlideOverTongueEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)handleUpdateFocusedAppLayoutEvent:(id)arg1;
- (id)handleUpdateWindowingModeEvent:(id)arg1;
- (unsigned long long)indexOfFirstFloatingAppFromAppLayouts:(id)arg1;
- (unsigned long long)indexOfFirstMainAppLayoutFromAppLayouts:(id)arg1;
- (id)init;
- (id)loggingCategory;
- (void)performWithTemporarilyInsertedAppLayout:(id)arg1 atIndex:(unsigned long long)arg2 block:(id /* block */)arg3;
- (bool)runsInternalVerificationAfterEventDispatch;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scaledFrameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scaledFrameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)shouldZoomToSystemApertureForEvent:(id)arg1 activeLayout:(id)arg2;
- (id)stackDescription;
- (id)stackDescriptionWithPrefix:(id)arg1;

@end

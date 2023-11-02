
@interface SBShelfCarouselSwitcherModifier : SBSwitcherModifier {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _centerCardSize_containerViewBounds;
    struct CGSize { 
        double width; 
        double height; 
    }  _centerCardSize_landscapeCardSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _centerCardSize_portraitCardSize;
    unsigned long long  _fittedContentSize_lastAppLayoutsGenCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _fittedContentSize_lastContainerViewBounds;
    long long  _fittedContentSize_lastOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _fittedContentSize_lastSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _fittedContentSize_lastSwitcherViewBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _floatingCardSize_containerViewBounds;
    struct CGSize { 
        double width; 
        double height; 
    }  _floatingCardSize_landscapeCardSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _floatingCardSize_portraitCardSize;
    bool  _hasReceivedInitialSetupEvent;
    unsigned long long  _visibleRange_lastAppLayoutsGenCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRange_lastContainerViewBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _visibleRange_lastContentOffset;
    long long  _visibleRange_lastOrientation;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _visibleRange_lastRange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRange_lastSwitcherViewBounds;
}

@property (nonatomic, readonly, copy) NSArray *orderedVisibleAppLayouts;

- (struct CGSize { double x1; double x2; })_cardSizeForAppLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })_cardSizeForIndex:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_centerCardSizeForOrientation:(long long)arg1;
- (struct CGSize { double x1; double x2; })_contentSize;
- (double)_effectiveMaxCarouselWidth;
- (struct CGSize { double x1; double x2; })_fittedContentSize;
- (struct CGSize { double x1; double x2; })_floatingCardSizeForOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForIndex:(unsigned long long)arg1 applyCarousel:(bool)arg2;
- (bool)_isIndexVisible:(unsigned long long)arg1;
- (id)_orderedVisibleAppLayouts;
- (double)_trailingPaddingIfAny;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_visibleRange;
- (unsigned long long)activeCornersForTouchResizeForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (id)activeLeafAppLayoutsReachableByKeyboardShortcut;
- (BOOL)activityModeForAppLayout:(id)arg1;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)adjustedContinuousExposeIdentifiersInStripFromPreviousIdentifiersInStrip:(id)arg1;
- (id)adjustedContinuousExposeIdentifiersInSwitcherFromPreviousIdentifiersInSwitcher:(id)arg1 identifiersInStrip:(id)arg2;
- (struct CGPoint { double x1; double x2; })adjustedOffsetForOffset:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2 startPoint:(struct CGPoint { double x1; double x2; })arg3 locationInView:(struct CGPoint { double x1; double x2; })arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6;
- (struct CGPoint { double x1; double x2; })anchorPointForIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (id)appLayoutForReceivingHardwareButtonEvents;
- (id)appLayoutToAttachSlideOverTongue;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (id)appLayoutsToCacheSnapshots;
- (id)appLayoutsToResignActive;
- (struct SBSwitcherAsyncRenderingAttributes { bool x1; bool x2; })asyncRenderingAttributesForAppLayout:(id)arg1;
- (double)backgroundOpacityForIndex:(unsigned long long)arg1;
- (double)blurViewIconScaleForIndex:(unsigned long long)arg1;
- (bool)canPerformKeyboardShortcutAction:(long long)arg1 forBundleIdentifier:(id)arg2;
- (bool)canSelectLeafWithModifierKeysInAppLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingFrameForIndex:(unsigned long long)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingFrameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (id)containerLeafAppLayoutForShelf:(id)arg1;
- (double)containerStatusBarAnimationDuration;
- (struct CGPoint { double x1; double x2; })contentOffsetForIndex:(unsigned long long)arg1 alignment:(long long)arg2;
- (double)contentPageViewScaleForAppLayout:(id)arg1 withScale:(double)arg2;
- (double)contentViewScale;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiForIndex:(unsigned long long)arg1;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (double)dockProgress;
- (long long)dockUpdateMode;
- (double)dockWindowLevel;
- (unsigned long long)dockWindowLevelPriority;
- (id)foregroundAppLayouts;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForShelf:(id)arg1;
- (id)handleInitialSetupEvent:(id)arg1;
- (id)handleShelfFocusedDisplayItemsChangedEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (long long)headerStyleForIndex:(unsigned long long)arg1;
- (double)homeScreenAlpha;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenDimmingAlpha;
- (double)homeScreenScale;
- (id)inactiveAppLayoutsReachableByKeyboardShortcut;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;
- (id)init;
- (bool)isContainerStatusBarVisible;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isFocusEnabledForAppLayout:(id)arg1;
- (bool)isHomeAffordanceSupportedForAppLayout:(id)arg1;
- (bool)isHomeScreenContentRequired;
- (bool)isIndexRubberbandableForSwipeToKill:(unsigned long long)arg1;
- (bool)isItemContainerPointerInteractionEnabled;
- (bool)isItemResizingAllowedForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleDraggable:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleEligibleForContentDragSpringLoading:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isLayoutRoleKillable:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)isLayoutRoleSelectable:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isResizeGrabberVisibleForAppLayout:(id)arg1;
- (bool)isScrollEnabled;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (BOOL)jetsamModeForAppLayout:(id)arg1;
- (id)keyboardSuppressionMode;
- (double)lighteningAlphaForIndex:(unsigned long long)arg1;
- (double)minimumTranslationToKillIndex:(unsigned long long)arg1;
- (unsigned long long)multipleWindowsIndicatorLayoutRoleMaskForAppLayout:(id)arg1;
- (id)neighboringAppLayoutsForFocusedAppLayout:(id)arg1;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)orderedVisibleAppLayouts;
- (double)plusButtonAlpha;
- (long long)plusButtonStyle;
- (long long)preferredSnapshotOrientationForAppLayout:(id)arg1;
- (double)reopenClosedWindowsButtonAlpha;
- (double)reopenClosedWindowsButtonScale;
- (void)resetAdjustedScrollingState;
- (struct CGPoint { double x1; double x2; })restingOffsetForScrollOffset:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (double)rotationAngleForIndex:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)scrollViewAttributes;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (long long)shadowStyleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shelfBackgroundBlurFrame;
- (double)shelfBackgroundBlurOpacity;
- (bool)shouldAcceleratedHomeButtonPressBegin;
- (bool)shouldAccessoryDrawShadowForAppLayout:(id)arg1;
- (bool)shouldAllowContentViewTouchesForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)shouldAllowGroupOpacityForAppLayout:(id)arg1;
- (bool)shouldAnimateInsertionOrRemovalOfAppLayout:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)shouldBringCardToFrontDuringInsertionOrRemoval;
- (bool)shouldConfigureInAppDockHiddenAssertion;
- (bool)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (bool)shouldPerformCrossfadeForReduceMotion;
- (bool)shouldPerformRotationAnimationForOrientationChange;
- (bool)shouldRubberbandFullScreenHomeGrabberView;
- (bool)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1;
- (bool)shouldScrollViewBlockTouches;
- (bool)shouldTetherItemsAndAccessoriesInAppLayout:(id)arg1;
- (bool)shouldUseBackgroundWallpaperTreatmentForIndex:(unsigned long long)arg1;
- (bool)shouldUseBrightMaterialForIndex:(unsigned long long)arg1;
- (unsigned long long)slideOverTongueDirection;
- (unsigned long long)slideOverTongueState;
- (double)snapshotScaleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)switcherBackdropBlurProgress;
- (long long)switcherBackdropBlurType;
- (double)switcherDimmingAlpha;
- (bool)switcherDimmingViewBlocksTouches;
- (long long)tintStyleForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (id)topMostLayoutElements;
- (long long)touchBehaviorForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (unsigned long long)transactionCompletionOptions;
- (id)visibleAppLayouts;
- (id)visibleHomeAffordanceLayoutElements;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (id)visibleShelves;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1;
- (double)wallpaperScale;
- (long long)wallpaperStyle;
- (bool)wantsAsynchronousSurfaceRetentionAssertion;
- (bool)wantsDockBehaviorAssertion;
- (bool)wantsDockWindowLevelAssertion;
- (bool)wantsHomeScreenPointerInteractions;
- (bool)wantsSlideOverTongue;
- (bool)wantsSwitcherBackdropBlur;
- (bool)wantsSwitcherDimmingView;

@end

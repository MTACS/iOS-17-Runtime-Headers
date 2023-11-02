
@protocol _UIRemoteViewController_ViewControllerOperatorInterface

@required

- (void)__dismissTextServiceSessionAnimated:(bool)arg1;
- (void)__handleFocusMovementAction:(UIFocusMovementAction *)arg1;
- (void)__setServiceMaxFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)__setSupportedInterfaceOrientations:(NSArray *)arg1;
- (void)__setViewServiceIsDisplayingPopover:(bool)arg1;
- (void)__showEditAlertViewWithToken:(long long)arg1 canUndo:(bool)arg2 canRedo:(bool)arg3;
- (void)__showServiceForText:(void *)arg1 selectedTextRangeValue:(void *)arg2 type:(void *)arg3 fromRectValue:(void *)arg4 replyHandler:(void *)arg5; // needs 5 arg types, found 11: NSString *, NSValue *, long long, NSValue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)__showServiceForText:(void *)arg1 type:(void *)arg2 fromRectValue:(void *)arg3 replyHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, long long, NSValue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)__showServiceForType:(void *)arg1 withContext:(void *)arg2 replyHandler:(void *)arg3; // needs 3 arg types, found 9: long long, _UITextServiceSessionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)__trampolineButtonPressData:(NSData *)arg1 canceled:(bool)arg2;
- (void)__viewServiceAddSceneForwardingLayersForOwners:(NSSet *)arg1;
- (void)__viewServiceDidChangeHasScrollToTopView:(bool)arg1;
- (void)__viewServiceDidChangeKeyWindow:(bool)arg1;
- (void)__viewServiceDidPromoteFirstResponderWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)__viewServiceDidUpdateClientToHostGesture:(_UIClientToHostGestureChangeAction *)arg1;
- (void)__viewServiceDidUpdateMultitaskingDragExclusionRects:(NSArray *)arg1;
- (void)__viewServiceDidUpdatePreferredScreenEdgesDeferringSystemGestures:(unsigned long long)arg1;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(long long)arg1 preferredStatusBarVisibility:(int)arg2 updateAnimation:(long long)arg3 currentAnimationSettings:(BSAnimationSettings *)arg4;
- (void)__viewServiceDidUpdatePreferredUserInterfaceStyle:(long long)arg1;
- (void)__viewServiceDidUpdatePreferredWhitePointAdaptationStyle:(long long)arg1 animationSettings:(BSAnimationSettings *)arg2;
- (void)__viewServiceDidUpdatePrefersHomeIndicatorAutoHidden:(bool)arg1;
- (void)__viewServiceDidUpdatePrefersPointerLocked:(bool)arg1;
- (void)__viewServiceDidUpdateResolvedPhysicalButtonConfigurations:(_UIPhysicalButtonConfigurationSet *)arg1;
- (void)__viewServiceInstrinsicContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1 fence:(BKSAnimationFenceHandle *)arg2;
- (void)__viewServicePopoverDidChangeContentSize:(void *)arg1 animated:(void *)arg2 fence:(void *)arg3 withReplyHandler:(void *)arg4; // needs 4 arg types, found 9: struct CGSize { double x1; double x2; }, bool, BKSAnimationFenceHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGSize { double x1; double x2; }, void*
- (void)__viewServicePopoverDidSetUseToolbarShine:(bool)arg1;
- (void)__viewServicePreferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1 fence:(BKSAnimationFenceHandle *)arg2;
- (void)__viewServiceRemoveSceneForwardingLayersForOwners:(NSSet *)arg1;
- (void)__viewServiceSheetGrabberDidTriggerPrimaryAction;
- (void)__viewServiceSheetInteractionDraggingDidBeginWithRubberBandCoefficient:(double)arg1 dismissible:(bool)arg2 interruptedOffset:(struct CGPoint { double x1; double x2; })arg3;
- (void)__viewServiceSheetInteractionDraggingDidChangeWithTranslation:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2 animateChange:(bool)arg3 dismissible:(bool)arg4;
- (void)__viewServiceSheetInteractionDraggingDidEnd;
- (void)__viewServiceSheetPresentationClientConfigurationDidChange:(_UISheetPresentationControllerClientConfiguration *)arg1 attributes:(_UIViewAnimationAttributes *)arg2;
- (void)__viewServiceWantsKeyboardEventsWithoutFirstResponderAndCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end


@protocol _UIViewServiceViewControllerOperator_RemoteViewControllerInterface <_UIViewServiceDeputy_UIViewServiceInterface, _UIViewServiceUIBehaviorInterface>

@required

- (void)__cancelAlertActionWithToken:(long long)arg1;
- (void)__createViewControllerWithOptions:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 8: _UIViewServiceViewControllerOperatorCreateOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _UIViewServiceControllerOperatorCreateResult *, NSError *, void*
- (void)__dimmingViewWasTapped;
- (void)__exchangeAccessibilityPortInformation:(void *)arg1 replyHandler:(void *)arg2; // needs 2 arg types, found 8: BSMachPortSendRight *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSMachPortSendRight *, NSError *, void*
- (void)__hostDidAttachDisplay:(FBSDisplayConfiguration *)arg1;
- (void)__hostDidBecomeActive;
- (void)__hostDidChangeStatusBarHeight:(double)arg1;
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1;
- (void)__hostDidDetachDisplay:(FBSDisplayConfiguration *)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostDidPromoteFirstResponder;
- (void)__hostDidReceivePhysicalButtonBSAction:(_UIPhysicalButtonBSAction *)arg1;
- (void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(bool)arg2;
- (void)__hostDidSetContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 andLeftMargin:(double)arg2 rightMargin:(double)arg3;
- (void)__hostDidSetPresentationControllerClassName:(NSString *)arg1;
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(NSArray *)arg1 originalSource:(id)arg2;
- (void)__hostDidUpdateDisplay:(FBSDisplayConfiguration *)arg1;
- (void)__hostDidUpdateSceneContext:(_UIRemoteViewControllerSceneContext *)arg1;
- (void)__hostDisablesAutomaticKeyboardBehavior:(bool)arg1;
- (void)__hostReadyToReceiveMessagesFromServiceViewController;
- (void)__hostSceneDidEnterBackground;
- (void)__hostSceneWillEnterForeground;
- (void)__hostViewDidAppear:(bool)arg1;
- (void)__hostViewDidDisappear:(bool)arg1;
- (void)__hostViewDidMoveToScreenWithFBSDisplayIdentity:(void *)arg1 newHostingHandleReplyHandler:(void *)arg2; // needs 2 arg types, found 7: FBSDisplayIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _UIHostedWindowHostingHandle *, void*
- (void)__hostViewWillAppear:(void *)arg1 inInterfaceOrientation:(void *)arg2 traitCollection:(void *)arg3 statusBarHeight:(void *)arg4 underlapsStatusBar:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 11: bool, long long, UITraitCollection *, double, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGSize { double x1; double x2; }, void*
- (void)__hostViewWillDisappear:(bool)arg1;
- (void)__hostViewWillMoveToWindowInInterfaceOrientation:(long long)arg1 withStatusBarHeight:(double)arg2 underlapsStatusBar:(bool)arg3;
- (void)__hostViewWillTransitionToSize:(void *)arg1 withContextDescription:(void *)arg2 boundingPath:(void *)arg3 statusBarHeight:(void *)arg4 underlapsStatusBar:(void *)arg5 fence:(void *)arg6 timing:(void *)arg7 whenDone:(void *)arg8; // needs 8 arg types, found 14: struct CGSize { double x1; double x2; }, _UIViewControllerTransitionCoordinatorContextDescription *, _UIBoundingPath *, double, bool, BKSAnimationFenceHandle *, struct _UIUpdateTiming { unsigned long long x1; unsigned long long x2; unsigned long long x3; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGSize { double x1; double x2; }, double, void*
- (void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(bool)arg3;
- (void)__hostWillEnterForeground;
- (void)__hostWillResignActive;
- (void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(bool)arg3;
- (void)__hostWillTransitionToTraitCollection:(UITraitCollection *)arg1 withContextDescription:(_UIViewControllerTransitionCoordinatorContextDescription *)arg2 deferIfAnimated:(bool)arg3 inRemoteViewHierarchy:(bool)arg4;
- (void)__redoActionWithToken:(long long)arg1;
- (void)__restoreStateForSession:(NSString *)arg1 restorationAnchor:(NSString *)arg2;
- (void)__saveStateForSession:(void *)arg1 restorationAnchor:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)__scrollToTopFromTouchAtViewLocation:(void *)arg1 resultHandler:(void *)arg2; // needs 2 arg types, found 8: struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)__setBoundingPath:(_UIBoundingPath *)arg1;
- (void)__setContentSize:(struct CGSize { double x1; double x2; })arg1 boundingPath:(_UIBoundingPath *)arg2;
- (void)__setContentSize:(struct CGSize { double x1; double x2; })arg1 boundingPath:(_UIBoundingPath *)arg2 withFence:(BKSAnimationFenceHandle *)arg3;
- (void)__setHostCanDynamicallySpecifySupportedInterfaceOrientations:(bool)arg1;
- (void)__setHostTintColor:(UIColor *)arg1 tintAdjustmentMode:(long long)arg2;
- (void)__setHostTraitCollection:(UITraitCollection *)arg1 deferIfAnimated:(bool)arg2;
- (void)__setHostViewUnderlapsStatusBar:(bool)arg1;
- (void)__setMediaOverridePID:(int)arg1;
- (void)__setServiceInPopover:(bool)arg1;
- (void)__setSheetConfiguration:(_UISheetPresentationControllerConfiguration *)arg1;
- (void)__sheetInteractionDraggingDidBeginWithRubberBandCoefficient:(double)arg1;
- (void)__sheetInteractionDraggingDidChangeWithTranslation:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2 animateChange:(bool)arg3;
- (void)__sheetInteractionDraggingDidEnd;
- (void)__textServiceDidDismiss;
- (void)__timelinesForDateInterval:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDateInterval *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)__undoActionWithToken:(long long)arg1;
- (void)__updateWithFrameSpecifierDate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end

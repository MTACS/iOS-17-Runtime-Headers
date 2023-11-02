
@interface QLRemotePreviewCollection : _UIRemoteViewController <QLPreviewCollectionProtocol> {
    QLRemotePreviewCollection * _accessoryViewController;
    bool  _allowInteractiveTransitions;
    double  _edgeNavigationGestureWidth;
    QLPreviewCollectionHostContext * _hostContext;
    bool  _isAvailable;
    id  _request;
    <QLPreviewControllerStateProtocolHostOnly> * _stateManager;
    UIView * _touchGrabbingView;
}

@property (retain) QLRemotePreviewCollection *accessoryViewController;
@property (nonatomic) bool allowInteractiveTransitions;
@property (retain) QLPreviewCollectionHostContext *hostContext;
@property bool isAvailable;
@property (retain) id request;

- (void).cxx_destruct;
- (bool)_addGrabbingViewIfNecessaryWithWidth:(double)arg1;
- (bool)_isNavigationControllerGrabbingViewForInteractivePopNeeded;
- (void)_presentViewControllerForError:(id)arg1;
- (void)_resetRemoteConfiguration;
- (void)_updateTouchGrabbingView;
- (id)accessoryView;
- (id)accessoryViewController;
- (void)actionSheetDidDismiss;
- (bool)allowInteractiveTransitions;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;
- (void)documentMenuActionWillBegin;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(id /* block */)arg1;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(bool)arg1;
- (id)hostContext;
- (void)hostSceneWillDeactivate;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)hostViewControllerBackgroundColorChanged:(id)arg1;
- (void)invalidateServiceWithCompletionHandler:(id /* block */)arg1;
- (bool)isAvailable;
- (bool)isRemote;
- (void)keyCommandWasPerformed:(id)arg1;
- (void)keyCommandsWithCompletionHandler:(id /* block */)arg1;
- (id)navigationScreenEdgePanGestureRecognizer;
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;
- (void)notifyStateRestorationUserInfo:(id)arg1;
- (void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)arg1;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(id /* block */)arg1;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(id /* block */)arg1;
- (void)previewItemDisplayState:(id)arg1 wasAppliedToItemAtIndex:(unsigned long long)arg2;
- (id)request;
- (void)requestLockForCurrentItem;
- (void)saveCurrentPreviewEditsSynchronously:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)saveIntoPhotoLibraryMediaWithURLWrapper:(id)arg1 previewItemType:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setAccessoryViewController:(id)arg1;
- (void)setAllowInteractiveTransitions:(bool)arg1;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(bool)arg2;
- (void)setHostContext:(id)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)setIsContentManaged:(bool)arg1;
- (void)setLoadingString:(id)arg1;
- (void)setPreviewItemDisplayState:(id)arg1 onItemAtIndex:(unsigned long long)arg2;
- (void)setRequest:(id)arg1;
- (void)setScreenEdgePanWidth:(double)arg1;
- (void)shouldDisplayLockActivityWithCompletionHandler:(id /* block */)arg1;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(bool)arg3 useInteractiveTransition:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)tearDownTransition:(bool)arg1;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

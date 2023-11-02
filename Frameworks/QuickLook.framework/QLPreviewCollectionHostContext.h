
@interface QLPreviewCollectionHostContext : NSExtensionContext <QLPreviewCollectionHostProtocol, QLPreviewCollectionServiceProtocol> {
    RBSAssertion * _jetsamBandAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)_protocolService;
- (id)_protocolServiceWithErrorHandler:(id /* block */)arg1;
- (id)_synchronousProtocolServiceWithErrorHandler:(id /* block */)arg1;
- (void)actionSheetDidDismiss;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;
- (void)documentMenuActionWillBegin;
- (void)getNetworkObserverWithCompletionBlock:(id /* block */)arg1;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(id /* block */)arg1;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(bool)arg1;
- (void)hostSceneWillDeactivate;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)hostViewControllerBackgroundColorChanged:(id)arg1;
- (void)invalidateService;
- (void)invalidateServiceWithCompletionHandler:(id /* block */)arg1;
- (void)keyCommandWasPerformed:(id)arg1;
- (void)keyCommandsWithCompletionHandler:(id /* block */)arg1;
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;
- (void)notifyStateRestorationUserInfo:(id)arg1;
- (void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)arg1;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(id /* block */)arg1;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(id /* block */)arg1;
- (void)previewItemDisplayState:(id)arg1 wasAppliedToItemAtIndex:(unsigned long long)arg2;
- (void)requestLockForCurrentItem;
- (void)saveCurrentPreviewEditsSynchronously:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)saveIntoPhotoLibraryMediaWithURLWrapper:(id)arg1 previewItemType:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setAllowInteractiveTransitions:(bool)arg1;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(bool)arg2;
- (void)setIsContentManaged:(bool)arg1;
- (void)setLoadingString:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setPreviewItemDisplayState:(id)arg1 onItemAtIndex:(unsigned long long)arg2;
- (void)setScreenEdgePanWidth:(double)arg1;
- (void)shouldDisplayLockActivityWithCompletionHandler:(id /* block */)arg1;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(bool)arg3 useInteractiveTransition:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)tearDownTransition:(bool)arg1;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end


@protocol QLPreviewCollectionProtocol

@required

- (void)actionSheetDidDismiss;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id <QLPreviewItemProvider>)arg3 stateManager:(id <QLPreviewControllerStateProtocol>)arg4;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(bool)arg1;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)invalidateServiceWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)keyCommandWasPerformed:(QLKeyCommand *)arg1;
- (void)keyCommandsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;
- (void)notifyStateRestorationUserInfo:(NSDictionary *)arg1;
- (void)overrideParentApplicationDisplayIdentifierWithIdentifier:(NSString *)arg1;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)previewItemDisplayState:(id)arg1 wasAppliedToItemAtIndex:(unsigned long long)arg2;
- (void)requestLockForCurrentItem;
- (void)saveCurrentPreviewEditsSynchronously:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, QLPreviewItemEditedCopy *, void*
- (void)setAppearance:(QLAppearance *)arg1 animated:(bool)arg2;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(bool)arg2;
- (void)setIsContentManaged:(bool)arg1;
- (void)setLoadingString:(NSString *)arg1;
- (void)setPreviewItemDisplayState:(id)arg1 onItemAtIndex:(unsigned long long)arg2;
- (void)shouldDisplayLockActivityWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)startTransitionWithSourceViewProvider:(void *)arg1 transitionController:(void *)arg2 presenting:(void *)arg3 useInteractiveTransition:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 9: QLTransitionContext *, <QLTransitionControllerProtocol> *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)tearDownTransition:(bool)arg1;
- (void)toolbarButtonPressedWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)toolbarButtonsForTraitCollection:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: UITraitCollection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, void*

@optional

- (void)documentMenuActionWillBegin;
- (void)hostSceneWillDeactivate;
- (void)hostViewControllerBackgroundColorChanged:(UIColor *)arg1;
- (void)saveIntoPhotoLibraryMediaWithURLWrapper:(void *)arg1 previewItemType:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: FPSandboxingURLWrapper *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setScreenEdgePanWidth:(double)arg1;

@end

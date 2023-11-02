
@protocol CatalogViewControllerDelegate <NSObject>

@required

- (void)catalogViewController:(CatalogViewController *)arg1 cacheSearchQueryID:(long long)arg2;
- (void)catalogViewController:(CatalogViewController *)arg1 completionItem:(id <CompletionItem>)arg2 wasAcceptedForString:(NSString *)arg3;
- (void)catalogViewController:(CatalogViewController *)arg1 didFinishVoiceSearchWithNavigation:(bool)arg2;
- (void)catalogViewController:(CatalogViewController *)arg1 didPasteText:(NSString *)arg2;
- (void)catalogViewController:(CatalogViewController *)arg1 didSelectAddress:(NSString *)arg2;
- (void)catalogViewController:(CatalogViewController *)arg1 didSelectSearch:(NSString *)arg2;
- (void)catalogViewController:(CatalogViewController *)arg1 focusNextKeyView:(bool)arg2;
- (void)catalogViewController:(CatalogViewController *)arg1 loadURL:(NSURL *)arg2 inExternalApplication:(bool)arg3;
- (void)catalogViewController:(CatalogViewController *)arg1 mightSelectCompletionItem:(id <CompletionItem>)arg2 forString:(NSString *)arg3;
- (void)catalogViewController:(void *)arg1 presentViewControllerWithinPopover:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: CatalogViewController *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)catalogViewController:(CatalogViewController *)arg1 willPresentCustomizationViewController:(SFStartPageCustomizationViewController *)arg2;
- (void)catalogViewController:(CatalogViewController *)arg1 willPresentDetailViewController:(UIViewController *)arg2;
- (void)catalogViewController:(CatalogViewController *)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)catalogViewControllerDidAppear:(CatalogViewController *)arg1;
- (void)catalogViewControllerDidBeginEditing:(CatalogViewController *)arg1;
- (void)catalogViewControllerDidEndEditing:(CatalogViewController *)arg1;
- (void)catalogViewControllerDidScroll:(CatalogViewController *)arg1 animated:(bool)arg2;
- (void)catalogViewControllerDidSelectFindOnPage:(CatalogViewController *)arg1;
- (void)catalogViewControllerMakeWindowKey:(CatalogViewController *)arg1;
- (double)catalogViewControllerPopoverMaxHeight:(CatalogViewController *)arg1;
- (double)catalogViewControllerPopoverWidth:(CatalogViewController *)arg1;
- (void)catalogViewControllerPopoverWillDismiss:(CatalogViewController *)arg1 dismissalReason:(long long)arg2;
- (bool)catalogViewControllerPresentingInPortraitAspectRatio:(CatalogViewController *)arg1;
- (bool)catalogViewControllerShouldRequestNetworkedSuggestions:(CatalogViewController *)arg1;
- (bool)catalogViewControllerShouldSuppressPopover:(CatalogViewController *)arg1;
- (bool)catalogViewControllerShouldUsePopoverForCompletions:(CatalogViewController *)arg1;
- (<SFStartPageVisualStyleProviding> *)catalogViewControllerStartPageVisualStyleProvider:(CatalogViewController *)arg1;
- (void)catalogViewControllerWillUnfocusUnifiedField:(CatalogViewController *)arg1;
- (void)dismissCatalogViewController:(CatalogViewController *)arg1;

@end

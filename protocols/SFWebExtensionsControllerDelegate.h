
@protocol SFWebExtensionsControllerDelegate <WBSWebExtensionsControllerDelegate>

@required

- (bool)sfWebExtensionsController:(SFWebExtensionsController *)arg1 canSendMessageFromWebView:(WKWebView *)arg2;
- (void)sfWebExtensionsController:(void *)arg1 captureVisibleTab:(void *)arg2 format:(void *)arg3 quality:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: SFWebExtensionsController *, <WBSWebExtensionTab> *, NSString *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)sfWebExtensionsController:(void *)arg1 createNewTabInWindow:(void *)arg2 tabIndex:(void *)arg3 url:(void *)arg4 makeActive:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 11: SFWebExtensionsController *, <WBSWebExtensionWindow> *, NSNumber *, NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WBSWebExtensionTab> *, void*
- (<WBSWebExtensionTab> *)sfWebExtensionsController:(SFWebExtensionsController *)arg1 duplicateTab:(id <WBSWebExtensionTab>)arg2;
- (NSUUID *)sfWebExtensionsController:(SFWebExtensionsController *)arg1 navigationIntentUUIDForWindow:(id <WBSWebExtensionWindow>)arg2;
- (void)sfWebExtensionsController:(SFWebExtensionsController *)arg1 relateParentTab:(id <WBSWebExtensionTab>)arg2 toTab:(id <WBSWebExtensionTab>)arg3;
- (<WBSWebExtensionTab> *)sfWebExtensionsController:(SFWebExtensionsController *)arg1 reusableTabWithID:(double)arg2;
- (void)sfWebExtensionsController:(void *)arg1 showPopupForExtension:(void *)arg2 inWindow:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: SFWebExtensionsController *, WBSWebExtensionData *, <WBSWebExtensionWindow> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<WBSWebExtensionTab> *)sfWebExtensionsController:(SFWebExtensionsController *)arg1 tabForWebView:(WKWebView *)arg2;
- (<WBSWebExtensionTab> *)sfWebExtensionsController:(SFWebExtensionsController *)arg1 tabWithID:(double)arg2;
- (<WBSWebExtensionWindow> *)sfWebExtensionsController:(SFWebExtensionsController *)arg1 windowForWebView:(WKWebView *)arg2 extension:(WBSWebExtensionData *)arg3;
- (<WBSWebExtensionWindow> *)sfWebExtensionsController:(SFWebExtensionsController *)arg1 windowWithID:(double)arg2;
- (NSArray *)sfWebExtensionsControllerAllWindows:(SFWebExtensionsController *)arg1;
- (void)sfWebExtensionsControllerCompileContentBlocker:(void *)arg1 identifier:(void *)arg2 rules:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: SFWebExtensionsController *, NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)sfWebExtensionsControllerContentBlockerListDidChange:(SFWebExtensionsController *)arg1;
- (void)sfWebExtensionsControllerDidChangeExtensionForPermissionBanner:(SFWebExtensionsController *)arg1;
- (NSString *)sfWebExtensionsControllerDomainForDefaultSearchProvider:(SFWebExtensionsController *)arg1;
- (<WBSWebExtensionWindow> *)sfWebExtensionsControllerLastFocusedWindow:(SFWebExtensionsController *)arg1;

@end


@protocol WBSBundleWebExtensionsControllerMessageReceiver <NSObject>

@required

- (void)backgroundPageWithHandle:(WKBrowsingContextHandle *)arg1 aboutToLoadForExtensionWithID:(NSUUID *)arg2;
- (void)backgroundPageWithHandle:(WKBrowsingContextHandle *)arg1 didCloseForExtensionWithID:(NSUUID *)arg2;
- (void)crashWebProcess;
- (void)disconnectPortWithID:(NSUUID *)arg1;
- (void)dispatchOnInstalledToHandle:(WKBrowsingContextHandle *)arg1 details:(NSDictionary *)arg2;
- (void)dispatchOnStartupToHandle:(WKBrowsingContextHandle *)arg1;
- (void)dispatchToolbarItemClickedToHandle:(WKBrowsingContextHandle *)arg1 tabState:(NSDictionary *)arg2;
- (void)fullPageExtensionContentWithHandle:(WKBrowsingContextHandle *)arg1 aboutToLoadForExtensionWithID:(NSUUID *)arg2 inTabWithID:(NSNumber *)arg3 windowID:(NSNumber *)arg4;
- (void)notifyBrowsingContext:(WKBrowsingContextHandle *)arg1 contextMenuItemWasSelectedWithInfo:(NSDictionary *)arg2 tabInfo:(NSDictionary *)arg3;
- (void)notifyContentScriptsForExtensionWithID:(NSUUID *)arg1 storageWasChangedWithChanges:(NSDictionary *)arg2 areaName:(NSString *)arg3 browsingContext:(WKBrowsingContextHandle *)arg4;
- (void)notifyExtensionWithID:(NSUUID *)arg1 alarmWasFiredWithInfo:(NSDictionary *)arg2;
- (void)notifyExtensionWithID:(NSUUID *)arg1 commandWasPerformed:(NSString *)arg2;
- (void)notifyExtensionWithID:(NSUUID *)arg1 navigationCommittedWithDetails:(NSDictionary *)arg2;
- (void)notifyExtensionWithID:(NSUUID *)arg1 navigationFailedWithDetails:(NSDictionary *)arg2;
- (void)notifyExtensionWithID:(NSUUID *)arg1 navigationFinishedWithDetails:(NSDictionary *)arg2;
- (void)notifyExtensionWithID:(NSUUID *)arg1 navigationStartedWithDetails:(NSDictionary *)arg2;
- (void)notifyExtensionWithID:(NSUUID *)arg1 permissionWasAddedWithInfo:(NSDictionary *)arg2;
- (void)notifyExtensionWithID:(NSUUID *)arg1 permissionWasRemovedWithInfo:(NSDictionary *)arg2;
- (void)notifyExtensionWithID:(NSUUID *)arg1 resourceLoad:(_WKResourceLoadInfo *)arg2 inTabWithID:(double)arg3 windowID:(double)arg4 didCompleteWithError:(NSError *)arg5 response:(NSURLResponse *)arg6;
- (void)notifyExtensionWithID:(NSUUID *)arg1 resourceLoad:(_WKResourceLoadInfo *)arg2 inTabWithID:(double)arg3 windowID:(double)arg4 didPerformHTTPRedirection:(NSURLResponse *)arg5 newRequest:(NSURLRequest *)arg6;
- (void)notifyExtensionWithID:(NSUUID *)arg1 resourceLoad:(_WKResourceLoadInfo *)arg2 inTabWithID:(double)arg3 windowID:(double)arg4 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg5;
- (void)notifyExtensionWithID:(NSUUID *)arg1 resourceLoad:(_WKResourceLoadInfo *)arg2 inTabWithID:(double)arg3 windowID:(double)arg4 didReceiveResponse:(NSURLResponse *)arg5;
- (void)notifyExtensionWithID:(NSUUID *)arg1 resourceLoad:(_WKResourceLoadInfo *)arg2 inTabWithID:(double)arg3 windowID:(double)arg4 didSendRequest:(NSURLRequest *)arg5;
- (void)notifyExtensionWithID:(NSUUID *)arg1 tabWasCreatedWithState:(NSDictionary *)arg2;
- (void)notifyExtensionWithID:(NSUUID *)arg1 tabWasSelectedWithActiveInfo:(NSDictionary *)arg2;
- (void)notifyExtensionWithID:(NSUUID *)arg1 tabWithID:(NSNumber *)arg2 wasClosedWithRemoveInfo:(NSDictionary *)arg3;
- (void)notifyExtensionWithID:(NSUUID *)arg1 tabWithID:(NSNumber *)arg2 wasMovedFromAnotherWindowWithAttachInfo:(NSDictionary *)arg3 detachInfo:(NSDictionary *)arg4;
- (void)notifyExtensionWithID:(NSUUID *)arg1 tabWithID:(NSNumber *)arg2 wasMovedWithMoveInfo:(NSDictionary *)arg3;
- (void)notifyExtensionWithID:(NSUUID *)arg1 tabWithID:(NSNumber *)arg2 wasReplacedWithTabWithID:(NSNumber *)arg3;
- (void)notifyExtensionWithID:(NSUUID *)arg1 tabWithID:(NSNumber *)arg2 wasUpdatedWithChangeInfo:(NSDictionary *)arg3 tabState:(NSDictionary *)arg4;
- (void)notifyExtensionWithID:(NSUUID *)arg1 windowFocusChangedToWindowWithWindowID:(NSNumber *)arg2 isNormalWindow:(NSNumber *)arg3;
- (void)notifyExtensionWithID:(NSUUID *)arg1 windowWasClosedWithWindowID:(NSNumber *)arg2 isNormalWindow:(NSNumber *)arg3;
- (void)notifyExtensionWithID:(NSUUID *)arg1 windowWasCreatedWithWindowInfo:(NSDictionary *)arg2 isNormalWindow:(NSNumber *)arg3;
- (void)notifyRelatedWebViewsForExtensionWithID:(NSUUID *)arg1 storageWasChangedWithChanges:(NSDictionary *)arg2 areaName:(NSString *)arg3;
- (void)popupWithHandle:(WKBrowsingContextHandle *)arg1 aboutToLoadForExtensionWithID:(NSUUID *)arg2 inWindowWithID:(NSNumber *)arg3;
- (void)popupWithHandle:(WKBrowsingContextHandle *)arg1 didCloseForExtensionWithID:(NSUUID *)arg2;
- (void)receiveConnectionRequestInBrowsingContext:(WKBrowsingContextHandle *)arg1 extensionID:(NSUUID *)arg2 portID:(NSUUID *)arg3 connectInfo:(NSDictionary *)arg4 sender:(NSDictionary *)arg5;
- (void)receiveConnectionRequestToBackgroundPageInBrowsingContext:(WKBrowsingContextHandle *)arg1 portID:(NSUUID *)arg2 connectInfo:(NSDictionary *)arg3 sender:(NSDictionary *)arg4;
- (void)receiveMessage:(void *)arg1 fromSender:(void *)arg2 inBrowsingContext:(void *)arg3 replyHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSDictionary *, WKBrowsingContextHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)receiveMessage:(void *)arg1 fromSender:(void *)arg2 withOptions:(void *)arg3 toExtensionWithID:(void *)arg4 inBrowsingContext:(void *)arg5 replyHandler:(void *)arg6; // needs 6 arg types, found 11: NSString *, NSDictionary *, NSDictionary *, NSUUID *, WKBrowsingContextHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)receiveMessage:(NSString *)arg1 inBrowsingContext:(WKBrowsingContextHandle *)arg2 toPortWithID:(NSUUID *)arg3;

@end

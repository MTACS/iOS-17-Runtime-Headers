
@interface WBSSafariExtensionStateObserver : NSObject {
    WBSExtensionsController * _extensionsController;
    WKWebView * _webView;
}

- (void).cxx_destruct;
- (void)_addIDsForExtension:(id)arg1 toSet:(id)arg2;
- (void)_addNamesForExtension:(id)arg1 toMap:(id)arg2;
- (void)_handleExtensionEnabledStateDidChange:(id)arg1;
- (void)_handleExtensionWasAdded:(id)arg1;
- (void)_handleExtensionWasRemoved:(id)arg1;
- (bool)_shouldObserveExtension:(id)arg1;
- (void)_startObservingExtensionNotifications;
- (void)_stopObservingExtensionNotifications;
- (bool)_teardownObserverIfNecessary;
- (void)dealloc;
- (id)init;
- (id)initWithWebView:(id)arg1 extensionsController:(id)arg2;
- (void)startObservingExtensionStateChanges;
- (void)stopObservingExtensionStateChanges;

@end

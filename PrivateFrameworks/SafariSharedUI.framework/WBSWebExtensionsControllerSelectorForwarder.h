
@interface WBSWebExtensionsControllerSelectorForwarder : NSObject {
    <WBSWebExtensionsControllerSelectorForwarderDelegate> * _delegate;
    WKWebView * _webView;
}

- (void).cxx_destruct;
- (void)addListenerForExtensionWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (void)captureVisibleTabInWindow:(id)arg1 format:(id)arg2 quality:(id)arg3 extensionIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)connectFromPortWithID:(id)arg1 fromExtensionWithID:(id)arg2 toApplicationWithID:(id)arg3;
- (void)connectFromPortWithID:(id)arg1 fromExtensionWithID:(id)arg2 toExtensionWithID:(id)arg3 connectInfo:(id)arg4 rawSenderInfo:(id)arg5;
- (void)connectFromPortWithID:(id)arg1 fromExtensionWithID:(id)arg2 toTabWithID:(double)arg3 connectInfo:(id)arg4 rawSenderInfo:(id)arg5;
- (void)connectFromPortWithIDFromWebPage:(id)arg1 toExtensionWithID:(id)arg2 connectInfo:(id)arg3 rawSenderInfo:(id)arg4;
- (void)createTabWithProperties:(id)arg1 extensionIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)createWindowWithCreateData:(id)arg1 extensionIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteDatabaseForStorageOfType:(long long)arg1 forExtensionWithUniqueIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteValuesForKeys:(id)arg1 fromStorageOfType:(long long)arg2 forExtensionWithUniqueIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)detectLanguageForTab:(id)arg1 extensionIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)executeScriptWithDetails:(id)arg1 fromExtensionWithID:(id)arg2 toTabWithID:(id)arg3 callingAPIName:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)getInformationForTab:(id)arg1 extensionIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getInformationForWindow:(id)arg1 getInfo:(id)arg2 extensionIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getStorageSizeForAllKeysInStorageOfType:(long long)arg1 forExtensionWithUniqueIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getStorageSizeForKeys:(id)arg1 inStorageOfType:(long long)arg2 forExtensionWithUniqueIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getValuesForAllKeysFromStorageOfType:(long long)arg1 forExtensionWithUniqueIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getValuesForKeys:(id)arg1 fromStorageOfType:(long long)arg2 forExtensionWithUniqueIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getZoomForTab:(id)arg1 extensionIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)goBackInTab:(id)arg1 extensionIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)goForwardInTab:(id)arg1 extensionIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithWebView:(id)arg1 delegate:(id)arg2;
- (void)insertCSSWithDetails:(id)arg1 fromExtensionWithID:(id)arg2 toTabWithID:(id)arg3 callingAPIName:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)openOptionsPageForExtensionIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openPopupForWindow:(id)arg1 extensionIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)queryTabs:(id)arg1 forExtensionWithID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)reloadTab:(id)arg1 reloadFromOrigin:(bool)arg2 extensionIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)removeCSSWithDetails:(id)arg1 fromExtensionWithID:(id)arg2 toTabWithID:(id)arg3 callingAPIName:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)removeListenerForExtensionWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (void)removeWindow:(id)arg1 extensionIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)respondsToSelector:(SEL)arg1;
- (void)sendMessage:(id)arg1 fromExtensionWithID:(id)arg2 toExtensionWithID:(id)arg3 rawSenderInfo:(id)arg4;
- (void)sendMessage:(id)arg1 fromExtensionWithID:(id)arg2 toExtensionWithID:(id)arg3 rawSenderInfo:(id)arg4 replyHandler:(id /* block */)arg5;
- (void)sendMessage:(id)arg1 fromExtensionWithID:(id)arg2 toTabWithID:(double)arg3 withOptions:(id)arg4 rawSenderInfo:(id)arg5;
- (void)sendMessage:(id)arg1 fromExtensionWithID:(id)arg2 toTabWithID:(double)arg3 withOptions:(id)arg4 rawSenderInfo:(id)arg5 responseCallback:(id /* block */)arg6;
- (void)sendMessageFromWebPage:(id)arg1 toExtensionWithID:(id)arg2 options:(id)arg3 rawSenderInfo:(id)arg4 replyHandler:(id /* block */)arg5;
- (void)setKeyedData:(id)arg1 inStorageOfType:(long long)arg2 forExtensionWithUniqueIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setZoomForTab:(id)arg1 zoomFactor:(id)arg2 extensionIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)toggleReaderModeForTab:(id)arg1 extensionIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateTab:(id)arg1 properties:(id)arg2 extensionIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)updateWindow:(id)arg1 withInfo:(id)arg2 extensionIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;

@end

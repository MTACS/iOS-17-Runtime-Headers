
@interface ATXSuggestedPagesServer : NSObject <ATXSuggestedPagesInterface, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    _ATXInternalUninstallNotification * _uninstallNotification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)_fetchPageTypeForModeUUID:(id)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)prewarmCachedSuggestedPages;
- (void)suggestedPagesWithFilter:(id)arg1 layoutOptions:(id)arg2 completionHandler:(id /* block */)arg3;

@end

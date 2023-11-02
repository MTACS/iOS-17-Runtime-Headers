
@interface DeleteAppFontsDialogHandler : NSObject <FontInstallViewServiceProtocol, NSXPCListenerDelegate> {
    id /* block */  _completionHandler;
    NSXPCListener * _listener;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListener *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)doneWithDeleteAppFonts:(bool)arg1;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setListener:(id)arg1;
- (void)showDialogWithUserInfo:(id)arg1;

@end

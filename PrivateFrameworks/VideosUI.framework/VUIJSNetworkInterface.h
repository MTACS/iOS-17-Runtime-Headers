
@interface VUIJSNetworkInterface : VUIJSObject <VUIJSNetworkInterface> {
    int  _playbackReportToken;
    bool  _suppressServerConfigNotifications;
}

@property bool suppressServerConfigNotifications;

- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(id /* block */)arg4;
- (id)_createURLRequestFromJSOptionsDictionary:(id)arg1;
- (void)_enqueueNetworkOp:(id)arg1 withJSCallback:(id)arg2;
- (void)_handleAppLibChange:(id)arg1;
- (void)_handleServerConfigChange:(id)arg1;
- (long long)_requestOptionsFromJSOptions:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)dealloc;
- (void)fetchConfiguration:(bool)arg1 :(id)arg2;
- (id)initWithAppContext:(id)arg1;
- (void)invalidateConfiguration;
- (id)makeMediaApiRequest:(id)arg1 :(id)arg2;
- (id)makeRequest:(id)arg1 :(id)arg2;
- (id)makeStoreRequest:(id)arg1 :(id)arg2;
- (id)makeUpNextRequest:(id)arg1 :(id)arg2;
- (void)setSuppressServerConfigNotifications:(bool)arg1;
- (bool)suppressServerConfigNotifications;
- (void)upNextItemsReceived:(id)arg1 :(id)arg2;

@end

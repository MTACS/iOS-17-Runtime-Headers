
@interface SAReplyController : NSObject <SAReplyProtocol> {
    id /* block */  _appSizerUpdateHandler;
    NSUUID * _controllerID;
    id /* block */  _urlSizerUpdateHandler;
}

@property (copy) id /* block */ appSizerUpdateHandler;
@property (retain) NSUUID *controllerID;
@property (copy) id /* block */ urlSizerUpdateHandler;

- (void).cxx_destruct;
- (id /* block */)appSizerUpdateHandler;
- (void)callAppSizerHandlerWithError:(id)arg1;
- (void)callAppSizerHandlerWithResults:(id)arg1 error:(id)arg2 withHandlerResultBlock:(id /* block */)arg3;
- (void)callURLSizerHandlerWithError:(id)arg1;
- (void)callURLSizerHandlerWithResults:(id)arg1 error:(id)arg2 withHandlerResultsBlock:(id /* block */)arg3;
- (id)controllerID;
- (void)setAppSizerUpdateHandler:(id /* block */)arg1;
- (void)setControllerID:(id)arg1;
- (void)setUrlSizerUpdateHandler:(id /* block */)arg1;
- (id /* block */)urlSizerUpdateHandler;

@end


@interface IDSDaemonRequestContext : NSObject {
    IDSDaemonResponseHandler * _responseHandler;
    IMTimer * _systemTimer;
    id /* block */  _timeoutBlock;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithResponseHandler:(id)arg1 timeoutBlock:(id /* block */)arg2 systemTimer:(id)arg3;
- (void)killSystemTimer;
- (id)responseHandler;
- (id)systemTimer;
- (id /* block */)timeoutBlock;

@end

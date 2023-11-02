
@interface ACSURLSessionDataTask : ACSURLSessionTask {
    id /* block */  __clientDataCompletionHandler;
}

@property (copy) id /* block */ _clientDataCompletionHandler;

- (void).cxx_destruct;
- (id /* block */)_clientDataCompletionHandler;
- (bool)_isUpload;
- (id)initWithNSURLDataTaskCreator:(id /* block */)arg1 initialRequest:(id)arg2 forSession:(id)arg3;
- (void)set_clientDataCompletionHandler:(id /* block */)arg1;

@end

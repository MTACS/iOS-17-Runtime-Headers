
@interface ACSURLSessionDownloadTask : ACSURLSessionTask {
    id /* block */  __clientLocationCompletionHandler;
    NSError * __deferredLinkError;
    NSURLRequest * __resumedOriginalRequest;
}

@property (copy) id /* block */ _clientLocationCompletionHandler;
@property (retain) NSError *_deferredLinkError;
@property (retain) NSURLRequest *_resumedOriginalRequest;
@property (readonly, copy) NSURLRequest *originalRequest;

- (void).cxx_destruct;
- (id /* block */)_clientLocationCompletionHandler;
- (id)_deferredLinkError;
- (bool)_isUpload;
- (id)_resumedOriginalRequest;
- (void)cancelByProducingResumeData:(id /* block */)arg1;
- (id)initWithNSURLDownloadTaskCreator:(id /* block */)arg1 initialRequest:(id)arg2 forSession:(id)arg3;
- (id)originalRequest;
- (void)set_clientLocationCompletionHandler:(id /* block */)arg1;
- (void)set_deferredLinkError:(id)arg1;
- (void)set_resumedOriginalRequest:(id)arg1;

@end

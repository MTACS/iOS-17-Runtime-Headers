
@interface __NSCFBackgroundDataTask : __NSCFBackgroundSessionTask {
    NSInputStream * _initialStream;
    unsigned long long  _numberOfOngoingWrites;
    bool  _openedStreamDuringNeedNewBodyStream;
    NSObject<OS_dispatch_io> * _pipeIO;
    NSFileHandle * _readHandle;
    bool  _readingRequestBody;
    struct shared_ptr<RequestBody> { 
        struct RequestBody {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _requestBody;
    NSInputStream * _requestBodyStream;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;
- (bool)isKindOfClass:(Class)arg1;

@end

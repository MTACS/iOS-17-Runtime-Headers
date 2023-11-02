
@interface MPModelLibrarySearchRequestOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    MPModelLibrarySearchRequest * _request;
    id /* block */  _responseHandler;
    struct shared_ptr<mlcore::LocalizedSearchQuery> { 
        struct LocalizedSearchQuery {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _runningQuery;
}

@property (nonatomic, copy) MPModelLibrarySearchRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (id)init;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end

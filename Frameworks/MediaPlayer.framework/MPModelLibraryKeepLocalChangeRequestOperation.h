
@interface MPModelLibraryKeepLocalChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue * _operationQueue;
    MPModelLibraryKeepLocalChangeRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) MPModelLibraryKeepLocalChangeRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)_handleKeepLocalUpdateStatus:(long long)arg1 forLibraryIdentifier:(long long)arg2 mediaType:(long long)arg3 completedWithError:(id)arg4;
- (void)_handlePersistentID:(long long)arg1 modelClass:(Class)arg2 keepLocal:(long long)arg3 keepLocalConstraints:(unsigned long long)arg4 mediaLibrary:(id)arg5;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end

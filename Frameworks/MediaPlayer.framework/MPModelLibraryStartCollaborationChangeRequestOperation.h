
@interface MPModelLibraryStartCollaborationChangeRequestOperation : MPAsyncOperation {
    MPModelLibraryStartCollaborationChangeRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) MPModelLibraryStartCollaborationChangeRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end

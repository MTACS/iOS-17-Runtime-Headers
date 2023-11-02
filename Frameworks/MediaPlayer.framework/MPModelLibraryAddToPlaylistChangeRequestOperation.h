
@interface MPModelLibraryAddToPlaylistChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue * _operationQueue;
    MPModelLibraryAddToPlaylistChangeRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) MPModelLibraryAddToPlaylistChangeRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (bool)_isCloudLibraryEnabled;
- (void)_updateCloudLibraryForPlaylist:(id)arg1;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end

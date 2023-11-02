
@interface MPModelLibraryFavoriteEntityChangeRequestOperation : MPAsyncOperation {
    bool  _canRerunRequest;
    NSOperationQueue * _operationQueue;
    MPModelLibraryFavoriteEntityChangeRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) MPModelLibraryFavoriteEntityChangeRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)_importFromRequestIdentifiers:(id)arg1 changeAction:(long long)arg2;
- (long long)_likedStateFromRequestAction:(long long)arg1;
- (void)_runLibraryMappingRequestWithIdentifiers:(id)arg1 class:(Class)arg2 completionHandler:(id /* block */)arg3;
- (void)_runRequestWithIdentifiers:(id)arg1 persistentID:(long long)arg2 favoriteEntityChangeRequestAction:(long long)arg3 class:(Class)arg4;
- (void)_setLikedStateForRequestAction:(long long)arg1 forEntityWithPersistentID:(long long)arg2 modelClass:(Class)arg3;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end

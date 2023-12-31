
@interface NMSModelRecommendationsLibraryRequestOperation : MPAsyncOperation {
    NMSModelRecommendationsLibraryRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) NMSModelRecommendationsLibraryRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)_modelObjectWithCachedArtworkFromModelObject:(id)arg1;
- (id)_mpIdentifierSetsFromStringIdentifiers:(id)arg1;
- (void)_requestAlbums;
- (void)_requestContainerWithClass:(Class)arg1;
- (void)_requestPlaylists;
- (void)_requestPlaylistsEntries;
- (void)_requestSongs;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end

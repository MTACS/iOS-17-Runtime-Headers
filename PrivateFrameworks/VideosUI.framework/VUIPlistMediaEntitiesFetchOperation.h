
@interface VUIPlistMediaEntitiesFetchOperation : VUIAsynchronousOperation {
    NSError * _error;
    VUIPlistMediaLibrary * _mediaLibrary;
    NSArray * _requests;
    NSArray * _responses;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) VUIPlistMediaLibrary *mediaLibrary;
@property (nonatomic, copy) NSArray *requests;
@property (nonatomic, retain) NSArray *responses;

- (void).cxx_destruct;
- (id)_collectionsFetchResponseWithRequest:(id)arg1 error:(id*)arg2;
- (id)_fetchResponseWithMediaEntities:(id)arg1 request:(id)arg2;
- (id)_itemsFetchResponseWithRequest:(id)arg1 error:(id*)arg2;
- (id)_mediaEntityKindForRequest:(id)arg1;
- (id)error;
- (void)executionDidBegin;
- (id)init;
- (id)initWithMediaLibrary:(id)arg1 requests:(id)arg2;
- (id)mediaLibrary;
- (id)requests;
- (id)responses;
- (void)setError:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setResponses:(id)arg1;

@end

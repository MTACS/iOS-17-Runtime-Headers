
@interface VUIMPMediaEntitiesFetchOperation : VUIAsynchronousOperation {
    NSError * _error;
    VUIMPMediaLibrary * _mediaLibrary;
    NSOperationQueue * _privateQueue;
    NSArray * _requests;
    NSArray * _responses;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) VUIMPMediaLibrary *mediaLibrary;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, copy) NSArray *requests;
@property (nonatomic, copy) NSArray *responses;

- (void).cxx_destruct;
- (id)error;
- (void)executionDidBegin;
- (id)init;
- (id)initWithMediaLibrary:(id)arg1 requests:(id)arg2;
- (id)mediaLibrary;
- (id)privateQueue;
- (id)requests;
- (id)responses;
- (void)setError:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setResponses:(id)arg1;

@end

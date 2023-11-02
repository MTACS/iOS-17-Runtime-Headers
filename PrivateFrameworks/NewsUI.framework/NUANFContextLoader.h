
@interface NUANFContextLoader : NSObject <SXResourceDataSource> {
    FCANFContent * _anfContent;
    NUANFAssetLoader * _assetLoader;
    FCAsyncOnceOperation * _asyncOnceOperation;
    SXContext * _context;
    NSError * _contextError;
    FCFlintResourceManager * _flintResourceManager;
    bool  _hasLoaded;
    <FCHeadlineProviding> * _headline;
    <SXHost> * _host;
    NSOperationQueue * _imageDecodingQueue;
    long long  _relativePriority;
    <NUArticleResourceURLTranslator> * _resourceURLTranslator;
}

@property (nonatomic, readonly) FCANFContent *anfContent;
@property (nonatomic, retain) NUANFAssetLoader *assetLoader;
@property (nonatomic, retain) FCAsyncOnceOperation *asyncOnceOperation;
@property (nonatomic, retain) SXContext *context;
@property (nonatomic, retain) NSError *contextError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property (nonatomic, readonly) bool hasLoaded;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FCHeadlineProviding> *headline;
@property (nonatomic, readonly) <SXHost> *host;
@property (nonatomic, readonly) NSOperationQueue *imageDecodingQueue;
@property (nonatomic) long long relativePriority;
@property (nonatomic, readonly) <NUArticleResourceURLTranslator> *resourceURLTranslator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)anfContent;
- (id)assetLoader;
- (id)asyncLoadContextOnceWithCompletion:(id /* block */)arg1;
- (id)asyncOnceOperation;
- (id)context;
- (id)contextError;
- (id)fallbackResourceForImageRequest:(id)arg1 originalResource:(id)arg2;
- (void)fileURLForURL:(id)arg1 onCompletion:(id /* block */)arg2 onError:(id /* block */)arg3;
- (id)flintResourceManager;
- (bool)hasLoaded;
- (id)headline;
- (id)host;
- (id)imageDecodingQueue;
- (id)initWithANFContent:(id)arg1 flintResourceManager:(id)arg2 host:(id)arg3 resourceURLTranslator:(id)arg4 headline:(id)arg5;
- (id)loadContextWithCompletion:(id /* block */)arg1;
- (id /* block */)loadImagesForImageRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (long long)relativePriority;
- (id)resourceURLTranslator;
- (void)setAssetLoader:(id)arg1;
- (void)setAsyncOnceOperation:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setContextError:(id)arg1;
- (void)setRelativePriority:(long long)arg1;
- (id)translateURL:(id)arg1;

@end

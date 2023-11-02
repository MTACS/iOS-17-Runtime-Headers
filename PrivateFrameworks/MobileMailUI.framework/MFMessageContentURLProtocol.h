
@interface MFMessageContentURLProtocol : NSURLProtocol {
    MFMessageLoadingContext * _loadingContext;
    EFPromise * _promise;
    EFCancelationToken * _token;
}

@property (readonly) MFMessageLoadingContext *loadingContext;
@property (nonatomic, retain) EFPromise *promise;
@property (readonly) EFCancelationToken *token;

+ (id)URLForLoadingContext:(id)arg1;
+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)initialize;
+ (id)loadingContextForURL:(id)arg1;
+ (id)registry;
+ (bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)scheme;
+ (void)setRegistry:(id)arg1;

- (void).cxx_destruct;
- (id)_cachedResponseWithData:(id)arg1 error:(id*)arg2;
- (void)_didLoadContentEvent:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (id)loadingContext;
- (id)promise;
- (void)setPromise:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (id)token;

@end

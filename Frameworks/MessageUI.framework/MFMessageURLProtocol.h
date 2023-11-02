
@interface MFMessageURLProtocol : NSURLProtocol <EFLoggable> {
    <EFCancelable> * _cancelable;
    EMContentRepresentation * _contentRepresentation;
    EFPromise * _promise;
}

@property (nonatomic, retain) <EFCancelable> *cancelable;
@property (nonatomic, retain) EMContentRepresentation *contentRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EFPromise *promise;
@property (readonly) Class superclass;

+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (id)contentRepresentationForURL:(id)arg1;
+ (void)initialize;
+ (id)log;
+ (void)registerContentRepresentation:(id)arg1;
+ (id)registry;
+ (bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (void)setRegistry:(id)arg1;

- (void).cxx_destruct;
- (id)_cachedResponseWithData:(id)arg1 mimeType:(id)arg2 error:(id*)arg3;
- (id)cancelable;
- (id)contentRepresentation;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (id)promise;
- (void)setCancelable:(id)arg1;
- (void)setContentRepresentation:(id)arg1;
- (void)setPromise:(id)arg1;
- (void)startLoading;
- (void)stopLoading;

@end

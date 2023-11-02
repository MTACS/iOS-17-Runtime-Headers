
@interface GKImageRequest : GKResourceRequest {
    <GKResourceDataConsumer> * _dataConsumer;
    <GKImageRequestDelegate> * _delegate;
    NSURLRequest * _urlRequest;
}

@property (nonatomic, readonly) <GKResourceDataConsumer> *dataConsumer;
@property (nonatomic, readonly) <GKImageRequestDelegate> *delegate;
@property (nonatomic, readonly) bool isResourceRequest;
@property (nonatomic, readonly, copy) NSURLRequest *urlRequest;

+ (id)searchBundles;
+ (void)setSearchBundles:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)cacheOptions;
- (id)dataConsumer;
- (id)delegate;
- (id)description;
- (void)didLoadResource:(id)arg1 error:(id)arg2;
- (id)init;
- (id)initWithURLRequest:(id)arg1 dataConsumer:(id)arg2 delegate:(id)arg3;
- (bool)isAvatarImageRequest;
- (bool)isContactImageRequest;
- (bool)isResourceRequest;
- (bool)isSystemImageRequest;
- (id)makeLoadOperation;
- (id)urlRequest;

@end

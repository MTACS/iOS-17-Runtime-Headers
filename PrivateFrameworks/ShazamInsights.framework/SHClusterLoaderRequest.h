
@interface SHClusterLoaderRequest : NSObject {
    NSURL * _outputURL;
    NSURL * _sourceURL;
    SHStorefront * _storefront;
    long long  _type;
}

@property (nonatomic, readonly) NSURL *outputURL;
@property (nonatomic, readonly) bool shouldDeleteExistingDatabaseAtOutputURL;
@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic, readonly) SHStorefront *storefront;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (void)URLForRequestForStorefront:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)clusterConfiguration:(id /* block */)arg1;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 sourceURL:(id)arg2 outputURL:(id)arg3;
- (id)outputURL;
- (bool)shouldDeleteExistingDatabaseAtOutputURL;
- (id)sourceURL;
- (void)sourceURLWithCompletion:(id /* block */)arg1;
- (id)storefront;
- (long long)type;

@end

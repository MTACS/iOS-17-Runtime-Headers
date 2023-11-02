
@interface ASKImageRequest : ASKResourceRequest {
    <ASKResourceDataConsumer> * _dataConsumer;
    <ASKImageRequestDelegate> * _delegate;
    bool  _isResourceRequest;
    ASKLoadResourceOperation * _loadOperation;
    NSURLRequest * _urlRequest;
}

@property (nonatomic, readonly) <ASKResourceDataConsumer> *dataConsumer;
@property (nonatomic, readonly) <ASKImageRequestDelegate> *delegate;
@property (nonatomic, readonly) bool isResourceRequest;
@property (nonatomic, readonly) ASKLoadResourceOperation *loadOperation;
@property (nonatomic, readonly, copy) NSURLRequest *urlRequest;

- (void).cxx_destruct;
- (unsigned long long)cacheOptions;
- (id)dataConsumer;
- (id)delegate;
- (id)description;
- (void)didLoadResource:(id)arg1 error:(id)arg2;
- (id)init;
- (id)initWithURLRequest:(id)arg1 loadOperation:(id)arg2 dataConsumer:(id)arg3 delegate:(id)arg4;
- (bool)isResourceRequest;
- (id)loadOperation;
- (id)makeLoadOperation;
- (id)urlRequest;

@end

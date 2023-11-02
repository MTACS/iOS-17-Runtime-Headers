
@interface VUIImageLoadContext : NSObject {
    NSOperation<VUIImageLoadingOperation> * _imageLoadOperation;
    unsigned long long  _requestCount;
}

@property (nonatomic, retain) NSOperation<VUIImageLoadingOperation> *imageLoadOperation;
@property (nonatomic) unsigned long long requestCount;

- (void).cxx_destruct;
- (id)imageLoadOperation;
- (unsigned long long)requestCount;
- (void)setImageLoadOperation:(id)arg1;
- (void)setRequestCount:(unsigned long long)arg1;

@end

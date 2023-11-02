
@interface AMSUIContentImageFetchOperation : AMSUIAssetFetchOperation {
    id /* block */  _fallbackBlock;
    NSURL * _imageURL;
}

@property (nonatomic, copy) id /* block */ fallbackBlock;
@property (nonatomic, retain) NSURL *imageURL;

- (void).cxx_destruct;
- (void)_fallbackWithURL:(id)arg1;
- (id /* block */)fallbackBlock;
- (id)imageURL;
- (id)initWithURL:(id)arg1;
- (void)main;
- (void)setFallbackBlock:(id /* block */)arg1;
- (void)setImageURL:(id)arg1;

@end


@interface SKUIArtworkItemProvider : NSItemProvider <SKUIArtworkRequestDelegate> {
    NSMutableArray * _completionHandlers;
    NSData * _imageData;
    NSProgress * _progress;
    SKUIResourceLoader * _resourceLoader;
    NSURL * _url;
}

@property (nonatomic, retain) NSMutableArray *completionHandlers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, retain) SKUIResourceLoader *resourceLoader;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)completionHandlers;
- (id)imageData;
- (id)initWithURL:(id)arg1 usingResourceLoader:(id)arg2;
- (id)loadDataRepresentationForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)progress;
- (id)resourceLoader;
- (void)setCompletionHandlers:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setResourceLoader:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end

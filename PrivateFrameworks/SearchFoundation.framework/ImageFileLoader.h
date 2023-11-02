
@interface ImageFileLoader : NSObject <SFAsyncResourceLoader, SFImageResourceLoader>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canLoadImage:(id)arg1 context:(id)arg2;
- (id)cardLoader;
- (id)imageLoader;
- (void)loadImage:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)moreResultsLoader;
- (id)urlForImage:(id)arg1 context:(id)arg2;

@end

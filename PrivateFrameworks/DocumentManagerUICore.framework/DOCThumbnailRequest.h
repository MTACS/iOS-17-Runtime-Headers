
@interface DOCThumbnailRequest : NSObject {
    id /* block */  _thumbnailGenerationRequiresDownloadHandler;
}

@property (nonatomic, copy) id /* block */ thumbnailGenerationRequiresDownloadHandler;

+ (id)iconRequestForNode:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;
+ (id)iconRequestForURL:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;
+ (id)requestForNode:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;

- (void).cxx_destruct;
- (void)cancel;
- (void)generateThumbnailWithCompletionHandler:(id /* block */)arg1;
- (void)setThumbnailGenerationRequiresDownloadHandler:(id /* block */)arg1;
- (id /* block */)thumbnailGenerationRequiresDownloadHandler;

@end

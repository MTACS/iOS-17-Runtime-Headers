
@interface DOCIconThumbnailRequest : DOCThumbnailRequest {
    QLThumbnailGenerationRequest * _request;
    QLThumbnailGenerator * _thumbnailGenerator;
}

- (void).cxx_destruct;
- (void)generateThumbnailWithCompletionHandler:(id /* block */)arg1;
- (id)initWithNode:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;
- (id)initWithURL:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;

@end

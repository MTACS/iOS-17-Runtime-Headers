
@interface DOCRegularNodeThumbnailRequest : DOCThumbnailRequest {
    DOCThumbnailFolderIcon * _folderIcon;
    unsigned long long  _style;
    QLThumbnailGenerator * _thumbnailGenerator;
    QLThumbnailGenerationRequest * _thumbnailRequest;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)generateThumbnailWithCompletionHandler:(id /* block */)arg1;
- (id)initWithNode:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;

@end

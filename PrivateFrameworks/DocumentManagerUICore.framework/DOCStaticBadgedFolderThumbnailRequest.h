
@interface DOCStaticBadgedFolderThumbnailRequest : DOCThumbnailRequest {
    DOCThumbnailDescriptor * _descriptor;
    unsigned long long  _folderType;
}

- (void).cxx_destruct;
- (void)generateThumbnailWithCompletionHandler:(id /* block */)arg1;
- (id)initWithFolderType:(unsigned long long)arg1 descriptor:(id)arg2;

@end

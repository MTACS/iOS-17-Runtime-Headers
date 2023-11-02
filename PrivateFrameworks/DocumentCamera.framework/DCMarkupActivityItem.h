
@interface DCMarkupActivityItem : NSObject {
    ICDocCamDocumentInfo * _documentInfo;
    ICDocCamImageCache * _imageCache;
}

@property (nonatomic, retain) ICDocCamDocumentInfo *documentInfo;
@property (nonatomic, retain) ICDocCamImageCache *imageCache;

- (void).cxx_destruct;
- (id)documentInfo;
- (id)imageCache;
- (id)initWithDocumentInfo:(id)arg1 imageCache:(id)arg2;
- (void)setDocumentInfo:(id)arg1;
- (void)setImageCache:(id)arg1;

@end

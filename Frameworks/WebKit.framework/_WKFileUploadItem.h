
@interface _WKFileUploadItem : NSObject {
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _fileURL;
}

@property (nonatomic, readonly) struct RetainPtr<UIImage> { void *x1; } displayImage;
@property (getter=isVideo, nonatomic, readonly) bool video;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct RetainPtr<UIImage> { void *x1; })displayImage;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1;
- (bool)isVideo;
- (void)setFileURL:(id)arg1;

@end

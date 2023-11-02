
@interface EKAttachmentQLItem : NSObject <QLPreviewItem> {
    NSString * _filename;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 filename:(id)arg2;
- (id)previewItemTitle;
- (id)previewItemURL;

@end

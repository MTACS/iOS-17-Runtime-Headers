
@interface SXQuickLookFile : NSObject <QLPreviewItem> {
    NSURL * _fileURL;
    NSURL * _shareURL;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) NSURL *shareURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1 shareURL:(id)arg2;
- (id)initWithFileURL:(id)arg1 title:(id)arg2 shareURL:(id)arg3;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)shareURL;
- (id)title;

@end

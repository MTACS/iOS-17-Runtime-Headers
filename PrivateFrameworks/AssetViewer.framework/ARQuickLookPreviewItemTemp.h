
@interface ARQuickLookPreviewItemTemp : ARQuickLookPreviewItem <QLPreviewItem> {
    NSURL * _myPreviewURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFileAtURL:(id)arg1;
- (id)previewItemURL;

@end

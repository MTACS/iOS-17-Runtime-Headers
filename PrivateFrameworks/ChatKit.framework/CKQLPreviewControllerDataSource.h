
@interface CKQLPreviewControllerDataSource : NSObject <QLPreviewControllerDataSource> {
    NSArray * _previewItems;
}

@property (nonatomic, copy) NSArray *previewItems;

- (void).cxx_destruct;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (id)previewItems;
- (void)setPreviewItems:(id)arg1;

@end

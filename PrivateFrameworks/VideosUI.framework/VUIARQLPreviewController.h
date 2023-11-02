
@interface VUIARQLPreviewController : QLPreviewController <QLPreviewControllerDataSource> {
    ARQuickLookPreviewItem * _quickLookPreviewItem;
    ARQuickLookWebKitItem * _quickLookWebKitItem;
}

@property (nonatomic, retain) ARQuickLookPreviewItem *quickLookPreviewItem;
@property (nonatomic, retain) ARQuickLookWebKitItem *quickLookWebKitItem;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)initWithQuickLookPreviewItem:(id)arg1;
- (id)initWithQuickLookWebKitItem:(id)arg1;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (id)quickLookPreviewItem;
- (id)quickLookWebKitItem;
- (void)setQuickLookPreviewItem:(id)arg1;
- (void)setQuickLookWebKitItem:(id)arg1;

@end

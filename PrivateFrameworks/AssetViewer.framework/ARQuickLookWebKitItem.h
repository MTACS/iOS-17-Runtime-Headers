
@interface ARQuickLookWebKitItem : QLItem <QLPreviewItemPrivateCustomExtensionHandling> {
    NSDictionary * _additionalParameters;
    <ARQuickLookWebKitItemDelegate> * _delegate;
    ARQuickLookPreviewItem * _previewItem;
    NSString * _urlFragment;
}

@property (nonatomic, copy) NSDictionary *additionalParameters;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARQuickLookWebKitItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ARQuickLookPreviewItem *previewItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *urlFragment;

- (void).cxx_destruct;
- (id)additionalParameters;
- (id)delegate;
- (void)handleMessageFromCustomExtension:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithDataProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 previewItem:(id)arg4;
- (id)initWithPreviewItemProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 fileSize:(id)arg4 previewItem:(id)arg5;
- (id)previewItem;
- (id)previewOptions;
- (void)setAdditionalParameters:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreviewItem:(id)arg1;
- (void)setUrlFragment:(id)arg1;
- (id)urlFragment;

@end

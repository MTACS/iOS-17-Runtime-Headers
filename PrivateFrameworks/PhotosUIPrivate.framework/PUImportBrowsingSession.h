
@interface PUImportBrowsingSession : PUBrowsingSession <PHImportControllerObserver> {
    void importController;
    void thumbnailProvider;
}

@property (nonatomic, readonly) NSString *emptyPlaceholderSubtitle;
@property (nonatomic, readonly) NSString *emptyPlaceholderTitle;
@property (nonatomic, readonly) <PUBrowsingSessionImageWellThumbnailProvider> *imageWellThumbnailProvider;
@property (nonatomic, retain) PXImportController *importController;

+ (id)withDeviceMedia;

- (void).cxx_destruct;
- (id)emptyPlaceholderSubtitle;
- (id)emptyPlaceholderTitle;
- (id)imageWellThumbnailProvider;
- (id)importController;
- (void)importController:(id)arg1 addedImportSource:(id)arg2;
- (void)importController:(id)arg1 failedToAddImportSource:(id)arg2 exceptions:(id)arg3;
- (void)importController:(id)arg1 removedImportSource:(id)arg2;
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3 photosDetailsContext:(id)arg4 lowMemoryMode:(bool)arg5 importStatusManager:(id)arg6 privacyController:(id)arg7;
- (void)setImportController:(id)arg1;

@end

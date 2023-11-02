
@interface PhotosUIPrivate.StoryExportActivityItemProvider : UIActivityItemProvider {
    void aspectRatio;
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  destinationURL;
    void exportManager;
    void fullSizePlayerExtendedTraitCollectionSnapshot;
    void iconAsset;
    void progressController;
    void storyConfiguration;
}

@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (void)cancel;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)item;

@end

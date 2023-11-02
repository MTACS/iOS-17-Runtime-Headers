
@interface PhotosUIPrivate.StoryExportActivityViewController : UIActivityViewController <UIActivityViewControllerAirDropDelegate, UIActivityViewControllerObjectManipulationDelegate> {
    void $__lazy_storage_$_linkMetadata;
    void errorReporter;
    void exportActivityItemProvider;
    void exportPreviewViewController;
    void fullSizePlayerAspect;
    void presentingFailureAlert;
}

@property (nonatomic, copy) id /* block */ completionWithItemsHandler;
@property (nonatomic) long long modalPresentationStyle;

- (void).cxx_destruct;
- (id)_customizationGroupsForActivityViewController:(id)arg1;
- (void)activityViewControllerDidFinishAirdropTransfer:(id)arg1;
- (id /* block */)completionWithItemsHandler;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (long long)modalPresentationStyle;
- (void)setCompletionWithItemsHandler:(id /* block */)arg1;
- (void)setModalPresentationStyle:(long long)arg1;

@end

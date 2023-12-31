
@interface _UIDICActivityItemProvider : UIActivityItemProvider {
    UIDocumentInteractionController * _documentInteractionController;
}

@property (nonatomic, readonly) UIDocumentInteractionController *documentInteractionController;

- (void).cxx_destruct;
- (bool)_shouldExecuteItemOperationForActivity:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 openURLAnnotationForActivityType:(id)arg2;
- (id)documentInteractionController;
- (id)initWithPlaceholderItem:(id)arg1 documentInteractionController:(id)arg2;
- (id)item;
- (id)loadedURL;
- (void)main;

@end


@interface AppStoreKitInternal.URLActivityItemProvider : UIActivityItemProvider <UIActivityItemLinkPresentationSource, UIActivityItemSubjectSource> {
    void artworkLoader;
    void excludedActivityTypes;
    void shareSheetData;
}

@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)activityViewControllerSubject:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)item;

@end


@interface ActionPanelActivityItemProvider : _SFLinkWithPreviewActivityItemProvider {
    TabDocument * _tabDocument;
}

@property (nonatomic, readonly) TabDocument *tabDocument;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)initWithPlaceholderItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3 webView:(id)arg4;
- (id)initWithPlaceholderItem:(id)arg1 tabDocument:(id)arg2;
- (id)initWithTabDocument:(id)arg1;
- (id)tabDocument;

@end

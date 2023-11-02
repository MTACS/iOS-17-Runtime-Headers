
@interface SKUIURLActivityItemProvider : SKUIDeferredActivityItemProvider {
    SKUIResourceLoader * _resourceLoader;
}

+ (id)placeholderItem;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2;
- (id)initWithProductPageItemProvider:(id /* block */)arg1 clientContext:(id)arg2;
- (id)item;
- (id)linkPresentationImageFor:(id)arg1;

@end

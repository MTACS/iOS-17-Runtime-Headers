
@interface _SFActivityExtensionItemProvider : _SFActivityItemProvider {
    NSExtensionItem * _extensionItem;
}

@property (nonatomic, retain) NSExtensionItem *extensionItem;

- (void).cxx_destruct;
- (id)_itemForActivityType:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)extensionItem;
- (id)initWithExtensionItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3 webView:(id)arg4;
- (id)item;
- (void)setExtensionItem:(id)arg1;

@end

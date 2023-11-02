
@interface AppStoreKitInternal.TextActivityItemProvider : UIActivityItemProvider {
    void excludedActivityTypes;
    void text;
}

@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)item;

@end

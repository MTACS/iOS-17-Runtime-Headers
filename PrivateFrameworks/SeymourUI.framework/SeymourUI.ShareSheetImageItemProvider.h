
@interface SeymourUI.ShareSheetImageItemProvider : UIActivityItemProvider {
    void artworkItemProvider;
    void loadedImage;
    void lock;
    void timeout;
}

@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)item;

@end

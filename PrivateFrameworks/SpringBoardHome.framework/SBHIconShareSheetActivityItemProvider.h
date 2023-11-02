
@interface SBHIconShareSheetActivityItemProvider : UIActivityItemProvider {
    LSiTunesMetadata * _iTunesMetadata;
    UIImage * _itemImage;
    NSString * _itemName;
    NSURL * _itemURL;
}

@property (nonatomic, retain) LSiTunesMetadata *iTunesMetadata;
@property (nonatomic, retain) UIImage *itemImage;
@property (nonatomic, retain) NSString *itemName;
@property (nonatomic, retain) NSURL *itemURL;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)iTunesMetadata;
- (id)initWithIconManager:(id)arg1 icon:(id)arg2;
- (id)item;
- (id)itemImage;
- (id)itemName;
- (id)itemURL;
- (void)setITunesMetadata:(id)arg1;
- (void)setItemImage:(id)arg1;
- (void)setItemName:(id)arg1;
- (void)setItemURL:(id)arg1;

@end

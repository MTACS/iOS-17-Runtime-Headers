
@interface NUArticleTextActivityItemSource : NUArticleActivityItemSource {
    NSString * _itemTitle;
}

@property (nonatomic, readonly) NSString *itemTitle;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithHeadline:(id)arg1;
- (id)itemTitle;

@end


@interface NUArticleImageActivityItemSource : NUArticleActivityItemSource {
    UIImage * _articleImage;
}

@property (nonatomic, readonly) UIImage *articleImage;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)articleImage;
- (id)initWithHeadline:(id)arg1;

@end

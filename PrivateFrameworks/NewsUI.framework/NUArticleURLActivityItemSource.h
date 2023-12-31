
@interface NUArticleURLActivityItemSource : NUArticleActivityItemSource {
    NSURL * _articleURL;
}

@property (nonatomic, readonly) NSURL *articleURL;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)articleURL;
- (id)bodyStringForMailMessage;
- (id)initWithHeadline:(id)arg1 URLModifier:(id)arg2;

@end

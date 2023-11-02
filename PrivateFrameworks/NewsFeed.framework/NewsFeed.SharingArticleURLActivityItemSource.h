
@interface NewsFeed.SharingArticleURLActivityItemSource : NSObject <UIActivityItemSource> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  articleURL;
    void headline;
    void linkPresentationSource;
    void mailShareLinkTextProvider;
    void sourceChannelPublic;
}

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)init;

@end

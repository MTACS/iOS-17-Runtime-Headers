
@interface NewsFeed.SharingPuzzleURLActivityItemSource : NSObject <UIActivityItemSource> {
    void linkPresentationSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  puzzleURL;
}

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)init;

@end

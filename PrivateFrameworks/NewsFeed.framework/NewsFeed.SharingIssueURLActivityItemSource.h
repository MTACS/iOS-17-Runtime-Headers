
@interface NewsFeed.SharingIssueURLActivityItemSource : NSObject <UIActivityItemSource> {
    void issueCoverDate;
    void issueDescription;
    void issueTitle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  issueURL;
    void linkPresentationSource;
}

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)init;

@end

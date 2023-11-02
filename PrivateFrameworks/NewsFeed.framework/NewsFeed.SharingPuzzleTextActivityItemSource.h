
@interface NewsFeed.SharingPuzzleTextActivityItemSource : NSObject <UIActivityItemSource> {
    void $__lazy_storage_$_completeSolvedText;
    void $__lazy_storage_$_defaultText;
    void $__lazy_storage_$_solvedPuzzleTypeText;
    void $__lazy_storage_$_solvedWithTimeText;
    void puzzle;
    void shareData;
}

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)init;

@end

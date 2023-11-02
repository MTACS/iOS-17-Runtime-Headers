
@protocol FCReadingListObserving <NSObject>

@required

- (void)readingList:(FCReadingList *)arg1 didAddArticles:(NSArray *)arg2 removeArticles:(NSArray *)arg3 eventInitiationLevel:(long long)arg4;

@end

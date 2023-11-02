
@interface WBSHistoryURLCompletionMatchData : NSObject <WBSURLCompletionMatchData> {
    struct RefPtr<SafariShared::HistoryURLCompletionItem, WTF::RawPtrTraits<SafariShared::HistoryURLCompletionItem>, WTF::DefaultRefDerefTraits<SafariShared::HistoryURLCompletionItem>> { 
        struct HistoryURLCompletionItem {} *m_ptr; 
    }  _item;
}

@property (nonatomic, readonly, copy) NSString *cloudTabDeviceName;
@property (nonatomic, readonly) bool containsBookmark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool lastVisitWasFailure;
@property (nonatomic, readonly) double lastVisitedTimeInterval;
@property (nonatomic, readonly) bool onlyContainsCloudTab;
@property (nonatomic, readonly) NSString *originalURLString;
@property (nonatomic, readonly) bool shouldPreload;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long visitCount;
@property (nonatomic, readonly) long long visitCountScore;
@property (nonatomic, readonly) bool visitWasClientError;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)containsBookmark;
- (void)enumeratePageTitlesAndUserVisibleURLsUsingBlock:(id /* block */)arg1;
- (void)enumeratePageTitlesUsingBlock:(id /* block */)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCompletionItem:(void*)arg1;
- (bool)lastVisitWasFailure;
- (double)lastVisitedTimeInterval;
- (id)matchDataByMergingWithMatchData:(id)arg1;
- (bool)matchesAutocompleteTrigger:(id)arg1 isStrengthened:(bool)arg2;
- (id)originalURLString;
- (id)pageTitleAtIndex:(unsigned long long)arg1;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (bool)shouldPreload;
- (float)topSitesScoreForPageTitleAtTime:(double)arg1;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;
- (long long)visitCount;
- (long long)visitCountScore;
- (long long)visitCountScoreForPageTitleAtTime;
- (long long)visitCountScoreForURLStringAtIndex:(unsigned long long)arg1;
- (bool)visitWasClientError;

@end

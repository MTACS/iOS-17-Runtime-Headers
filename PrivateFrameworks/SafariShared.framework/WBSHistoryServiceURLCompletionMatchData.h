
@interface WBSHistoryServiceURLCompletionMatchData : NSObject <WBSURLCompletionMatchData> {
    NSArray * _autocompleteTriggersAsStringArray;
    NSArray * _entries;
    struct unique_ptr<SafariShared::_HistoryStreamedMatchData, std::default_delete<SafariShared::_HistoryStreamedMatchData>> { 
        struct __compressed_pair<SafariShared::_HistoryStreamedMatchData *, std::default_delete<SafariShared::_HistoryStreamedMatchData>> { 
            struct _HistoryStreamedMatchData {} *__value_; 
        } __ptr_; 
    }  _streamData;
}

@property (nonatomic, readonly, copy) NSString *cloudTabDeviceName;
@property (nonatomic, readonly) bool containsBookmark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *entries;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool lastVisitWasFailure;
@property (nonatomic) double lastVisitedTimeInterval;
@property (nonatomic, readonly) bool onlyContainsCloudTab;
@property (nonatomic, readonly) NSString *originalURLString;
@property (nonatomic, readonly) bool shouldPreload;
@property (nonatomic, readonly) struct _HistoryStreamedMatchData { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; double x2; void *x3; long long x4; int x5; long long x6; unsigned char x7; unsigned char x8; unsigned char x9; }*streamData;
@property (readonly) Class superclass;
@property (nonatomic) long long visitCount;
@property (nonatomic) long long visitCountScore;
@property (nonatomic, readonly) bool visitWasClientError;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)containsBookmark;
- (id)entries;
- (void)enumeratePageTitlesAndUserVisibleURLsUsingBlock:(id /* block */)arg1;
- (void)enumeratePageTitlesUsingBlock:(id /* block */)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithLastVisitWasFailure:(bool)arg1 visitWasFromThisDevice:(bool)arg2 visitWasClientError:(bool)arg3;
- (id)initWithStreamData:(void*)arg1 entries:(id)arg2;
- (bool)lastVisitWasFailure;
- (double)lastVisitedTimeInterval;
- (id)matchDataByMergingWithMatchData:(id)arg1;
- (bool)matchesAutocompleteTrigger:(id)arg1 isStrengthened:(bool)arg2;
- (id)originalURLString;
- (id)pageTitleAtIndex:(unsigned long long)arg1;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (void)setAutocompleteTriggers:(const void*)arg1 length:(unsigned long long)arg2;
- (void)setEntries:(id)arg1;
- (void)setLastVisitedTimeInterval:(double)arg1;
- (void)setVisitCount:(long long)arg1;
- (void)setVisitCountScore:(long long)arg1;
- (bool)shouldPreload;
- (struct _HistoryStreamedMatchData { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; double x2; void *x3; long long x4; int x5; long long x6; unsigned char x7; unsigned char x8; unsigned char x9; }*)streamData;
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

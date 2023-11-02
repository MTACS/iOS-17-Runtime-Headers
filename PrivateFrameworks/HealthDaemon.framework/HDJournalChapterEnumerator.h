
@interface HDJournalChapterEnumerator : NSObject {
    NSURL * _URL;
    NSError * _cachedError;
    long long  _currentIndex;
    bool  _hasLoadedPersistedJournalNames;
    long long  _maxAllowedOpenJournalChapterCount;
    NSMutableArray * _openJournalChapters;
    NSMutableArray * _remainingJournalChapters;
    long long  _totalJournalChapterCount;
    <HDJournalChapterEnumeratorTestsDelegate> * _unitTestDelegate;
}

@property (nonatomic, readonly) unsigned long long currentJournalChapterIndex;
@property (nonatomic, readonly) bool hasJournalChapters;
@property (nonatomic) long long maxAllowedOpenJournalChapterCount;
@property (getter=hasMoreJournalChapters, nonatomic, readonly) bool moreJournalChapters;
@property (nonatomic, readonly) unsigned long long totalJournalChapterCount;
@property (getter=_totalOpenJournalChapterCount, nonatomic, readonly) unsigned long long totalOpenJournalChapterCount;
@property (nonatomic) <HDJournalChapterEnumeratorTestsDelegate> *unitTestDelegate;

+ (long long)journalChapterCountForURL:(id)arg1;
+ (id)journalChaptersForURL:(id)arg1 error:(id*)arg2;
+ (id)nextJournalChapterNameForURL:(id)arg1;

- (void).cxx_destruct;
- (id)_openJournalChapters:(id)arg1 error:(id*)arg2;
- (unsigned long long)_totalOpenJournalChapterCount;
- (void)closeJournalChapters;
- (unsigned long long)currentJournalChapterIndex;
- (void)dealloc;
- (bool)hasJournalChapters;
- (bool)hasMoreJournalChapters;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)loadSortedJournalChaptersWithError:(id*)arg1;
- (long long)maxAllowedOpenJournalChapterCount;
- (id)nextOpenJournalChapterError:(id*)arg1;
- (void)setMaxAllowedOpenJournalChapterCount:(long long)arg1;
- (void)setUnitTestDelegate:(id)arg1;
- (unsigned long long)totalJournalChapterCount;
- (id)unitTestDelegate;

@end

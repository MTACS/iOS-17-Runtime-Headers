
@interface PXTimelineScheduler : NSObject {
    NSArray * _bestContent;
    NSArray * _featuredPhotoTimelineEntries;
    NSArray * _memoryTimelineEntries;
    NSArray * _timelineCandidates;
    PXTimelineDataSource * _timelineDataSource;
}

@property (nonatomic, retain) NSArray *bestContent;
@property (nonatomic, retain) NSArray *featuredPhotoTimelineEntries;
@property (nonatomic, retain) NSArray *memoryTimelineEntries;
@property (nonatomic, retain) NSArray *timelineCandidates;
@property (nonatomic, retain) PXTimelineDataSource *timelineDataSource;

- (void).cxx_destruct;
- (id)_coalesceRepeatedTimelineEntries:(id)arg1;
- (id)_findBestContentAndRemoveFromSourceAtDate:(id)arg1 options:(id)arg2;
- (id)_findBestFeaturedPhotoAndRemoveFromSource;
- (void)_initTimelineEntriesAtDate:(id)arg1 options:(id)arg2;
- (id)_scheduledTimelineEntriesWithOptions:(id)arg1 atDate:(id)arg2;
- (id)_sortedTimelineEntriesForMemoriesAtDate:(id)arg1;
- (long long)_startOfDayIndexWithOffsetDay:(long long)arg1 entriesCount:(long long)arg2 perDayLimit:(long long)arg3 options:(id)arg4;
- (id)_timelineAtDate:(id)arg1 startOfDayCandidatesIndex:(long long)arg2 timelineEntryByBestContentInterval:(id)arg3 options:(id)arg4;
- (id)_timelineEntriesFromAssetCollections:(id)arg1;
- (id)_timelineEntryByBestContentIntervalAtDate:(id)arg1 numberOfDays:(long long)arg2 options:(id)arg3;
- (id)bestContent;
- (id)featuredPhotoTimelineEntries;
- (id)init;
- (id)initWithTimelineDataSource:(id)arg1;
- (id)memoryTimelineEntries;
- (id)scheduledTimelineEntriesWithOptions:(id)arg1;
- (void)setBestContent:(id)arg1;
- (void)setFeaturedPhotoTimelineEntries:(id)arg1;
- (void)setMemoryTimelineEntries:(id)arg1;
- (void)setTimelineCandidates:(id)arg1;
- (void)setTimelineDataSource:(id)arg1;
- (id)timelineCandidates;
- (id)timelineDataSource;

@end

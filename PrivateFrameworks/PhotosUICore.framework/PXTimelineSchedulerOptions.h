
@interface PXTimelineSchedulerOptions : NSObject {
    double  _bestContentEntryDuration;
    NSArray * _bestContentStartTimeHours;
    unsigned long long  _numberOfTimelines;
    double  _timelineEntryDuration;
    unsigned long long  _timelineForSize;
    unsigned long long  _timelineIndex;
}

@property (nonatomic) double bestContentEntryDuration;
@property (nonatomic, retain) NSArray *bestContentStartTimeHours;
@property (nonatomic) unsigned long long numberOfTimelines;
@property (nonatomic) double timelineEntryDuration;
@property (nonatomic) unsigned long long timelineForSize;
@property (nonatomic) unsigned long long timelineIndex;

+ (id)_sortTimelineSizesFromSet:(id)arg1;

- (void).cxx_destruct;
- (double)bestContentEntryDuration;
- (id)bestContentStartTimeHours;
- (id)init;
- (unsigned long long)numberOfTimelines;
- (void)setBestContentEntryDuration:(double)arg1;
- (void)setBestContentStartTimeHours:(id)arg1;
- (void)setNumberOfTimelines:(unsigned long long)arg1;
- (void)setTimelineEntryDuration:(double)arg1;
- (void)setTimelineForSize:(unsigned long long)arg1;
- (void)setTimelineIndex:(unsigned long long)arg1;
- (double)timelineEntryDuration;
- (unsigned long long)timelineForSize;
- (unsigned long long)timelineIndex;
- (void)updateOptionsForTimelineSize:(unsigned long long)arg1 withTimelineSizes:(id)arg2;

@end

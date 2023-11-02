
@interface BLSAlwaysOnTimeline : NSObject {
    id /* block */  _configureEntryBlock;
    <NSObject><NSCopying> * _identifier;
}

@property (nonatomic, readonly) <NSObject><NSCopying> *identifier;

+ (id)coalesceSpecifiers:(id)arg1 forDateInterval:(id)arg2 framesPerSecond:(double)arg3 previousSpecifier:(id)arg4;
+ (id)coalescedSpecifierFromEnumerator:(id)arg1 forDateInterval:(id)arg2 framesPerSecond:(double)arg3 previousSpecifier:(id)arg4;
+ (id)constructFrameSpecifiersForTimelines:(id)arg1 dateInterval:(id)arg2 shouldConstructStartSpecifier:(bool)arg3 framesPerSecond:(double)arg4 previousSpecifier:(id)arg5;
+ (id)emptyTimelineWithIdentifier:(id)arg1;
+ (id)everyMinuteTimelineWithIdentifier:(id)arg1 configure:(id /* block */)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfEntries:(id)arg1 forDateInterval:(id)arg2 shouldIncludePrevious:(bool)arg3;
+ (id)timelineWithEntries:(id)arg1 identifier:(id)arg2 configure:(id /* block */)arg3;
+ (id)timelineWithPerMinuteUpdateFrequency:(long long)arg1 identifier:(id)arg2 configure:(id /* block */)arg3;
+ (id)timelineWithUpdateInterval:(double)arg1 startDate:(id)arg2 identifier:(id)arg3 configure:(id /* block */)arg4;
+ (id)uncoalescedFrameSpecifiersForTimelines:(id)arg1 dateInterval:(id)arg2 shouldConstructStartSpecifier:(bool)arg3 framesPerSecond:(double)arg4 previousSpecifier:(id)arg5;

- (void).cxx_destruct;
- (id)configureEntry:(id)arg1 previousEntry:(id)arg2;
- (id)configuredEntriesForDateInterval:(id)arg1 previousEntry:(id)arg2 shouldConstructStartEntry:(bool)arg3;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 configure:(id /* block */)arg2;
- (long long)requestedFidelityForStartEntryInDateInterval:(id)arg1 withPreviousEntry:(id)arg2;
- (id)unconfiguredEntriesForDateInterval:(id)arg1 previousEntry:(id)arg2;

@end

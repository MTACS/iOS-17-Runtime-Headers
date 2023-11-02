
@interface SHQueryMediaTimelineAdjuster : NSObject {
    NSMutableIndexSet * _matchWindows;
    NSMutableArray * _mediaTimelineAdjustmentValues;
    NSMutableIndexSet * _noMatchWindows;
    NSArray * _queryMatchOffsetRanges;
    SHSignature * _querySignature;
}

@property (nonatomic, readonly) NSMutableIndexSet *matchWindows;
@property (nonatomic, readonly) NSMutableArray *mediaTimelineAdjustmentValues;
@property (nonatomic, readonly) NSMutableIndexSet *noMatchWindows;
@property (nonatomic, readonly) NSArray *queryMatchOffsetRanges;
@property (nonatomic, readonly) SHSignature *querySignature;

+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })NSRangeFromSHRange:(id)arg1;
+ (double)timelineShiftDurationForOffset:(double)arg1 usingTimelineAdjustmentValues:(id)arg2;

- (void).cxx_destruct;
- (id)adjustedRangeFromTimeRange:(id)arg1;
- (id)adjustedTimeRangesFromTimeRanges:(id)arg1;
- (double)adjustedUpperBoundFromTimeRange:(id)arg1;
- (void)buildMediaTimelineAdjustmentValues;
- (id)initWithQuerySignature:(id)arg1 queryMatchOffsetRanges:(id)arg2;
- (id)matchWindows;
- (id)mediaTimelineAdjustmentValues;
- (id)noMatchWindows;
- (id)queryMatchOffsetRanges;
- (id)querySignature;

@end

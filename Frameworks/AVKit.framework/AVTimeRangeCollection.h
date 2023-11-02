
@interface AVTimeRangeCollection : NSObject {
    double  _combinedDuration;
    NSArray * _timeRanges;
}

@property (readonly) double combinedDuration;
@property (readonly) NSArray *timeRanges;

- (void).cxx_destruct;
- (id)arrayOfBoundaryTimes;
- (id)arrayOfDisplayTimes;
- (id)arrayOfDisplayTimesMatching:(id /* block */)arg1;
- (double)combinedDuration;
- (unsigned long long)count;
- (double)displayTimeFromTime:(double)arg1;
- (id)displayTimeRangeTrimmedToTimeRange:(id)arg1;
- (id)init;
- (id)initWithInterstitialTimeRanges:(id)arg1;
- (id)initWithTimeRanges:(id)arg1;
- (id)initWithTimedMetadataGroups:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTimeRangeCollection:(id)arg1;
- (void)setMapDate:(id)arg1 toTime:(double)arg2;
- (double)timeFromDisplayTime:(double)arg1;
- (id)timeRangeAfterTime:(double)arg1;
- (id)timeRangeBeforeTime:(double)arg1;
- (id)timeRangeClosestToTime:(double)arg1;
- (id)timeRangeContainingTime:(double)arg1;
- (id)timeRanges;
- (id)timeRangesBetweenDisplayTime:(double)arg1 and:(double)arg2;

@end

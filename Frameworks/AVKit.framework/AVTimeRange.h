
@interface AVTimeRange : NSObject <NSCopying> {
    double  _duration;
    NSDate * _startDate;
    double  _startTime;
}

@property (getter=isCollapsedInTimeLine, readonly) bool collapsedInTimeLine;
@property (readonly) AVInterstitialDateRange *dateBasedInterstice;
@property (readonly) double duration;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } endCMTime;
@property (readonly) double endTime;
@property (getter=isHidden, readonly) bool hidden;
@property (readonly) AVInterstitialTimeRange *interstice;
@property (getter=isSkipped, readonly) bool skipped;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } startCMTime;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) double startTime;

+ (id)timeRangeWithInterstice:(id)arg1;
+ (id)timeRangeZero;

- (void).cxx_destruct;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })cmTimeRange;
- (long long)compare:(id)arg1;
- (bool)containsDate:(id)arg1;
- (bool)containsTime:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateBasedInterstice;
- (id)dateForTime:(double)arg1;
- (double)deltaTimeFromOutsideTime:(double)arg1;
- (id)description;
- (double)duration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })endCMTime;
- (id)endDate;
- (double)endTime;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAVTimedMetadataGroup:(id)arg1;
- (id)initWithCMTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)initWithStartTime:(double)arg1 duration:(double)arg2;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)initWithUnionOfCMTimeRanges:(id)arg1;
- (id)interstice;
- (bool)isCollapsedInTimeLine;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTimeRange:(id)arg1;
- (bool)isHidden;
- (bool)isSkipped;
- (double)pinnedTime:(double)arg1;
- (bool)requiresLinearPlaybackForTime:(double)arg1;
- (void)setMapDate:(id)arg1 toTime:(double)arg2;
- (void)setMapTime:(double)arg1 toDate:(id)arg2;
- (void)setStartDate:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startCMTime;
- (id)startDate;
- (double)startTime;
- (double)timeForDate:(id)arg1;
- (id)timeRangeByAddingTimeInterval:(double)arg1;
- (id)timeRangeByAddingTimeInterval:(double)arg1 shiftingDates:(bool)arg2;
- (id)timeRangeExcludingTimeRange:(id)arg1;
- (id)timeRangeIntersectingWithTimeRange:(id)arg1;

@end

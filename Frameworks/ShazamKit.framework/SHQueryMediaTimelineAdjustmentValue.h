
@interface SHQueryMediaTimelineAdjustmentValue : NSObject {
    SHRange * _timeRange;
    double  _timelineShiftDuration;
}

@property (nonatomic, readonly) SHRange *timeRange;
@property (nonatomic, readonly) double timelineShiftDuration;

- (void).cxx_destruct;
- (id)initWithTimeRange:(id)arg1 timelineShiftDuration:(double)arg2;
- (id)timeRange;
- (double)timelineShiftDuration;

@end

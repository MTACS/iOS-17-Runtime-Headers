
@interface CLRacingRoutePerformanceResults : NSObject {
    double  _currentAveragePace_s_per_m;
    double  _currentDistance_m;
    double  _referenceDistance_m;
    unsigned long long  _state;
    double  _timeAhead_s;
    double  _totalOverlapDistance_m;
}

@property (nonatomic, readonly) double currentAveragePace_s_per_m;
@property (nonatomic, readonly) double currentDistance_m;
@property (nonatomic, readonly) double referenceDistance_m;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) double timeAhead_s;
@property (nonatomic, readonly) double totalOverlapDistance_m;

- (double)currentAveragePace_s_per_m;
- (double)currentDistance_m;
- (id)initWithTimeAhead:(double)arg1 currentDistance:(double)arg2 referenceDistance:(double)arg3 currentAveragePace:(double)arg4 totalOverlapDistance:(double)arg5 state:(unsigned long long)arg6;
- (double)referenceDistance_m;
- (unsigned long long)state;
- (double)timeAhead_s;
- (double)totalOverlapDistance_m;

@end

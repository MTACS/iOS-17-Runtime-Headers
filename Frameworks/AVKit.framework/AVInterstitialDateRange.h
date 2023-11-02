
@interface AVInterstitialDateRange : AVInterstitialTimeRange {
    NSDate * _endDate;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _mappedTimeRange;
    NSDate * _startDate;
}

@property (readonly) NSDate *endDate;
@property (readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)_initWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)_setPlayerInterstitialEvent:(id)arg1;
- (void)_updateMappedStartTime;
- (id)description;
- (id)endDate;
- (id)initWithStart:(id)arg1 end:(id)arg2;
- (id)initWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)isEqualToInterstitialTimeRange:(id)arg1;
- (void)setEndDate:(id)arg1;
- (id)startDate;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end

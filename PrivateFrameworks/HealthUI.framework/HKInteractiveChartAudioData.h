
@interface HKInteractiveChartAudioData : NSObject <HKGraphSeriesChartData> {
    double  _averageLEQ;
    double  _duration;
    HKInteractiveChartAudioData * _overviewData;
}

@property (nonatomic) double averageLEQ;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKInteractiveChartAudioData *overviewData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_durationString:(double)arg1;
- (double)averageLEQ;
- (id)description;
- (double)duration;
- (id)overviewData;
- (void)setAverageLEQ:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setOverviewData:(id)arg1;

@end

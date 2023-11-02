
@interface HKInteractiveChartBloodPressureData : NSObject <HKGraphSeriesChartData> {
    HKValueRange * _diastolicRange;
    HKValueRange * _systolicRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HKValueRange *diastolicRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKValueRange *systolicRange;

- (void).cxx_destruct;
- (id)diastolicRange;
- (void)setDiastolicRange:(id)arg1;
- (void)setSystolicRange:(id)arg1;
- (id)systolicRange;

@end

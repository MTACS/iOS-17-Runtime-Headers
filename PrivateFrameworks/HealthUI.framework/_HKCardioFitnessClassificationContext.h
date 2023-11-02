
@interface _HKCardioFitnessClassificationContext : _HKCardioFitnessOverlayContext {
    <_HKCardioFitnessClassificationContextDelegate> * _delegate;
}

@property (nonatomic) <_HKCardioFitnessClassificationContextDelegate> *delegate;

- (void).cxx_destruct;
- (id)baseDisplayTypeForOverlay:(long long)arg1;
- (bool)canSelectOverlayContextItem:(id)arg1 isDeselecting:(bool)arg2 timeScope:(long long)arg3 chartController:(id)arg4;
- (id)delegate;
- (id)initWithMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 delegate:(id)arg4;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (id)sampleTypeForDateRangeUpdates;
- (void)setDelegate:(id)arg1;
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(id /* block */)arg5;

@end

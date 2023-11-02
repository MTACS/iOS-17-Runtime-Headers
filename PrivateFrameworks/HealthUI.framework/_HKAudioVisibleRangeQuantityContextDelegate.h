
@interface _HKAudioVisibleRangeQuantityContextDelegate : _HKAudioStandardQuantityContextDelegate {
    HKLineSeries * _audioOverlayLineSeries;
}

@property (nonatomic, readonly) HKLineSeries *audioOverlayLineSeries;

- (void).cxx_destruct;
- (void)_enumerateAudioExposureChartPoints:(id)arg1 withBlock:(id /* block */)arg2;
- (id)alternateLineSeries;
- (id)audioOverlayLineSeries;
- (id)formatterForTimescope:(long long)arg1;
- (id)initWithCustomDataSource:(id)arg1 primaryDisplayType:(id)arg2;
- (id)valueContextString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;
- (id)valueString:(id)arg1 applicationItems:(id)arg2 representativeDisplayType:(id)arg3;

@end

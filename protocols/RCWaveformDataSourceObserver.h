
@protocol RCWaveformDataSourceObserver <NSObject>

@required

- (void)waveformDataSource:(RCWaveformDataSource *)arg1 didLoadWaveformSegment:(RCWaveformSegment *)arg2;
- (void)waveformDataSourceDidFinishLoading:(RCWaveformDataSource *)arg1;

@optional

- (void)waveformDataSourceRequiresUpdate:(RCWaveformDataSource *)arg1;

@end

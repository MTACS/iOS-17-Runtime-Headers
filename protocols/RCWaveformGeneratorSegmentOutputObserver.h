
@protocol RCWaveformGeneratorSegmentOutputObserver <NSObject>

@required

- (void)waveformGenerator:(RCWaveformGenerator *)arg1 didLoadWaveformSegment:(RCWaveformSegment *)arg2;
- (void)waveformGeneratorDidFinishLoading:(RCWaveformGenerator *)arg1 error:(NSError *)arg2;
- (void)waveformGeneratorWillBeginLoading:(RCWaveformGenerator *)arg1;

@end

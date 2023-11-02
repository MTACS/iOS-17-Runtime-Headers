
@protocol MRUAudioAnalyzerObserver <NSObject>

@required

- (void)audioAnalyzer:(MRUAudioAnalyzer *)arg1 didUpdateWaveform:(MRUWaveformData *)arg2;

@end

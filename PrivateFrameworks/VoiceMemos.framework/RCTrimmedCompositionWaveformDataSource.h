
@interface RCTrimmedCompositionWaveformDataSource : RCCompositionWaveformDataSource {
    NSURL * _destinationWaveformURL;
}

@property (nonatomic, readonly) NSURL *destinationWaveformURL;

- (void).cxx_destruct;
- (id)destinationWaveformURL;
- (id)generatedWaveformOutputURL;
- (id)initWithSourceComposition:(id)arg1 destinationWaveformURL:(id)arg2;
- (bool)preferLoadingFragmentWaveforms;

@end

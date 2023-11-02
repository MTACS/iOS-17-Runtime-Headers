
@interface BWVisionInferenceConfiguration : BWInferenceConfiguration {
    bool  _reuseUpstreamFaceObservations;
    id /* block */  _shouldPreventRequestForSampleBuffer;
}

@property (nonatomic) bool reuseUpstreamFaceObservations;
@property (nonatomic, copy) id /* block */ shouldPreventRequestForSampleBuffer;

- (void)dealloc;
- (bool)reuseUpstreamFaceObservations;
- (void)setReuseUpstreamFaceObservations:(bool)arg1;
- (void)setShouldPreventRequestForSampleBuffer:(id /* block */)arg1;
- (id /* block */)shouldPreventRequestForSampleBuffer;

@end

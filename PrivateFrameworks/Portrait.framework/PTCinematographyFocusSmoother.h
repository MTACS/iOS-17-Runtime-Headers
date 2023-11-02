
@interface PTCinematographyFocusSmoother : NSObject {
    MutableFloatArray * _cachedSamples;
    bool  _didEndSamples;
    unsigned long long  _minSamplesNeeded;
    PTCinematographyFocusSmoother * _nextFocusSmoother;
    unsigned long long  _unprocessedSampleCount;
}

@property (retain) MutableFloatArray *cachedSamples;
@property (readonly) bool didEndSamples;
@property (readonly) bool isEndOfSmoothedSamples;
@property (readonly) bool isSmoothedSampleAvailable;
@property (readonly) PTCinematographyFocusSmoother *lastFocusSmoother;
@property (readonly) unsigned long long minSamplesNeeded;
@property (retain) PTCinematographyFocusSmoother *nextFocusSmoother;
@property unsigned long long unprocessedSampleCount;

- (void).cxx_destruct;
- (void)_advanceToNextSmoothedSample;
- (float)_getSmoothedSample;
- (float)_lastAddedSample;
- (void)_padByCount:(unsigned long long)arg1;
- (void)_padToFill;
- (void)addSample:(float)arg1;
- (id)cachedSamples;
- (bool)didEndSamples;
- (void)endSamples;
- (id)init;
- (bool)isEndOfSmoothedSamples;
- (bool)isSmoothedSampleAvailable;
- (id)lastFocusSmoother;
- (unsigned long long)minSamplesNeeded;
- (id)nextFocusSmoother;
- (float)nextSmoothedSample;
- (void)setCachedSamples:(id)arg1;
- (void)setNextFocusSmoother:(id)arg1;
- (void)setUnprocessedSampleCount:(unsigned long long)arg1;
- (unsigned long long)unprocessedSampleCount;

@end

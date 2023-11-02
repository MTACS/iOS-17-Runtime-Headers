
@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput {
    AVAssetReaderAudioMixOutputInternal * _audioMixOutputInternal;
}

@property (nonatomic, copy) AVAudioMix *audioMix;
@property (nonatomic, readonly) NSDictionary *audioSettings;
@property (nonatomic, copy) NSString *audioTimePitchAlgorithm;
@property (nonatomic, readonly) NSArray *audioTracks;

+ (id)assetReaderAudioMixOutputWithAudioTracks:(id)arg1 audioSettings:(id)arg2;

- (id)_asset;
- (id)_audioCurvesForTrack:(id)arg1;
- (struct opaqueMTAudioProcessingTap { }*)_audioTapProcessorForTrack:(id)arg1;
- (id)_audioTimePitchAlgorithmForTrack:(id)arg1;
- (bool)_enableTrackExtractionReturningError:(id*)arg1;
- (void)_setAudioCurves:(id)arg1 forTrack:(id)arg2;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { }*)arg1 forTrack:(id)arg2;
- (void)_setAudioTimePitchAlgorithm:(id)arg1 forTrack:(id)arg2;
- (id)audioMix;
- (id)audioSettings;
- (id)audioTimePitchAlgorithm;
- (id)audioTracks;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithAudioTracks:(id)arg1 audioSettings:(id)arg2;
- (id)mediaType;
- (void)setAudioMix:(id)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;

@end


@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput {
    AVAssetReaderSampleReferenceOutputInternal * _sampleReferenceOutputInternal;
}

@property (nonatomic, readonly) AVAssetTrack *track;

+ (id)assetReaderSampleReferenceOutputWithTrack:(id)arg1;

- (id)_asset;
- (bool)_enableTrackExtractionReturningError:(id*)arg1;
- (bool)_trimsSampleDurations;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithTrack:(id)arg1;
- (id)mediaType;
- (id)track;

@end

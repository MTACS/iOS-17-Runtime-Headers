
@interface MPCModelMediaClipAVItem : MPAVItem {
    MPModelMediaClip * _mediaClip;
    MPModelGenericObject * _modelGenericObject;
}

@property (nonatomic, readonly) MPModelMediaClip *mediaClip;

+ (id)requiredMediaClipProperties;

- (void).cxx_destruct;
- (bool)_allowsCellularPlayback;
- (void)_applyLoudnessInfo;
- (id)_currentPreferredStaticAsset;
- (bool)_isVideoAsset;
- (bool)allowsAirPlayFromCloud;
- (bool)allowsExternalPlayback;
- (id /* block */)artworkCatalogBlock;
- (id)description;
- (double)durationFromExternalMetadata;
- (id)initWithMediaClip:(id)arg1;
- (bool)isAssetURLValid;
- (bool)isStreamable;
- (bool)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (id)mediaClip;
- (id)modelGenericObject;
- (bool)prefersSeekOverSkip;
- (void)reevaluateType;
- (id)rtcReportingServiceIdentifier;
- (bool)supportsRateChange;

@end

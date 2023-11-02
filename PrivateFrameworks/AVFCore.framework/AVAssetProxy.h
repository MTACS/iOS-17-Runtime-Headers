
@interface AVAssetProxy : AVAsset {
    AVAssetProxyInternal * _assetProxy;
}

+ (id)assetProxyWithPropertyList:(id)arg1;
+ (id)makePropertyListForMovieProxyHeader:(id)arg1 name:(id)arg2 prefersNominalDurations:(bool)arg3;

- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { }*)_copyFormatReader;
- (struct OpaqueFigAsset { }*)_figAsset;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)dealloc;
- (id)initWithPropertyList:(id)arg1;
- (bool)isProxy;
- (id)tracks;

@end

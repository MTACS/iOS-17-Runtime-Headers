
@interface AVStreamDataAsset : AVAsset {
    AVStreamDataAssetInspector * _inspector;
    AVAssetSynchronousInspectorLoader * _inspectorLoader;
    NSDictionary * _trackDictsByTrackID;
    NSArray * _tracks;
    AVDispatchOnce * _tracksOnce;
    AVStreamDataParser * _weakReferenceToParser;
}

- (void).cxx_destruct;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { }*)_copyFormatReader;
- (id)copyAssetRemovingTrackID:(int)arg1;
- (id)copyAssetWithAdditionalTrackID:(int)arg1 mediaType:(id)arg2;
- (id)copyAssetWithReplacementFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 forTrackID:(int)arg2;
- (void)dealloc;
- (id)formatDescriptionsForTrackID:(int)arg1;
- (id)initWithParser:(id)arg1 tracks:(id)arg2;
- (id)mediaTypeForTrackID:(int)arg1;
- (id)parser;
- (id)tracks;

@end

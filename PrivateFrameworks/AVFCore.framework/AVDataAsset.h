
@interface AVDataAsset : AVAsset {
    AVDispatchOnce * _allocateTracksOnceOnly;
    NSDictionary * _initializationOptions;
    AVAssetInspectorLoader * _loader;
    NSArray * _tracks;
}

+ (unsigned long long)_dataLengthLimit;
+ (id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long*)arg2;

- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { }*)_copyFormatReader;
- (bool)_requiresInProcessOperation;
- (void)dealloc;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;
- (unsigned long long)referenceRestrictions;
- (id)tracks;

@end

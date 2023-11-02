
@interface PUWallpaperRadarAttachmentProvider : NSObject <PXTapToRadarDiagnosticProvider> {
    PHAsset * _asset;
    PHSuggestion * _suggestion;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, retain) PHSuggestion *suggestion;

+ (id)generateDebugDescriptionForSuggestion:(id)arg1;
+ (id)radarConfigurationForAsset:(id)arg1 suggestion:(id)arg2 compoundLayerStack:(id)arg3 segmentationItem:(id)arg4 posterDescriptor:(id)arg5 posterConfiguration:(id)arg6 component:(long long)arg7 completionHandler:(id /* block */)arg8;

- (void).cxx_destruct;
- (id)asset;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (id)initWithSuggestion:(id)arg1 asset:(id)arg2;
- (void)setAsset:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (id)suggestion;

@end

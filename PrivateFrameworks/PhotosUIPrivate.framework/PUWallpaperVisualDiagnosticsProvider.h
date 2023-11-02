
@interface PUWallpaperVisualDiagnosticsProvider : NSObject <PXTapToRadarDiagnosticProvider, PXVisualDiagnosticsProvider> {
    PHAsset * _asset;
    PXMediaProvider * _mediaProvider;
    PHSuggestion * _suggestion;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) PHSuggestion *suggestion;

+ (id)visualDiagnosticsActionForSuggestion:(id)arg1 asset:(id)arg2 fromViewController:(id)arg3;
+ (id)visualDiagnosticsConfigurationForSuggestion:(id)arg1 asset:(id)arg2;

- (void).cxx_destruct;
- (void)_addAssetDiagnostics:(id)arg1;
- (void)_addCoverPage:(id)arg1;
- (void)_addCropDiagnostics:(id)arg1;
- (void)_addSuggestionDiagnostics:(id)arg1;
- (void)_drawAsset:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(id)arg3;
- (void)addVisualDiagnosticsToContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)asset;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (id)initWithSuggestion:(id)arg1 asset:(id)arg2;
- (id)mediaProvider;
- (id)suggestion;

@end

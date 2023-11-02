
@interface VCPParallaxAnalyzer : NSObject {
    NSDictionary * _options;
}

- (void).cxx_destruct;
- (int)analyzeAsset:(id)arg1 cancel:(id /* block */)arg2 results:(id*)arg3;
- (int)exportWallpaperForAsset:(id)arg1 cancel:(id /* block */)arg2 results:(id*)arg3;
- (id)initWithOptions:(id)arg1 andExistingResults:(id)arg2;
- (int)upgradeWallPaperAtURL:(id)arg1 toURL:(id)arg2 cancel:(id /* block */)arg3 results:(id*)arg4;

@end

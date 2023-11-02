
@interface VCPWallpaperAnalyzer : NSObject {
    float * _inputsData;
    VCPLoaned * _modelEspresso;
    NSString * _resConfig;
}

+ (id)sharedModelPool;

- (void).cxx_destruct;
- (int)analyzeWithSceneprint:(id)arg1 results:(id*)arg2 cancel:(id /* block */)arg3;
- (int)createModel;
- (id)init;

@end

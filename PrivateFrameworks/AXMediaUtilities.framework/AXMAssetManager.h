
@interface AXMAssetManager : NSObject

+ (id)defaultManager;

- (id)_compiledModelsDirectoryForType:(unsigned long long)arg1;
- (id)_modelAssetNamesOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2 compiled:(bool)arg3;
- (id)_modelAssetURLForModelNamed:(id)arg1 ofType:(unsigned long long)arg2 sources:(unsigned long long)arg3 compiled:(bool)arg4;
- (id)_modelAssetURLsOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2 compiled:(bool)arg3;
- (id)_modelsDirectoryForType:(unsigned long long)arg1 compiled:(bool)arg2;
- (id)_photoCaptionAssetsDirectory;
- (id)_uncompiledModelsDirectoryForType:(unsigned long long)arg1;
- (id)compiledModelAssetNamesOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2;
- (id)compiledModelAssetURLForModelNamed:(id)arg1 ofType:(unsigned long long)arg2 sources:(unsigned long long)arg3;
- (id)compiledModelAssetURLsOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2;
- (id)modelWithName:(id)arg1 ofType:(unsigned long long)arg2 sources:(unsigned long long)arg3 compileIfNeeded:(bool)arg4 persistCompiledModel:(bool)arg5 error:(id*)arg6;
- (id)uncompiledModelAssetNamesOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2;
- (id)uncompiledModelAssetURLForModelNamed:(id)arg1 ofType:(unsigned long long)arg2 sources:(unsigned long long)arg3;
- (id)uncompiledModelAssetURLsOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2;

@end

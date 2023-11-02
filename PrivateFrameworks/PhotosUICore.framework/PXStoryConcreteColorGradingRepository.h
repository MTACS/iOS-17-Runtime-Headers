
@interface PXStoryConcreteColorGradingRepository : NSObject <PXStoryColorGradingRepository> {
    NSCache * _colorLookupCubeCache;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, readonly) NSCache *colorLookupCubeCache;
@property (nonatomic, readonly) PXStoryColorGradingConfiguration *configuration;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) unsigned long long minimumCategoryKindFallbacks;

- (void).cxx_destruct;
- (id)_cachedColorLookupCubeForColorGradeKind:(long long)arg1;
- (id)_createColorLookupCubeForColorGradeKind:(long long)arg1;
- (id)_createCustomColorLookupCubeForResourceName:(id)arg1;
- (id)_cubeResourceNameForColorGradeKind:(long long)arg1;
- (void)_enumerateSupporedColorGradeCategoriesUsingBlock:(id /* block */)arg1;
- (id)_loadCustomColorLookupCubeForResourceName:(id)arg1;
- (void)_writeTemporaryFileWithCompressedColorCube:(id)arg1 forResourceName:(id)arg2;
- (long long)colorGradeKindForColorGradeCategory:(id)arg1;
- (long long)colorGradeKindForColorGradeCategory:(id)arg1 excludingKinds:(id)arg2;
- (id)colorLookupCubeCache;
- (id)colorLookupCubeForColorGradeKind:(long long)arg1;
- (id)configuration;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)localizedTitleForColorGradeKind:(long long)arg1;
- (id)log;
- (unsigned long long)minimumCategoryKindFallbacks;
- (void)startPreloadingWithCompletionHandler:(id /* block */)arg1;
- (id)supportedColorGradeKinds;
- (id)supportedUserPickableColorGradeKinds;

@end

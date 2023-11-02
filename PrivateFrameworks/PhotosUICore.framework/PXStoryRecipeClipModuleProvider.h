
@interface PXStoryRecipeClipModuleProvider : NSObject {
    PFStoryAutoEditConfiguration * _configuration;
}

@property (nonatomic, readonly) PFStoryAutoEditConfiguration *configuration;

- (void).cxx_destruct;
- (id)_splitEmptySpaceInModules:(id)arg1 maxEmptySpaceLength:(unsigned long long)arg2 momentClipRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 withClipCatalog:(id)arg4;
- (id)computeRunsForModuleType:(long long)arg1 momentClipRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withClipCatalog:(id)arg3 maxModuleLength:(unsigned long long)arg4;
- (id)configuration;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)mergeModulesFromRangesByModuleType:(id)arg1 momentClipRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)provideModulesForMomentClipRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withClipCatalog:(id)arg2 maxModuleLength:(unsigned long long)arg3 maxEmptySpaceLength:(unsigned long long)arg4 usingBlock:(id /* block */)arg5;
- (id)splitRanges:(id)arg1 maxLength:(unsigned long long)arg2;

@end

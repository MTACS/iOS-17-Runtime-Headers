
@protocol PXStoryColorGradingRepository

@required

- (long long)colorGradeKindForColorGradeCategory:(NSString *)arg1;
- (long long)colorGradeKindForColorGradeCategory:(NSString *)arg1 excludingKinds:(NSIndexSet *)arg2;
- (PXGColorLookupCube *)colorLookupCubeForColorGradeKind:(long long)arg1;
- (NSString *)localizedTitleForColorGradeKind:(long long)arg1;
- (unsigned long long)minimumCategoryKindFallbacks;
- (NSArray *)supportedColorGradeKinds;
- (NSArray *)supportedUserPickableColorGradeKinds;

@end

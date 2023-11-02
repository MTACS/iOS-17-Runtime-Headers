
@interface EDColorAnalyzer : NSObject {
    NSMutableDictionary * _cache;
}

- (void).cxx_destruct;
- (void)clearCache;
- (id)colorAtCenterOfSurface:(struct __IOSurface { }*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (id)colorsInSurface:(struct __IOSurface { }*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 clipToCircle:(bool)arg3 clipedToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)colorsSuggestionsForSurface:(struct __IOSurface { }*)arg1 maxSuggestions:(long long)arg2 clipToCircle:(bool)arg3 clipedToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)getRandomColors:(long long)arg1 from:(id)arg2;
- (id)init;
- (id)kmeansColorsForColors:(id)arg1 clusters:(long long)arg2;
- (id)kmeansForColors:(id)arg1 clusters:(long long)arg2;
- (bool)kmeansShouldStopWithPreviousColors:(id)arg1 newColors:(id)arg2 iterations:(long long)arg3;
- (id)removeSimilarColors:(id)arg1 minDistance:(double)arg2;

@end

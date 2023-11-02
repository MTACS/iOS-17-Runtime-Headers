
@interface PXStoryConcreteMutableAutoEditClipCatalog : PXStoryConcreteAutoEditClipCatalog

- (void)addClip:(id)arg1;
- (void)composeClipsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)enumerateMutableClipsUsingBlock:(id /* block */)arg1;
- (void)enumeratePairsOfMutableClipsUsingBlock:(id /* block */)arg1;
- (void)updateClipAtIndex:(long long)arg1 usingBlock:(id /* block */)arg2;
- (void)updateClipForDisplayAsset:(id)arg1 usingBlock:(id /* block */)arg2;

@end

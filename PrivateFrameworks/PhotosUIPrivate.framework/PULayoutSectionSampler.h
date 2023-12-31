
@interface PULayoutSectionSampler : NSObject

- (void)dumpInternalMemory;
- (void)enumerateUnsampledIndexesForSampledIndexInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (long long)indexForUnsampledIndex:(long long)arg1 isMainItem:(bool*)arg2;
- (long long)unsampledIndexForIndex:(long long)arg1;

@end

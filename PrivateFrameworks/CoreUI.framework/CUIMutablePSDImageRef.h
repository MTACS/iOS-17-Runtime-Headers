
@interface CUIMutablePSDImageRef : CUIPSDImageRef

- (void)addLayer:(id)arg1;
- (void)addLayoutMetricsChannel:(id)arg1;
- (void)addOrUpdateSlicesWithSliceRects:(id)arg1;
- (void)addOrUpdateSlicesWithXCutPositions:(id)arg1 yCutPositions:(id)arg2;
- (struct __CFData { }*)copyDefaultICCProfileData;
- (void)deleteLayerAtIndex:(unsigned int)arg1;
- (void)deleteLayoutMetricsChannelAtIndex:(unsigned int)arg1;
- (id)initWithPixelWidth:(unsigned long long)arg1 pixelHeight:(unsigned long long)arg2;
- (void)insertLayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertLayoutMetricsChannel:(id)arg1 atIndex:(unsigned int)arg2;
- (void*)newPSDGradientFromCUIPSDGradient:(id)arg1;
- (unsigned int)newSliceRectsArray:(struct PSDRect {}**)arg1 withSliceRects:(id)arg2;
- (unsigned int)newSliceRectsArray:(struct PSDRect {}**)arg1 withXCutPositions:(id)arg2 yCutPositions:(id)arg3;
- (unsigned int)newUInt32CArray:(unsigned int**)arg1 withNSArray:(id)arg2 prependNumber:(id)arg3 appendNumber:(id)arg4;
- (unsigned int)psdLayerBlendModeForCGBlendMode:(int)arg1;
- (bool)saveToURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)saveWithCompletionHandler:(id /* block */)arg1;
- (void)setFileURL:(id)arg1;
- (void)updateSliceName:(id)arg1 atIndex:(unsigned int)arg2;

@end

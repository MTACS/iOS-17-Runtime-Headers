
@protocol PXAudioAssetFetchResult <PXSectionedFetchResult>

@required

- (bool)containsObject:(id <PXAudioAsset>)arg1;
- (void)enumerateObjectsUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXAudioAsset> *, unsigned long long, bool*, void*
- (<PXAudioAsset> *)firstObject;
- (<PXAudioAsset> *)lastObject;
- (<PXAudioAsset> *)objectAtIndex:(unsigned long long)arg1;
- (<PXAudioAsset> *)objectAtIndexedSubscript:(unsigned long long)arg1;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)arg1;

@end

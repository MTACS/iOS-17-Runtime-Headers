
@protocol PXStoryAutoEditClipCatalog

@required

- (<PXStoryAutoEditClip> *)clipAtIndex:(long long)arg1;
- (<PXStoryAutoEditClip> *)clipForDisplayAsset:(id <PXDisplayAsset>)arg1;
- (void)enumerateClipsUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXStoryAutoEditClip> *, long long, bool*, void*
- (long long)numberOfClips;

@end

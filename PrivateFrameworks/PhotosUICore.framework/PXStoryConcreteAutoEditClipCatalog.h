
@interface PXStoryConcreteAutoEditClipCatalog : NSObject <NSCopying, NSMutableCopying, PXStoryAutoEditClipCatalog> {
    NSMutableDictionary * _clipIndicesByAssetUUID;
    NSMutableArray * _orderedClips;
}

@property (nonatomic, readonly) long long numberOfClips;

- (void).cxx_destruct;
- (id)clipAtIndex:(long long)arg1;
- (id)clipForDisplayAsset:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)enumerateClipsUsingBlock:(id /* block */)arg1;
- (long long)indexOfClipForDisplayAsset:(id)arg1;
- (id)init;
- (id)initWithCapacity:(long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)numberOfClips;

@end


@interface PhotosUICore.MediaViewRepresentationTungstenLayout : PXGAbsoluteCompositeLayout <PXGDisplayAssetSource, PXGLayoutContentSource> {
    void assetSpriteIndex;
    void badgeLayoutIndex;
    void contentAspectRatio;
    void contentObservation;
    void imageStreamVersion;
    void pixelBufferContentIndex;
    void playableLayoutIndex;
    void representationModel;
    void updater;
}

@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;

- (void).cxx_destruct;
- (void)alphaDidChange;
- (id)axSpriteIndexes;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 inLayout:(id)arg2;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (void)referenceSizeDidChange;
- (void)update;
- (void)updateContent;

@end

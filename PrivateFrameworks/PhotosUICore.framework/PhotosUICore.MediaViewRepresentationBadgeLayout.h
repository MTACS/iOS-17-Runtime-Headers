
@interface PhotosUICore.MediaViewRepresentationBadgeLayout : PXGLayout <PXGViewSource> {
    void badgeInfo;
    void badgeMediaVersion;
    void contentRect;
    void updater;
    void viewModel;
}

@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;

- (void).cxx_destruct;
- (id)axSpriteIndexes;
- (id)init;
- (void)referenceSizeDidChange;
- (void)update;
- (void)updateSprites;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;

@end

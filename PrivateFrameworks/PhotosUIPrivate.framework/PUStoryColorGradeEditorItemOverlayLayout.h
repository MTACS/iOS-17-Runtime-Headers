
@interface PUStoryColorGradeEditorItemOverlayLayout : PXGLayout <PXGNamedImageSource, PXGSolidColorSource, PXGStringSource> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  accessibleSpriteIndexes;
    void backgroundSpriteIndex;
    void cachedCaptionSpriteFrame;
    void captionBackgroundSpriteIndex;
    void captionBackgroundSpriteVersion;
    void captionHeight;
    void captionSpriteIndex;
    void captionSpriteVersion;
    void colorGradeKind;
    void selectionBadgeSpriteIndex;
    void updateFlags;
    void viewModel;
}

@property (nonatomic, readonly) NSIndexSet *axSelectedSpriteIndexes;
@property (nonatomic, readonly) NSIndexSet *axSpriteIndexes;
@property (nonatomic, readonly) NSIndexSet *axVisibleSpriteIndexes;

- (void).cxx_destruct;
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)axContentInfoAtSpriteIndex:(unsigned int)arg1;
- (id)axSelectedSpriteIndexes;
- (id)axSpriteIndexes;
- (id)axVisibleSpriteIndexes;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)displayScaleDidChange;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
- (id)imageConfigurationAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)init;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (void)referenceSizeDidChange;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(id*)arg3;
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)update;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)viewEnvironmentDidChange;

@end

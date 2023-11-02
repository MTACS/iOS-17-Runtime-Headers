
@interface PhotosUIPrivate.StoryColorGradeEditorContentLayout : PXGDecoratingLayout <PXGSelectionDecorationSource> {
    void overlayLayout;
    void viewModel;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDecoratedLayout:(id)arg1;
- (long long)overallSelectionOrderAtSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (struct { float x1; float x2; float x3; float x4; })overlayInsetsForSpriteIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)selectedSpriteIndexesInLayout:(id)arg1;
- (unsigned long long)selectionDecorationAdditionsInLayout:(id)arg1;
- (long long)selectionDecorationStyleInLayout:(id)arg1;

@end

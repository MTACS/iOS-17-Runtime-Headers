
@interface PhotosUIPrivate.StoryColorGradeEditorItemLayout : PXGAbsoluteCompositeLayout {
    void captionHeight;
    void clip;
    void clipLayout;
    void clipLayoutIndex;
    void clipTimeRange;
    void colorGradeKind;
    void overlayLayout;
    void overlayLayoutIndex;
    void previewMode;
    void updateFlags;
    void viewModel;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (void)referenceSizeDidChange;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(id*)arg3;
- (void)update;

@end

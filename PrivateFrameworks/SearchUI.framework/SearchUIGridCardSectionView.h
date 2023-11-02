
@interface SearchUIGridCardSectionView : SearchUICardSectionView <TLKImagesViewDelegate, UIContextMenuInteractionDelegate> {
    NSMapTable * _imageToRowModelMap;
    NSMutableArray * _previewTargetDummyViews;
    TLKImagesView * contentView;
}

@property (nonatomic, retain) TLKImagesView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSMapTable *imageToRowModelMap;
@property (retain) NSMutableArray *previewTargetDummyViews;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentView;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)imageToRowModelMap;
- (id)imageViewForInteraction:(id)arg1;
- (id)imagesInGrid:(id)arg1;
- (void)imagesView:(id)arg1 didSelectImage:(id)arg2;
- (id)previewTargetDummyViews;
- (void)setContentView:(id)arg1;
- (void)setImageToRowModelMap:(id)arg1;
- (void)setPreviewTargetDummyViews:(id)arg1;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end

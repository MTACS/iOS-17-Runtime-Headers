
@interface _PXFeedInlinePlaybackController : PXGridInlinePlaybackController {
    PXGLayout * _containerLayout;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _criticallyVisibleEdgeInsets;
    id /* block */  _itemLayoutDesiredPlayStateSetter;
    PXFeedViewModel * _viewModel;
}

@property (nonatomic, readonly) PXGLayout *containerLayout;
@property (nonatomic, readonly) id /* block */ itemLayoutDesiredPlayStateSetter;
@property (nonatomic, readonly) PXFeedViewModel *viewModel;

- (void).cxx_destruct;
- (id)_itemLayoutForPlaybackRecord:(id)arg1;
- (void)_playbackRecord:(id)arg1 setDesiredPlayState:(long long)arg2;
- (bool)canPlayAsset:(id)arg1;
- (id)containerLayout;
- (id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })criticallyVisibleEdgeInsets;
- (id)currentHoveredDisplayAsset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentVisibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForPlaybackRecord:(id)arg1 minPlayableSize:(out struct CGSize { double x1; double x2; }*)arg2;
- (id)initWithContainerLayout:(id)arg1 viewModel:(id)arg2 itemLayoutDesiredPlayStateSetter:(id /* block */)arg3;
- (id /* block */)itemLayoutDesiredPlayStateSetter;
- (id)viewModel;

@end

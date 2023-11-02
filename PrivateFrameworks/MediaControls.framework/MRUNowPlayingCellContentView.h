
@interface MRUNowPlayingCellContentView : UIView {
    MRUArtworkView * _artworkView;
    MRUNowPlayingHeaderView * _headerView;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (nonatomic, readonly) MRUArtworkView *artworkView;
@property (nonatomic, readonly) MRUNowPlayingHeaderView *headerView;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic, readonly) double textInset;

- (void).cxx_destruct;
- (id)artworkView;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setStylingProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stylingProvider;
- (double)textInset;

@end

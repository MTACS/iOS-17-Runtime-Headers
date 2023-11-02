
@interface MRUActivityNowPlayingHeaderView : UIView {
    MRUNowPlayingLabelView * _labelView;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (nonatomic, readonly) double labelInset;
@property (nonatomic, readonly) MRUNowPlayingLabelView *labelView;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;

- (void).cxx_destruct;
- (id)init;
- (double)labelInset;
- (id)labelView;
- (void)layoutSubviews;
- (void)setStylingProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stylingProvider;
- (void)updateVisibilty;

@end


@interface MFSuggestionBannerView : MFMessageHeaderViewBlock {
    UIView<SGBannerProtocol> * _banner;
    NSArray * _bannerConstraints;
}

@property (nonatomic, retain) UIView<SGBannerProtocol> *banner;
@property (nonatomic, retain) NSArray *bannerConstraints;

- (void).cxx_destruct;
- (id)_constraintsForEdges:(unsigned long long)arg1 banner:(id)arg2 useLayoutMarginsGuide:(bool)arg3;
- (id)banner;
- (id)bannerConstraints;
- (void)commonInitWithBanner:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 banner:(id)arg2;
- (void)setBanner:(id)arg1;
- (void)setBannerConstraints:(id)arg1;
- (void)setSeparatorDrawsFlushWithLeadingEdge:(bool)arg1;
- (void)setSeparatorDrawsFlushWithTrailingEdge:(bool)arg1;
- (double)trailingOffsetToMarginForCloseButtonAlignment;
- (void)updateConstraints;
- (void)willMoveToSuperview:(id)arg1;

@end

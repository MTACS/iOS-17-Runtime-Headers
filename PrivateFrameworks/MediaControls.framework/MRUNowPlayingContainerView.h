
@interface MRUNowPlayingContainerView : UIView <MRUVisualStylingProviderObserver> {
    UIView * _contentView;
    UIView * _separatorView;
    bool  _showSeparator;
    MRUVisualStylingProvider * _stylingProvider;
    bool  _supportsHorizontalLayout;
}

@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic) bool showSeparator;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsHorizontalLayout;

- (void).cxx_destruct;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)separatorView;
- (void)setContentView:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setShowSeparator:(bool)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setSupportsHorizontalLayout:(bool)arg1;
- (bool)showSeparator;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stylingProvider;
- (bool)supportsHorizontalLayout;
- (void)updateVisibility;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end

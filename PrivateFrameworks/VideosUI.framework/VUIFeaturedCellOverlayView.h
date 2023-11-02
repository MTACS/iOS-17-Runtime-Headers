
@interface VUIFeaturedCellOverlayView : VUIBaseView {
    UIView * _appleTVChannelLogoView;
    NSArray * _buttons;
    VUILabel * _disclaimerLabel;
    VUILabel * _subtitleLabel;
    VUILabel * _titleLabel;
    bool  _usesDefaultOverlayType;
}

@property (nonatomic, retain) UIView *appleTVChannelLogoView;
@property (nonatomic, retain) NSArray *buttons;
@property (nonatomic, retain) VUILabel *disclaimerLabel;
@property (nonatomic, retain) VUILabel *subtitleLabel;
@property (nonatomic, retain) VUILabel *titleLabel;
@property (nonatomic) bool usesDefaultOverlayType;

- (void).cxx_destruct;
- (void)_layoutSubviews;
- (id)appleTVChannelLogoView;
- (id)buttons;
- (id)disclaimerLabel;
- (void)setAppleTVChannelLogoView:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setDisclaimerLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUsesDefaultOverlayType:(bool)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (bool)usesDefaultOverlayType;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end


@interface DBIconLabelBackdropView : UIView {
    UIView * _highlightView;
    bool  _highlighted;
    _TtC9DashBoard22DBDashboardPlatterView * _platterView;
    CRSUIWallpaperPreferences * _wallpaperPreferences;
}

@property (nonatomic, retain) UIView *highlightView;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) _TtC9DashBoard22DBDashboardPlatterView *platterView;
@property (nonatomic, retain) CRSUIWallpaperPreferences *wallpaperPreferences;

- (void).cxx_destruct;
- (void)_updateHighlight;
- (id)highlightView;
- (id)initWithWallpaperPreferences:(id)arg1;
- (bool)isHighlighted;
- (id)platterView;
- (void)setHighlightView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setWallpaperPreferences:(id)arg1;
- (id)wallpaperPreferences;

@end

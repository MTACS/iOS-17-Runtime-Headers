
@interface HUTitleControlCell : HUControlPanelCell

@property (nonatomic, copy) NSString *controlTitle;
@property (nonatomic, retain) UIView<HUControlView> *controlView;

- (id)allControlViews;
- (id)controlTitle;
- (id)controlView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setControlTitle:(id)arg1;
- (void)setControlView:(id)arg1;

@end

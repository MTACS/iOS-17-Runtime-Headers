
@interface HUSimpleControlCell : HUControlPanelCell {
    UIView<HUControlView> * _controlView;
    NSArray * _controlViewConstraints;
}

@property (nonatomic, retain) UIView<HUControlView> *controlView;
@property (nonatomic, copy) NSArray *controlViewConstraints;

- (void).cxx_destruct;
- (void)_updateSliderConstraints;
- (id)allControlViews;
- (id)controlView;
- (id)controlViewConstraints;
- (void)prepareForReuse;
- (void)setControlView:(id)arg1;
- (void)setControlViewConstraints:(id)arg1;

@end

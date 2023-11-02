
@interface GKDashboardPickerPlayerCell : GKFocusHighlightingCollectionViewCell {
    UIView * _backView;
    UIView * _bottomLine;
    UIView * _container;
    UIView * _monogramColorView;
    NSString * _originalSubtitle;
    GKDashboardPlayerPhotoView * _playerView;
    NSLayoutConstraint * _playerViewHeightConstraint;
    UIView * _ringView;
    bool  _selectable;
    UILabel * _subtitle;
    UILabel * _title;
    bool  _usesClearBackground;
}

@property (nonatomic) UIView *backView;
@property (nonatomic) UIView *bottomLine;
@property (nonatomic) UIView *container;
@property (nonatomic) bool lineVisible;
@property (nonatomic) UIView *monogramColorView;
@property (nonatomic, retain) NSString *originalSubtitle;
@property (nonatomic, retain) GKDashboardPlayerPhotoView *playerView;
@property (nonatomic, retain) NSLayoutConstraint *playerViewHeightConstraint;
@property (nonatomic) UIView *ringView;
@property (nonatomic) bool selectable;
@property (nonatomic) UILabel *subtitle;
@property (nonatomic) UILabel *title;
@property (nonatomic) bool usesClearBackground;

+ (struct CGSize { double x1; double x2; })defaultSize;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)backView;
- (id)bottomLine;
- (bool)canBecomeFocused;
- (id)cellBackgroundColor;
- (void)configureWithPlayer:(id)arg1 isCoreRecent:(bool)arg2 matchedContactName:(id)arg3 onlyShowContactName:(bool)arg4;
- (id)container;
- (bool)lineVisible;
- (id)monogramColorView;
- (id)originalSubtitle;
- (id)playerView;
- (id)playerViewHeightConstraint;
- (id)ringView;
- (bool)selectable;
- (void)setBackView:(id)arg1;
- (void)setBottomLine:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLineVisible:(bool)arg1;
- (void)setMonogramColorView:(id)arg1;
- (void)setOriginalSubtitle:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setPlayerViewHeightConstraint:(id)arg1;
- (void)setRingView:(id)arg1;
- (void)setSelectable:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsesClearBackground:(bool)arg1;
- (id)subtitle;
- (id)subtitleForPlayer:(id)arg1 isCoreRecent:(bool)arg2 matchedContactName:(id)arg3 onlyShowContactName:(bool)arg4;
- (id)title;
- (void)updateCellBackground;
- (void)updateLayerMask:(id)arg1;
- (bool)usesClearBackground;

@end

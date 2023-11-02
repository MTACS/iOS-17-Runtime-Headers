
@interface CNPropertySimpleTransportCell : CNPropertySimpleCell {
    UIColor * _actionsColor;
    bool  _allowsActions;
    UIView * _badgeView;
    bool  _needsUpdateTouchAreas;
    bool  _shouldShowBadge;
    bool  _shouldShowTransportButtons;
    UIImageView * _standardStarView;
    UIImageView * _starView;
    CNTransportButton * _transportIcon1;
    CNTransportButton * _transportIcon2;
    CNTransportButton * _transportIcon3;
}

@property (nonatomic, retain) UIColor *actionsColor;
@property (nonatomic) bool allowsActions;
@property (nonatomic, retain) UIView *badgeView;
@property (nonatomic) bool needsUpdateTouchAreas;
@property (nonatomic) bool shouldShowBadge;
@property (nonatomic, readonly) bool shouldShowStar;
@property (nonatomic) bool shouldShowTransportButtons;
@property (nonatomic, readonly) UIView *standardBadgeView;
@property (nonatomic, readonly) UIImageView *standardStarView;
@property (nonatomic, readonly) CNTransportButton *standardTransportIcon;
@property (nonatomic, readonly) CNTransportButton *transportIcon1;
@property (nonatomic, readonly) CNTransportButton *transportIcon2;
@property (nonatomic, readonly) CNTransportButton *transportIcon3;

+ (void)_updateStarImageForView:(id)arg1;
+ (id)standardStarView;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)actionsColor;
- (bool)allowsActions;
- (id)badgeView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (bool)needsUpdateTouchAreas;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)prepareForReuse;
- (id)rightMostView;
- (void)setActionsColor:(id)arg1;
- (void)setAllowsActions:(bool)arg1;
- (void)setBadgeView:(id)arg1;
- (void)setCardGroupItem:(id)arg1;
- (void)setNeedsUpdateTouchAreas:(bool)arg1;
- (void)setShouldShowBadge:(bool)arg1;
- (void)setShouldShowTransportButtons:(bool)arg1;
- (bool)shouldPerformDefaultAction;
- (bool)shouldShowBadge;
- (bool)shouldShowStar;
- (bool)shouldShowTransportButtons;
- (id)standardBadgeView;
- (id)standardStarView;
- (id)standardTransportIcon;
- (void)transportButtonClicked:(id)arg1;
- (id)transportIcon1;
- (id)transportIcon2;
- (id)transportIcon3;
- (void)updateLabelNeedingHuggingContent;
- (void)updateStarIcon;
- (void)updateTransportButtons;
- (void)updateWithPropertyItem:(id)arg1;
- (id)variableConstraints;

@end

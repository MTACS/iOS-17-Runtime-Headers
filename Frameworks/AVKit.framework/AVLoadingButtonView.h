
@interface AVLoadingButtonView : UIView <AVPlaybackControlsViewItem> {
    AVButton * _button;
    bool  _collapsed;
    bool  _collapsedOrExcluded;
    bool  _hasAlternateAppearance;
    bool  _hasFullScreenAppearance;
    bool  _included;
    AVLayoutItemAttributes * _layoutAttributes;
    UIActivityIndicatorView * _loadingIndicator;
    bool  _removed;
    bool  _showsLoadingIndicator;
}

@property (nonatomic, readonly) AVButton *button;
@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (getter=isCollapsedOrExcluded, nonatomic, readonly) bool collapsedOrExcluded;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } extrinsicContentSize;
@property (nonatomic) bool hasAlternateAppearance;
@property (nonatomic) bool hasFullScreenAppearance;
@property (readonly) unsigned long long hash;
@property (getter=isIncluded, nonatomic) bool included;
@property (nonatomic, readonly) AVLayoutItemAttributes *layoutAttributes;
@property (nonatomic, retain) UIActivityIndicatorView *loadingIndicator;
@property (getter=isRemoved, nonatomic) bool removed;
@property (nonatomic) bool showsLoadingIndicator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateLayoutItem;
- (id)button;
- (struct CGSize { double x1; double x2; })extrinsicContentSize;
- (bool)hasAlternateAppearance;
- (bool)hasFullScreenAppearance;
- (id)initWithTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isCollapsed;
- (bool)isCollapsedOrExcluded;
- (bool)isIncluded;
- (bool)isRemoved;
- (id)layoutAttributes;
- (void)layoutAttributesDidChange;
- (void)layoutSubviews;
- (id)loadingIndicator;
- (void)setCollapsed:(bool)arg1;
- (void)setExtrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHasAlternateAppearance:(bool)arg1;
- (void)setHasFullScreenAppearance:(bool)arg1;
- (void)setIncluded:(bool)arg1;
- (void)setLoadingIndicator:(id)arg1;
- (void)setRemoved:(bool)arg1;
- (void)setShowsLoadingIndicator:(bool)arg1;
- (bool)showsLoadingIndicator;

@end

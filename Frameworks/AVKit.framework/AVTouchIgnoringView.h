
@interface AVTouchIgnoringView : UIView <AVPlaybackControlsViewItem> {
    bool  _collapsed;
    bool  _collapsedOrExcluded;
    struct CGSize { 
        double width; 
        double height; 
    }  _extrinsicContentSize;
    bool  _hasAlternateAppearance;
    bool  _hasFullScreenAppearance;
    bool  _included;
    AVLayoutItemAttributes * _layoutAttributes;
    bool  _removed;
}

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
@property (getter=isRemoved, nonatomic) bool removed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateLayoutItem;
- (struct CGSize { double x1; double x2; })extrinsicContentSize;
- (bool)hasAlternateAppearance;
- (bool)hasFullScreenAppearance;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCollapsed;
- (bool)isCollapsedOrExcluded;
- (bool)isIncluded;
- (bool)isRemoved;
- (id)layoutAttributes;
- (void)layoutAttributesDidChange;
- (struct CGSize { double x1; double x2; })minimumSize;
- (void)setCollapsed:(bool)arg1;
- (void)setExtrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHasAlternateAppearance:(bool)arg1;
- (void)setHasFullScreenAppearance:(bool)arg1;
- (void)setIncluded:(bool)arg1;
- (void)setRemoved:(bool)arg1;

@end

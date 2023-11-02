
@interface TabBarItemLayoutInfo : NSObject {
    unsigned long long  _activeAnimationCount;
    bool  _canClose;
    double  _contentOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    bool  _hidesTitleText;
    UIView * _itemSnapshotView;
    bool  _leadingEdgeVisible;
    bool  _removedFromTabBar;
    bool  _reordering;
    TabBar * _tabBar;
    TabBarItem * _tabBarItem;
    TabBarItemView * _tabBarItemPreviewView;
    TabBarItemView * _tabBarItemView;
    double  _titleAnchorAdditionalOffset;
    double  _titleLayoutWidth;
    bool  _trailingActiveItem;
    bool  _trailingEdgeVisible;
    bool  _visibleInTabBar;
}

@property (nonatomic) unsigned long long activeAnimationCount;
@property (nonatomic) bool canClose;
@property (nonatomic) double contentOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) bool hasViews;
@property (nonatomic) bool hidesTitleText;
@property (getter=isLeadingEdgeVisible, nonatomic) bool leadingEdgeVisible;
@property (getter=isRemovedFromTabBar, nonatomic) bool removedFromTabBar;
@property (getter=isReordering, nonatomic) bool reordering;
@property (nonatomic, readonly) TabBar *tabBar;
@property (nonatomic, readonly) TabBarItem *tabBarItem;
@property (nonatomic, readonly) TabBarItemView *tabBarItemPreviewView;
@property (nonatomic, readonly) TabBarItemView *tabBarItemView;
@property (nonatomic) double titleAnchorAdditionalOffset;
@property (nonatomic) double titleLayoutWidth;
@property (getter=isTrailingActiveItem, nonatomic) bool trailingActiveItem;
@property (getter=isTrailingEdgeVisible, nonatomic) bool trailingEdgeVisible;
@property (nonatomic, readonly) TabBarItemView *viewForDragPreview;
@property (getter=isVisibleInTabBar, nonatomic) bool visibleInTabBar;

- (void).cxx_destruct;
- (void)_clearView:(id)arg1;
- (void)_clearViews;
- (void)_clearViewsIfNeeded;
- (bool)_requiresViews;
- (id)_reusableView;
- (void)_updateHidesTitleText;
- (long long)_visibleEdge;
- (unsigned long long)activeAnimationCount;
- (bool)canClose;
- (void)clearPreviewView;
- (void)closeButtonTapped:(id)arg1;
- (double)contentOffset;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)hasViews;
- (bool)hidesTitleText;
- (id)init;
- (id)initWithTabBar:(id)arg1 item:(id)arg2;
- (bool)isLeadingEdgeVisible;
- (bool)isRemovedFromTabBar;
- (bool)isReordering;
- (bool)isTrailingActiveItem;
- (bool)isTrailingEdgeVisible;
- (bool)isVisibleInTabBar;
- (void)itemDidUpdateIcon;
- (void)itemDidUpdateIsActive;
- (void)itemDidUpdateIsPinned;
- (void)itemDidUpdateIsPlaceholder;
- (void)itemDidUpdateIsUnread;
- (void)itemDidUpdateMediaState;
- (void)itemDidUpdateShareParticipants;
- (void)itemDidUpdateTitle;
- (void)mediaStateMuteButtonTapped:(id)arg1;
- (void)setActiveAnimationCount:(unsigned long long)arg1;
- (void)setCanClose:(bool)arg1;
- (void)setContentOffset:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidesTitleText:(bool)arg1;
- (void)setLeadingEdgeVisible:(bool)arg1;
- (void)setRemovedFromTabBar:(bool)arg1;
- (void)setReordering:(bool)arg1;
- (void)setTitleAnchorAdditionalOffset:(double)arg1;
- (void)setTitleLayoutWidth:(double)arg1;
- (void)setTrailingActiveItem:(bool)arg1;
- (void)setTrailingEdgeVisible:(bool)arg1;
- (void)setVisibleInTabBar:(bool)arg1;
- (id)tabBar;
- (id)tabBarItem;
- (id)tabBarItemPreviewView;
- (id)tabBarItemView;
- (double)titleAnchorAdditionalOffset;
- (double)titleLayoutWidth;
- (void)updateTabBarStyle;
- (void)updateTitleTruncation;
- (id)viewForDragPreview;

@end

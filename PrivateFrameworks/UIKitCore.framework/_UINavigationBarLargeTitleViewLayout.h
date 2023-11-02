
@interface _UINavigationBarLargeTitleViewLayout : NSObject <_UINavigationBarLayoutParticipating> {
    UIView * _accessoryView;
    unsigned long long  _accessoryViewHorizontalAlignment;
    bool  _alignAccessoryViewToTitleBaseline;
    double  _cachedRestingHeight;
    _UINavigationBarLargeTitleView * _contentView;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _layoutMargins;
    bool  _overlaysContentView;
    bool  _providesExtraSpaceForExcessiveLineHeights;
    NSMutableDictionary * _restingHeightCache;
    NSMutableDictionary * _titleHeightCache;
    UILabel * _titleLabel;
    double  _titleRestingHeight;
    long long  _titleType;
    unsigned long long  _twoLineMode;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic) unsigned long long accessoryViewHorizontalAlignment;
@property (nonatomic) bool alignAccessoryViewToTitleBaseline;
@property (nonatomic, readonly) _UINavigationBarLargeTitleView *contentView;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;
@property (nonatomic) bool overlaysContentView;
@property (nonatomic) bool providesExtraSpaceForExcessiveLineHeights;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) double titleRestingHeight;
@property (nonatomic) long long titleType;
@property (nonatomic) unsigned long long twoLineMode;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_cachedTitleHeightSizeAndUpdateRestingSizeForWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })_cachedTitleHeightSizeAndUpdateRestingSizeForWidthSupportingMultiLineShrinkToFit:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentLayoutBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentLayoutBoundsUsingRestingTitleHeight:(bool)arg1;
- (void)_enforceLayoutOrdering;
- (void)_invalidateTitleHeightCache;
- (double)_textHeightForSize:(struct CGSize { double x1; double x2; })arg1 titleType:(long long)arg2;
- (id)accessoryView;
- (unsigned long long)accessoryViewHorizontalAlignment;
- (bool)alignAccessoryViewToTitleBaseline;
- (void)cleanupAfterLayoutTransitionCompleted;
- (id)contentView;
- (id)description;
- (id)initWithContentView:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (void)layoutViews;
- (void)layoutViewsWithOffset:(struct UIOffset { double x1; double x2; })arg1 useRestingTitleHeight:(bool)arg2;
- (void)layoutViewsWithOffsetSupportingMultiLineShrinkToFit:(struct UIOffset { double x1; double x2; })arg1 useRestingTitleHeight:(bool)arg2;
- (bool)overlaysContentView;
- (bool)providesExtraSpaceForExcessiveLineHeights;
- (void)removeContent;
- (double)restingTitleHeightForSize:(struct CGSize { double x1; double x2; })arg1 type:(long long)arg2;
- (void)setAccessoryView:(id)arg1;
- (void)setAccessoryViewHorizontalAlignment:(unsigned long long)arg1;
- (void)setAlignAccessoryViewToTitleBaseline:(bool)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setContentHidden:(bool)arg1;
- (void)setLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOverlaysContentView:(bool)arg1;
- (void)setProvidesExtraSpaceForExcessiveLineHeights:(bool)arg1;
- (void)setTitleType:(long long)arg1;
- (void)setTwoLineMode:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeFittingSize:(struct CGSize { double x1; double x2; })arg1 titleType:(long long)arg2;
- (id)titleLabel;
- (double)titleRestingHeight;
- (long long)titleType;
- (unsigned long long)twoLineMode;
- (void)updateLayoutData:(id)arg1 layoutWidth:(double)arg2;
- (void)updateRestingTitleHeight;

@end

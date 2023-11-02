
@interface FCUIActivityListContentView : UIView <FCUIContentSizeCategoryAdjusting> {
    NSArray * _activityViews;
    bool  _adjustsFontForContentSizeCategory;
    struct CGSize { 
        double width; 
        double height; 
    }  _collapsedSize;
    UIView<FCUIActivityDisplaying> * _compactActivityView;
    bool  _contentDetached;
    bool  _footerPinnedToBottom;
    UIView * _footerView;
    bool  _footerViewValid;
    UIView * _headerView;
    bool  _headerViewValid;
    NSMutableArray * _outgoingActivityViews;
    NSArray * _purgeableActivityViews;
}

@property (nonatomic, copy) NSArray *activityViews;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) struct CGSize { double x1; double x2; } collapsedSize;
@property (nonatomic, retain) UIView<FCUIActivityDisplaying> *compactActivityView;
@property (getter=isContentDetached, nonatomic) bool contentDetached;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFooterPinnedToBottom, nonatomic) bool footerPinnedToBottom;
@property (nonatomic, retain) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contentSizeCategoryAdjustingViews;
- (struct CGSize { double x1; double x2; })_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 collapsedToPill:(bool)arg2 includingFooter:(bool)arg3 forceMeasurement:(bool)arg4;
- (id)activityViews;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (struct CGSize { double x1; double x2; })collapsedSize;
- (id)compactActivityView;
- (id)footerView;
- (id)headerView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isContentDetached;
- (bool)isFooterPinnedToBottom;
- (void)layoutSubviews;
- (void)setActivityViews:(id)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setCollapsedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCompactActivityView:(id)arg1;
- (void)setContentDetached:(bool)arg1;
- (void)setFooterPinnedToBottom:(bool)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsCollapsedToPill:(struct CGSize { double x1; double x2; })arg1;
- (id)subviewFramesInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
